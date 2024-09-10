#include <iostream>
#include <vector>
#include <string> // Use string instead of cstring

using namespace std;

class User
{
private:
    string username;
    string password;
    static int userCount;

public:
    User(const string &username = "", const string &password = "")
    {
        this->username = username;
        this->password = password;
        userCount++;
    }

    void Date()
    {
        cout << "Enter A UserName: " << endl;
        cin.ignore();
        getline(cin, username);

        cout << "Enter A Password: " << endl;
        getline(cin, password);

        cout << "\nUser added successfully. " << endl;
        cout << endl;
    }

    void Display() const
    {
        cout << "Username-> " << username << endl;
        cout << "Password-> " << password << endl;
    }

    string getUsername() const
    {
        return username;
    }

    static void printCount()
    {
        cout << "Total of Usrer-> " << userCount << endl;
    }
};

int User::userCount = 0;

int main()
{
    vector<User> users;
    int Choice;

    while (true)
    {
        cout << endl;
        cout << "List of user: " << endl;
        cout << "1. Add user" << endl;
        cout << "2. Show All users" << endl;
        cout << "3. Delete user" << endl;
        cout << "4. Total of Users" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter a Choice->" << endl;
        cin >> Choice;

        switch (Choice)
        {
        case 1:
        {
            User us;
            us.Date();
            users.push_back(us);
            break;
        }
        case 2:
        {
            if (users.empty())
            {
                cout << "No users available. " << endl;
            }
            else
            {
                for (int i = 0; i < users.size(); i++)
                {
                    cout << "\nUser " << i + 1 << ":" << endl;
                    users[i].Display();
                }
            }
            break;
        }
        case 3:
        {
            if (users.empty())
            {
                cout << "No users available. " << endl;
            }
            else
            {
                string deleteName;
                cout << "Enter the username to delete: ";
                cin.ignore();
                getline(cin, deleteName);

                vector<User> newUser; // Create a new list of users excluding the one to be deleted
                bool found = false;

                for (int i = 0; i < users.size(); i++)
                {
                    if (users[i].getUsername() != deleteName)
                    {
                        newUser.push_back(users[i]);
                    }
                    else
                    {
                        found = true;
                    }
                }

                if (found)
                {
                    users = newUser; // Replace the old list with the new one
                    cout << "\nUser-> " << deleteName << " deleted successfully." << endl;
                }
                else
                {

                    cout << "User-> " << deleteName << " not found." << endl;
                }
            }
            break;
        }
        case 4:
            User::printCount();
            break;
        case 5:
            return 0; // Exit the program

        default:
            cout << "Invalid choice!" << endl;
        }
    }
}
