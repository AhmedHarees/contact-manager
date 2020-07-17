/*
contact.cpp
Contact Management System

Ahmed Harees
S073929

Introduction to Programming (CPT111)
BSc Computer Science - Term1 2020

Faculty of Engineenring, Science and Technology (FEST)
Maldives National University (MNU)
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Contact
{
    string name;
};

void menu();
string add();
void del();
string update();
void view();
void search();
void count();
// void sort();
void exit();

bool compareTwoContacts(Contact a, Contact b)
{ 
    // If names are not same then 
    // returns true for lower letter 
    if (a.name != b.name ) 
        return a.name < b.name; 
} 

void sortcontacts(Contact a[], int n)
{
    sort(a, a+100, compareTwoContacts);
}

int main()
{
    int choice;
    int n = 100;
    string search_name;
    int count = 0;

    Contact contacts[100] = {""};
    
    do
    { 
        // Display menu
        menu();

        // Ask user to input choice
        if (cin.fail())
        {
            // clear error state
            cin.clear();
            // discard 'bad' character(s)
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Enter your choice: " << endl;
        cin >> choice;

        // Call function based on the choice from user
        switch (choice)
        {
        case 1:
            for (int i = 0; i < 100; i++)
            {
                if (contacts[i].name == "")
                {
                    contacts[i].name = add();
                    break;
                }
            }
            break;
        case 2:
            del();
            cout << "Which contact would you like to delete?" << endl;
            cin >> search_name;
            for (int i = 0; i < 100; i++)
            {
                if (contacts[i].name == search_name)
                {
                    contacts[i].name = "";
                }
            }
            
            break;
        case 3:
            cout << "Enter the contact to be updated" << endl;
            cin >> search_name;
            for (int i = 0; i < 100; i++)
            {
                if (contacts[i].name == search_name)
                {
                    contacts[i].name = update();
                    break;
                }
            }
            
            break;
        case 4:
            view();
            for (int i = 0; i < 100; i++)
            {
                if (contacts[i].name != "")
                {
                    cout << contacts[i].name << endl;
                }
            }
            break;
        case 5:
            search();
            cout << "Which contact would you like to search?" << endl;
            cin >> search_name;
            for (int i = 0; i < 100; i++)
            {
                if (contacts[i].name == search_name)
                {
                    cout << contacts[i].name << endl;
                }
            }
            break;
        case 6:
            for (int i = 0; i < 100; i++)
            {
                if (contacts[i].name != "")
                {
                    count++;
                }
            }
            cout << "Total contacts: " << count << endl;
            break;
        case 7:
            sortcontacts(contacts, n);
            for (int i = 0; i < 100; i++)
            {
                if (contacts[i].name != "")
                {
                    cout << contacts[i].name << endl;
                }
            }
            break;
        
        default:
            break;
        }
    } while (choice != 8);
}

void menu()
{
    // Print out menu options
    cout << "Menu" << endl;
    cout << endl;
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

string add()
{
    string  name;
    cout << "Enter name: " << endl;
    cin >> name;
    return name;
}
void del()
{

}
string update()
{
    string  name;
    cout << "Enter name: " << endl;
    cin >> name;
    return name;
}
void view()
{

}
void search()
{

}
void count()
{

}
// void sort()
// {

// }
void exit()
{
    
}


