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
using namespace std;

void menu();
void add();
void del();
void update();
void view();
void search();
void count();
void sort();
void exit();

int main()
{

    // Display menu
    menu();

    // Ask user to input choice
    int choice;
    cout << "Enter your choice: " << endl;
    cin >> choice;

    // Call function based on the choice from user
    switch (choice)
    {
    case 1:
        add();
        break;
    case 2:
        del();
        break;
    case 3:
        update();
        break;
    case 4:
        view();
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
    case 8:
        exit();
        break;
    
    default:
        break;
    }

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

void add()
{

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