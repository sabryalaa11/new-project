#include <iostream>
#include <cstring>

using namespace std;

class Hotal
{
private:
    static int id_counter;
    int id;
    char name[50];
    char Date[50];
    int number_nights;
    char type_room[50];
    int Booking_number;

public:
    Hotal(const char *name = "no name", const char *Date = "no Date", int number_nights = 0, const char *type_room = "no type_room", int Booking_number = 0)
        : id(++id_counter), Booking_number(Booking_number)
    {
        strcpy_s(this->name, 50, name);
        strcpy_s(this->Date, 50, Date);
        this->number_nights = number_nights;
        strcpy_s(this->type_room, 50, type_room);
    }

    static void resetIDCounter() // دالة لإعادة تعيين العداد (اختياري)
    {
        id_counter = 0;
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

        cout << "Enter Booking Number: ";
        cin >> Booking_number;
        cin.ignore();

        cout << "\nRoom booked successfully! Booking Number: " << Booking_number << endl;
        cout << endl;
    }

    void viewBooking()
    {
        if (strcmp(name, "no name") == 0)
        {
            cout << "No booking found!" << endl;
        }
        else
        {
            cout << "\nBooking Details: \n";
            cout << "Booking Number: " << Booking_number << endl;
            cout << "Name: " << name << endl;
            cout << "Date: " << Date << endl;
            cout << "Number of nights: " << number_nights << endl;
            cout << "Room type: " << type_room << endl;
            cout << endl;
        }
    }

    void editBooking()
    {
        int sBookingNumber;
        cout << "Enter Booking Number to edit: " << endl;
        cin >> sBookingNumber;
        cin.ignore();

        if (sBookingNumber != Booking_number)
        {
            cout << "No booking found with the given Booking Number." << endl;
        }
        else
        {
            cout << "\nEdit your booking details:\n";
            bookRoom();
            cout << "\nBooking updated successfully!\n";
            cout << endl;
        }
    }

    void cancelBooking()
    {
        int sBookingNumber;
        cout << "Enter Booking Number to cancel: " << endl;
        cin >> sBookingNumber;
        cin.ignore();

        if (sBookingNumber != Booking_number)
        {
            cout << "No booking found with the given Booking Number." << endl;
        }
        else
        {
            strcpy_s(name, 50, "no name");
            strcpy_s(Date, 50, "no Date");
            number_nights = 0;
            strcpy_s(type_room, 50, "no type_room");
            Booking_number = 0; // Optionally reset Booking Number
            cout << "Booking canceled successfully.\n";
            cout << endl;
        }
    }
};

int Hotal::id_counter = 0;

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
            booking.viewBooking();
            break;
        case 3:
            booking.editBooking();
            break;
        case 4:
            booking.cancelBooking();
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
