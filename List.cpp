//
//  List.cpp
//  Comp280Assignment2Solution
//
//  Created by Olivier Beya on 6/9/16.
//  Copyright © 2016 OlivierBeya(Beyasoft). All rights reserved.
//

#include "List.hpp"

#include <iostream>
using namespace std;

//constructor, creating an empty list.
List::List()
{
    first = NULL;
}

//empty method, check and see if the list is empty or not.
bool List::Empty()
{
    return first == NULL;
}

//insertatend method add an element x at the end of the list.
void List::InsertAtEnd(ElementType x)
{
    node*input = new node;
    input->data = x;
    input->next = NULL;
    
    //check and see if the list is empty then if it is then set first to the input node.
    if (Empty())
    {
        first = input;
        return;
    }
    
    //traversing the list and adding a node at the end of the list.
    node*traverse = first;
    while (traverse->next != NULL)
    {
        traverse = traverse->next;
    }
    
    traverse->next = input;
    
}

//delete method find an element x and remove it from the list.
void List::Delete(ElementType x)
{
    //if the list is empty tell the user there is nothing in the list
    //and tell them to try and insert an element.
    if (Empty())
    {
        cout << "Your List is empty, try option 1. to insert an number in your list :" << endl;
        return;
    }
    
    //in the case the value x is the first element then remove and move first(the head of the list)
    //to the second element which becomes the head of the list
    if (x == first->data)
    {
        node*holdPtr = first;
        first = first->next;
        delete holdPtr;
        holdPtr = NULL;
        return;
    }
    
    node*traversing = first;
    node*trailer = NULL;
    
    //traversing the list
    while (traversing != NULL)
    {
        //while traversing if x is the value where pointer traversing is
        //at break out of the loop. otherwise keep traversing.
        if (x == traversing->data)
        {
            break;
        }
        trailer = traversing;
        traversing = traversing->next;
    }
    
    //deleting the element x at traversing pointer
    if (traversing!=NULL)
    {
        trailer->next = traversing->next;
        traversing->next = NULL;
        delete traversing;
    }
    
}

//displaying my list
void List::Display()
{
    node*traversing = first;
    
    while (traversing != NULL)
    {
        cout << traversing->data << ' ';
        traversing = traversing->next;
    }
    
}

//Compute and return the sum of the values in the list and if the list is empty
//tell the user the list is empty and return zero.
int List::Sum()
{
    int listSum = 0;

    node*ptr = first;
    
    while (ptr != NULL)
    {
        listSum += ptr->data;
        ptr = ptr->next;
    }
    
    return listSum;
}

//Compute and return the average of the values in the list and if the list is empty
//tell the user the list is empty and return zero.
int List::Average()
{
    int average = 0;
    if(Empty())
    {
        cout << "The list is empty" << endl;
        
        return average;
    }
    
    int counter = 0;
    
    node*ptr = first;
    
    while (ptr != NULL)
    {
        counter += 1;
        ptr = ptr->next;
    }
    
    average = (Sum()/counter);
    
    return average;
    
}

