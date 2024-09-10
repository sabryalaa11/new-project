#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Contact
{
private:
    string name;
    string address;
    int number;

public:
    Contact(const string &name = "", const string &address = "", int number = 0)
    {
        this->name = name;
        this->address = address;
        this->number = number;
    }

    // Function to add or modify contact details.
    void add()
    {
        cout << "Enter a name-> ";
        cin.ignore();       // تجاهل المدخلات السابقة (إذا كانت هناك).
        getline(cin, name); // استخدام getline لقراءة الاسم بالكامل حتى إذا كان يحتوي على مسافات.

        cout << "Enter an address-> ";
        getline(cin, address);

        cout << "Enter a phone number-> ";
        cin >> number;

        cout << "Contact added successfully!" << endl;
    }

    // مقارنة جهات الاتصال باستخدام اسم الاتصال.
    bool operator==(const Contact &other) const
    {
        return name == other.name;
    }

    //  دالة البحث عن جهة الاتصال
    static void searchContact(const vector<Contact> &contacts, const Contact &searchTarget)
    {
        bool found = false;
        for (const auto &contact : contacts)
        {
            if (contact == searchTarget)
            {
                cout << "Contact found: ";
                contact.show(); // استدعاء show() للكائن الذي يمثل جهة الاتصال
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Contact not found!" << endl;
        }
    }

    //  دالة لطباعة تفاصيل جهة الاتصال
    void show() const
    {
        cout << "Name: " << name << ", Address: " << address << ", Phone Number: " << number << endl;
    }
};

int main()
{
    vector<Contact> contacts; // استخدام vector لتخزين عدة جهات اتصال
    int choice;

    while (true)
    {
        cout << "\nAddress Book Management System: " << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. Delete Contact" << endl;
        cout << "3. Show All Contacts" << endl;
        cout << "4. Search Contact" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter Your Choice-> ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Contact newContact;
            newContact.add();
            contacts.push_back(newContact);
            break;
        }
        case 2:
        {
            if (contacts.empty())
            {
                cout << "No contacts available to delete." << endl;
            }
            else
            {
                string nameToDelete;
                cout << "Enter the name of the contact you want to delete-> ";
                cin.ignore();
                getline(cin, nameToDelete);

                Contact targetContact(nameToDelete);

                // إنشاء قائمة جديدة بدون جهة الاتصال المراد حذفها
                vector<Contact> updatedContacts;
                bool found = false;
                for (const auto &contact : contacts)
                {
                    if (contact == targetContact)
                    {
                        found = true; // تم العثور على جهة الاتصال وحذفها
                    }
                    else
                    {
                        updatedContacts.push_back(contact); // الاحتفاظ بجهة الاتصال
                    }
                }

                if (found)
                {
                    contacts = updatedContacts; // تحديث قائمة جهات الاتصال
                    cout << "Contact deleted successfully!" << endl;
                }
                else
                {
                    cout << "Contact not found!" << endl;
                }
            }
            break;
        }
        case 3:
        {
            if (contacts.empty())
            {
                cout << "No contacts available." << endl;
            }
            else
            {
                cout << "\n List of Contacts: " << endl;
                for (int i = 0; i < contacts.size(); i++)
                {
                    cout << i + 1 << ". ";
                    contacts[i].show();
                }
            }
            break;
        }
        case 4:
        {
            string searchName;
            cout << "Enter name to search-> " << endl;
            cin.ignore();
            getline(cin, searchName);
            Contact searchTarget(searchName, "", 0);
            Contact::searchContact(contacts, searchTarget);
            break;
        }
        case 5:
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "Invalid choice!" << endl;
        }
    }
}
