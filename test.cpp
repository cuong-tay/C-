#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Contact {
public:
    string name;
    string phone;
    string email;

    Contact(string name, string phone, string email) {
        this->name = name;
        this->phone = phone;
        this->email = email;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Phone: " << phone << endl;
        cout << "Email: " << email << endl;
    }
};

class AddressBook {
private:
    vector<Contact> contacts;

public:
    void addContact(Contact contact) {
        contacts.push_back(contact);
        cout << "Contact added successfully." << endl;
    }

    void removeContact(string phoneNumber) {
        for (size_t i = 0; i < contacts.size(); i++) {
            if (contacts[i].phone == phoneNumber) {
                contacts.erase(contacts.begin() + i);
                cout << "Contact with phone number " << phoneNumber << " removed." << endl;
                return;
            }
        }
        cout << "Contact with phone number " << phoneNumber << " not found." << endl;
    }

    void searchContact(string phoneNumber) {
        for (size_t i = 0; i < contacts.size(); i++) {
            if (contacts[i].phone == phoneNumber) {
                contacts[i].display();
                return;
            }
        }
        cout << "Contact with phone number " << phoneNumber << " not found." << endl;
    }

    void displayAllContacts() {
        cout << "All Contacts:" << endl;
        for (size_t i = 0; i < contacts.size(); i++) {
            contacts[i].display();
        }
    }
};

int main() {
    AddressBook addressBook;

        cout << "\nMenu:" << endl;
        cout << "1. Add a new contact" << endl;
        cout << "2. Remove a contact by phone number" << endl;
        cout << "3. Search a contact by phone number" << endl;
        cout << "4. Display all contacts" << endl;
        cout << "5. Exit" << endl;
while(true){

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                string name, phone, email;
                cout << "Enter name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter phone number: ";
                cin >> phone;
                cout << "Enter email: ";
                cin >> email;
                Contact contact(name, phone, email);
                addressBook.addContact(contact);
                break;
            }
            case 2: {
                string phone;
                cout << "Enter phone number to remove: ";
                cin >> phone;
                addressBook.removeContact(phone);
                break;
            }
            case 3: {
                string phone;
                cout << "Enter phone number to search: ";
                cin >> phone;
                addressBook.searchContact(phone);
                break;
            }
            case 4:
                addressBook.displayAllContacts();
                break;
            case 5:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
}
    return 0;
}

