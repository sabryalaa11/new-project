#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;

class Hotal
{
private:
    char name[50];
    char Date[50];
    int number_nights;
    char type_room[50];

public:
    Hotal(const char *name = "no name", const char *Date = "no Date", int number_nights = 0, const char *type_room = "no type_room")
    {
        strcpy_s(this->name, 50, name);
        strcpy_s(this->Date, 50, Date);
        this->number_nights = number_nights;
        strcpy_s(this->type_room, 50, type_room);
    }

    void bookRoom()
    {
        cout << "Enter your name: " << endl;
        cin.getline(name, 50);

        cout << "Enter your Date: " << endl;
        cin.getline(Date, 50);

        cout << "Enter number of nights: " << endl;
        cin >> number_nights;
        cin.ignore();

        cout << "Enter room type (standard/deluxe/suite): ";
        cin.getline(type_room, 50);

        cout << "\nRoom booked successfully!\n";
        cout << endl;
    }
    void viweBooking()
    {
        if (strcmp(name, "no name") == 0)
        { // strcmp هي دالة قياسية في  تستخدم لمقارنة سلسلتين نصيتين. إذا كانت السلسلتان متطابقتين، فإنها تعيد القيمة 0.
            cout << "No booking found!" << endl;
        }
        else
        {
            cout << "\nBooking Details: \n";
            cout << "Name: " << name << endl;
            cout << "Date: " << Date << endl;
            cout << "Number of nights: " << number_nights << endl;
            cout << "Room type: " << type_room << endl;
            cout << endl;
        }
    }
    void editBooking()
    {
        if (strcmp(name, "no name") == 0)
        {
            cout << "No booking found to edit." << endl;
        }
        else
        {
            cout << "\nEdit your booking details:\n";
            bookRoom();
            cout << "\nBooking updated successfully!\n";
            cout << endl;
        }
    }
    void CancelBooking()
    {
        if (strcmp(name, "no name") == 0)
        {
            cout << "No booking found to cancel." << endl;
        }
        else
        {
            strcpy_s(name, 50, "name");
            strcpy_s(Date, 50, "Date");
            number_nights = 0;
            strcpy_s(type_room, 50, "type_room");
            cout << "Booking canceled successfully.\n";
            cout << endl;
        }
    }
};

int main()
{
    int choice;
    Hotal booking;
    while (true)
    {
        cout << "1. Booking room-> " << endl;
        cout << "2. View Booking-> " << endl;
        cout << "3. Edit Booking-> " << endl;
        cout << "4. Cancel a booking-> " << endl;
        cout << "5. Exit-> " << endl;
        cout << "** Enter your choice **-> " << endl;
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            booking.bookRoom();
            break;
        case 2:
            booking.viweBooking();
            break;
        case 3:
            booking.editBooking();
            break;
        case 4:
            booking.CancelBooking();
            break;
        case 5:
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}
