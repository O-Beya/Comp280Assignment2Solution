//
//  main.cpp
//  Comp280Assignment2Solution
//
//  Created by Olivier Beya on 6/9/16.
//  Copyright © 2016 OlivierBeya(Beyasoft). All rights reserved.
//

#include <iostream>

#include "List.hpp"
using namespace std;

int main()
{
    //testing constructor, creating an empty List
    List intList;
    
    int userInput = 0;
    
    
    //testing if the list is empty or not
    if (intList.Empty())
    {
        cout << "The List is created and is empty at the moment" << endl;
    }
    
    while (userInput != 6)
    {
        //printing out the menu options
        cout << endl;
        cout << "Please chose a number from the option menu" << endl;
        cout << endl;
        cout << "Options:" << endl
        << "-------" << endl
        << "1. Insert" << endl
        << "2. Delete" << endl
        << "3. Display" << endl
        << "4. Sum" << endl
        << "5. Average" << endl
        << "6. Exit" << endl;
        
        //taking user input for the choise of the menu option
        cin >> userInput;
        
        //testing the insert method
        if (userInput == 1)
        {
            int x;
            cout << endl;
            cout << "enter the number you would like to insert into the List: " << endl;
            cin >> x;
            cout << "inserting..." << endl;
            intList.InsertAtEnd(x);
        }
        
        //testing the delete method
        else if (userInput == 2)
        {
            cout << endl;
            cout << "enter the number you would like to delete from the List: " << endl;
            int x;
            cin >> x;
            cout << "Deleting..." << endl;
            intList.Delete(x);
        }
        
        //testing the display method
        else if (userInput == 3)
        {
            //if user select 3 before anything is inserted tell the user the list is still empty
            if (intList.Empty())
            {
                cout << endl;
                cout << "The list is empty, try option 1 to insert a value in the List" << endl;
            }
            
            //display the list
            else if (!intList.Empty())
            {
                cout << endl;
                cout << "Your List is : " << endl;
                intList.Display();
            }
            
        }
        
        //testing the sum method and displaying the sum of the list
        else if (userInput == 4)
        {
            cout << endl;
            cout << "The Sum of your List is: " << endl;
            cout << intList.Sum() << endl;
        }
        
        //testing the average method and displaying the average of the list
        else if (userInput == 5)
        {
            cout << endl;
            cout << "The Average of your List is : " << endl;
            cout << intList.Average() << endl;
        }
        
        
        //exiting the program
        else if (userInput != 6)
        {
            cout << "You have entered an invalid option, please try again" << endl;
        }
        
    }
    
    return 0;
}
