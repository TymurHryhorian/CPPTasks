#include <iostream>
#include <istream>
#include <string>
#include <fstream>

using namespace std;

int const MAX_NUM_CONTACTS = 50;


class Phonebook
{
private:
	struct Contact
	{
		string _firstName[MAX_NUM_CONTACTS];
		string _lastName[MAX_NUM_CONTACTS];
		string _phoneNumber[MAX_NUM_CONTACTS];
		string _emailAddress[MAX_NUM_CONTACTS];
		int _numContacts;
	};
	Contact Contact;

public:
	Phonebook()
	{
		Contact._numContacts = 0;
	}

	~Phonebook()
	{
		
	}

	void addContact(const Phonebook &Conatcts)
	{
		cin >> Contact._firstName[Contact._numContacts] >> Contact._lastName[Contact._numContacts];
		cin >> Contact._phoneNumber[Contact._numContacts] >> Contact._emailAddress[Contact._numContacts];
		Contact._numContacts++;
	}

	void showContact(string firstName, string lastName)
	{

        for (int i = 0; i < Contact._numContacts; i++) //incrementing through each contact and....
        {
            cout << Contact._emailAddress[i] << Contact._phoneNumber[i];
            if (firstName == Contact._firstName[i] && lastName == Contact._lastName[i]) // ...checking to see if first and last names match the entered query
            {
                cout << "Contact Found!\n\n";
                cout << "Name: " << Contact._firstName[i] << " " << Contact._lastName[i] << endl;
                cout << "Phone Number: " << Contact._phoneNumber[i] << endl;
                cout << "Email Address " << Contact._emailAddress[i] << endl << endl;
            }
        }
	}

	void saveContact()
    {
        ofstream file;
        string contactList;
        cout << "Please enter a file name including the extension to write to: ";
        cin >> contactList; //inputting name of file
        file.open(contactList.c_str()); //opening file
        if (file.is_open()) //checking if file is open
        {
            for (int i = 0; i < Contact._numContacts; i++)
            {
                //writing to file
                file << "Name: " << Contact._firstName[i] << " " << Contact._lastName[i] << endl;
                file << "Phone Number: " << Contact._phoneNumber[i] << endl;
                file << "Email Address " << Contact._emailAddress[i] << endl << endl;
            }
            file << endl;
        }
        else
        {
            cout << "File could not be opened...\n";
        }
    }
};



void addContact(Phonebook Contact, int numContacts);
void showContact(Phonebook Contact, int numContacts);
void saveContact(Phonebook Contact, int numContacts);


int main()
{
	Phonebook Contacts;
	char option;
	bool keepGoing = true;
	int numContacts = 0;


	do
	{
		cout << "MENU\n----------------------\n";
		cout << "A: Add a contact\n";
		cout << "S: Show Contact\n";
		cout << "F: Save all contacts to file\n";
		cout << "Q: Quit\n";
		cout << "Selection: ";
		cin >> option;
		//switch statement menu
		switch (option)
		{
		case 'a':
		case 'A':
			if (numContacts <= MAX_NUM_CONTACTS)
			{
				addContact(Contacts, numContacts);
				numContacts++;
				cout << numContacts;
				break;
			}
			else
			{
				cout << "You have reached the maximum number of contacts.";
				break;
			}

		case 's':
		case 'S':
			showContact(Contacts, numContacts);
			break;

		case 'f':
		case 'F':
			//saveContact(Contacts, numContacts);
			break;

		case 'q': // quit option
		case 'Q':
			keepGoing = false;
			break;

		default:
			cout << "Please pick a valid option.\n\n";
			break;
		}

	} while (keepGoing == true);


	cin.get();
	return 0;
}

void addContact(Phonebook Contact, int numContacts)
{
	cout << "Enter contact's first and last name, their Phone number, and email address, hitting the 'enter' key after each:\n";
	
	Contact.addContact(Contact);

}

void showContact(Phonebook Contact, int numContacts)
{
	string searchFirst, searchLast;

	cout << "Current Number of contacts: " << numContacts << endl << endl; //displays current number of contacts

	cout << "Enter first and last name of contact you wish to show: ";

	cin >> searchFirst >> searchLast; //getting search parameters for first and last name

	Contact.showContact(searchFirst, searchLast);

	cout << endl;

}



