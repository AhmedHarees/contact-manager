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

using namespace std;

void menu();
string add();
void del();
void update();
void view();
void search();
void count();
void sort();
void exit();

struct Contact
{
    string name;
};

int main()
{
    int choice;
    string del_name;
    int addcount = 0;

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
            contacts[addcount].name = add();
            addcount++;
            break;
        case 2:
            del();
            cout << "Which contact would you like to delete?" << endl;
            cin >> del_name;
            for (int i = 0; i < 100; i++)
            {
                if (contacts[i].name == del_name)
                {
                    contacts[i].name = "";
                }
            }
            
            break;
        case 3:
            update();
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
            break;
        case 6:
            count();
            break;
        case 7:
            sort();
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
void update()
{

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
void sort()
{

}
void exit()
{
    
}