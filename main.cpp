#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// structure created for contact details.
struct Contact
{
    string name;
    string phonenum;
};

// clears input buffer
void clearCin()
{
    if (cin.fail())
    {
        // clear error state
        cin.clear();
        // discard unwanted character(s)
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

// prints the menu
void printMenu()
{
    cout << "====================================================================" << endl;
    cout << "                                MENU                                " << endl;
    cout << "====================================================================" << endl;
    cout << "1. Add new contact." << endl;
    cout << "2. Delete contact." << endl;
    cout << "3. Update contact." << endl;
    cout << "4. View all contact." << endl;
    cout << "5. Search a contact." << endl;
    cout << "6. Count contacts of a specific character." << endl;
    cout << "7. Sort and display contacts in alphabetic order." << endl;
    cout << "8. Exit program." << endl;
    cout << endl;
}

// captures choice from user and stores variable
int inputChoice(int &choice)
{
    cout << "Enter your choice: " << endl;
    cin >> choice;
    return choice;
}

// name and phone number from user and creates a vector element
void add(vector<Contact> &contacts)
{
    string temp_name, temp_pnum;

    cout << "Name: ";
    cin >> temp_name;
    cout << "Phone number: ";
    cin >> temp_pnum;
    contacts.push_back({temp_name, temp_pnum});
}

// captures name to be deleted and deletes element from vector
void deleteC(vector<Contact> &contacts)
{
    string temp_name;
    cout << "Contact to be deleted: " << endl;
    cin >> temp_name;
    for (size_t i = 0; i < contacts.size(); i++)
    {
        if (contacts[i].name == temp_name)
        {
            contacts.erase(contacts.begin() + i);
            cout << "Contact deleted" << endl;
            return;
        }
    }
    cout << "Contact cannot be found";
    
}

// captures name to be updated and allows user to input new name and phone number
void update(vector<Contact> &contacts)
{
    string temp_name;
    cout << "Which contact would you like to update?" << endl;
    cin >> temp_name;
    for (size_t i = 0; i < contacts.size(); i++)
    {
        if (contacts[i].name == temp_name)
        {
            cout << "Name: ";
            cin >> contacts[i].name;
            cout << "Phone number: ";
            cin >> contacts[i].phonenum;
            cout << endl;
            cout << "Contact updated" << endl;
            return;
        }
    }
    cout << "Contact cannot be found";
}

// prints all contacts with their respective phone numbers
void view(vector<Contact> &contacts)
{
    cout << "====================================================================" << endl;
    cout << "Name\t\t\t\t\tPhone No." << endl; //used tab to align headings
    cout << "====================================================================" << endl;
    for (size_t i = 0; i < contacts.size(); i++)
    {
        cout << contacts[i].name << "\t\t\t\t\t" << contacts[i].phonenum << endl; //used tab to align contacts
    }
    cout << endl;
    cout << "====================================================================" << endl;
}

// captures input from user to search contact names and prints details of searched name
void search(vector<Contact> &contacts)
{
    string temp_name;
    cout << "Name:" << endl;
    cin >> temp_name;
    for (size_t i = 0; i < contacts.size(); i++)
    {
        if (contacts[i].name == temp_name)
        {
            cout << contacts[i].name << endl;
            cout << contacts[i].phonenum << endl;
            return;
        }
    }
    cout << "Contact cannot be found";
}

// captures input from user, counts the names and prints out the result
void charContactCount(vector<Contact> &contacts)
{
    char temp_char;
    int count = 0;
    cout << "Input character for contact count: " << endl;
    cin >> temp_char;
    for (size_t i = 0; i < contacts.size(); i++)
    {
        if (contacts[i].name[0] == temp_char)
        {
            count++;
        }
    }

    if (count == 0)
    {
    cout << "There is no contact starting with the specified character" << endl;
    }
    else
    {
    cout << "Number of contacts starting with the specified charact is " << count << endl;
    }
}

// compares and returns the name of two variables in struct element
bool compareNames(const Contact& a, const Contact& b)
{ 
    return a.name < b.name; 
} 

// sorts vector as per the result from compareNames
void sort(vector<Contact> &contacts)
{
    sort(contacts.begin(), contacts.end(), compareNames);
    view(contacts);
}


int main()
{
    int choice;

    vector<Contact> contacts;

    do
    {
        clearCin();
        printMenu();

        switch (inputChoice(choice))
        {
        case 1:
            add(contacts);
            break;
        case 2:
            deleteC(contacts);
            break;
        case 3:
            update(contacts);
        case 4:
            view(contacts);
            break;
        case 5:
            update(contacts);
            break;
        case 6:
            charContactCount(contacts);
            break;
        case 7:
            sort(contacts);
            break;
        case 8:
            break;

        default:
            cout << "Please enter a valid choice" << endl;
            break;
        }
    } while (choice != 8);

    return 0;
}