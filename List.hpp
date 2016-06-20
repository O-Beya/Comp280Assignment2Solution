//
//  List.hpp
//  Comp280Assignment2Solution
//
//  Created by Olivier Beya on 6/9/16.
//  Copyright © 2016 OlivierBeya(Beyasoft). All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <iostream>
#include <stdio.h>

#pragma once

typedef int ElementType;
struct node {
    ElementType data;
    node * next;
};

class List {
    
public:
    List(); // create an empty list
    bool Empty(); // return true if the list is empty, otherwise return false
    void InsertAtEnd(ElementType x); //insert a value x on the end of the list
    void Delete(ElementType x); //if value x is in the list, remove x
    void Display(); // Display the data values in the list in the order inserted
    int Sum(); // Compute and return the sum of the values in the list
    int Average(); // Compute and return the average of the values in the list
    void Menu(); // creates a menu for the user
    
private:
    node * first; //pointer to first node
};

#endif /* List_hpp */
