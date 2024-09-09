#include <iostream>
#include <cstring>
#include <ctime>
#include <vector>

using namespace std;

class Ticket
{
private:
    char *Movie_name;
    char *Show_time;
    char *Seat_number;
    int ticket_number;

public:
    Ticket(const char *Movie_name, const char *Show_time, const char *Seat_number, int ticket_number = 0)
    {
        this->Movie_name = new char[strlen(Movie_name) + 1];
        strcpy(this->Movie_name, Movie_name);

        this->Show_time = new char[strlen(Show_time) + 1];
        strcpy(this->Show_time, Show_time);

        this->Seat_number = new char[strlen(Seat_number) + 1];
        strcpy(this->Seat_number, Seat_number);

        this->ticket_number = ticket_number;
    }
    ~Ticket()
    {
        delete[] Movie_name;
        delete[] Show_time;
        delete[] Seat_number;
    }
};

class Cinema
{
private:
    int **seats;               // Dynamic matrix of seats.
    int Nha;                   // number halls available.
    int Nsh;                   // Number seats in each hall.
    vector<string> hallMovies; // Movie assigned to each hall.
    static int totalTickets;   // Track the total number of tickets sold.

public:
    // Constructor to initialize the cinema with halls, seats, and movies
    Cinema(int Nha, int Nsh, const vector<string> &movies)
    {
        this->Nha = Nha;
        this->Nsh = Nsh;

        if (movies.size() != Nha)
        {
            cout << "Error: The number of movies must match the number of halls." << endl;
            exit(1);
        }

        this->hallMovies = movies;

        seats = new int *[Nha]; // تخصيص المصفوفة لتمثيل عدد القاعات
        for (int i = 0; i < Nha; ++i)
        {
            seats[i] = new int[Nsh]; // تخصيص المصفوفة لتمثيل عدد المقاعد في كل قاعة
            for (int j = 0; j < Nsh; ++j)
            {
                seats[i][j] = 0; // يعني أن المقعد غير محجوز
            }
        }
    }

    ~Cinema()
    {
        for (int i = 0; i < Nha; ++i)
        {
            delete[] seats[i];
        }
        delete[] seats;
    }

    // Function to reserve a specific seat.
    void bookticket(int hallNumber, int seatNumber)
    {
        if (hallNumber < 0 || hallNumber >= Nha || seatNumber < 0 || seatNumber >= Nsh)
        {
            cout << "Invalid hall or seat number!" << endl;
            return;
        }
        if (seats[hallNumber][seatNumber] == 0)
        {
            seats[hallNumber][seatNumber] = 1; // 1 حجز المقعد
            totalTickets++;
            cout << "Seat " << seatNumber + 1 << " in hall " << hallNumber + 1 << " has been successfully booked!" << endl;
        }
        else
        {
            cout << "Seat is already booked! " << endl;
        }
    }

    // Function to cancel a seat reservation.
    void cancelTicket(int hallNumber, int seatNumber)
    {
        if (hallNumber < 0 || hallNumber >= Nha || seatNumber < 0 || seatNumber >= Nsh)
        {
            cout << "Invalid hall or seat number!" << endl;
            return;
        }

        if (seats[hallNumber][seatNumber] == 1)
        {
            seats[hallNumber][seatNumber] = 0; // 0 إلغاء الحجز
            totalTickets--;
            cout << "Seat " << seatNumber + 1 << " in hall " << hallNumber + 1 << " has been successfully cancelled!" << endl;
        }
        else
        {
            cout << "Seat is not booked yet!" << endl;
        }
    }

    // Function to display the status of seats in the selected hall.
    void showHallstatus(int hallNumber) const
    {
        if (hallNumber < 0 || hallNumber >= Nha)
        {
            cout << "Invalid hall number!" << endl;
            return;
        }
        cout << "Hall " << hallNumber + 1 << " seating status:" << endl;
        for (int i = 0; i < Nsh; i++)
        {
            cout << "Seat " << i + 1 << (seats[hallNumber][i] == 0 ? " Available " : " Booked ") << endl;
        }
    }

    // Function to display the total number of tickets booked.
    static void ShowTotalTicket()
    {
        cout << "Total tickets booked: " << totalTickets << endl;
    }

    // Function to display the movie assigned to each hall.
    void showMovies() const
    {
        cout << "Movies assigned to halls: " << endl;
        for (int i = 0; i < hallMovies.size(); i++)
        {
            cout << "Hall " << i + 1 << ": " << hallMovies[i] << endl;
        }
    }

    // Getter function to return the movie assigned to a specific hall.
    string getMovieForHall(int hallNumber) const
    {
        if (hallNumber < 0 || hallNumber >= Nha)
        {
            return "Invalid hall number!";
        }
        return hallMovies[hallNumber];
    }
};

int Cinema::totalTickets = 0;

class Customer
{
private:
    string name;
    int hallNumber;
    int seatNumber;

public:
    Customer(const string &name) : name(name) {}

    void bookSeat(Cinema &cinema)
    {
        cout << "Enter hall number: ";
        cin >> hallNumber;
        cout << "Enter seat number: ";
        cin >> seatNumber;
        cinema.bookticket(hallNumber - 1, seatNumber - 1); // -1 لتعويض فهرسة المصفوفة التي تبدأ من 0

        cout << "You have booked a seat for the movie: " << cinema.getMovieForHall(hallNumber - 1) << endl;
    }

    void cancelSeat(Cinema &cinema)
    {
        cout << "Enter hall number to cancel: ";
        cin >> hallNumber;
        cout << "Enter seat number to cancel: ";
        cin >> seatNumber;
        cinema.cancelTicket(hallNumber - 1, seatNumber - 1);
    }

    void showHallStatus(Cinema &cinema)
    {
        cout << "Enter hall number: ";
        cin >> hallNumber;
        cinema.showHallstatus(hallNumber - 1);
    }
};

int main()
{
    vector<string> movies{"The Force", "Al-Baha Talmaze", "Hob Alomr"};
    Cinema cinema(3, 5, movies); // 3 قاعات وكل قاعة لها فيلم مخصص
    Customer customer("John");

    int choice;
    do
    {
        cout << "\nCinema Ticket Management System" << endl;
        cout << "1. Book a seat" << endl;
        cout << "2. Cancel a seat" << endl;
        cout << "3. Show hall status" << endl;
        cout << "4. Show total tickets booked" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            customer.bookSeat(cinema);
            break;
        case 2:
            customer.cancelSeat(cinema);
            break;
        case 3:
            customer.showHallStatus(cinema);
            break;
        case 4:
            Cinema::ShowTotalTicket();
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 0);

    return 0;
}
