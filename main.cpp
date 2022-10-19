// Assignment_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include "Header.h"

using namespace std;

int main()
{
    int arr[100]; // this array is created contain max of 100 elements in it.
    int size = 0;  // to store the size of the array

    read_file(arr, size);  // this function will help to read the file.
    show_array(arr, size); // this unction will display the entire array when called.

    int goal = 46; // setting our value for the search.

    if (search_integer(arr, size, goal)) // this function will help us search for the element we looking to find
    
    {
        std::cout << endl << "The number "<< goal << " found in the array!" << endl;
    }
    else 
    
    {
        std::cout << endl << "The number " << goal << " not found in the array." << endl;
    }
    goal = 22; // setting this to a value to check if it searches the file

    if (search_integer(arr, size, goal)) 
    {
        std::cout << endl <<"The number "<<  goal <<" not found in the array." << endl;
    }
    else
    {
        std::cout << endl <<"The number "<< goal << "found in the array! " << endl;
    }

    change_array(arr, size, 5); // this will change the value at the specified index of 5.
    show_array(arr, size); //this function is designed to display the array.

    std:: cout << endl << " Adding value 59 to the end of the array:";

    add_integer(arr, size, 59); // this function will help add the number 59 to the array
    show_array(arr, size); //Function to display the array.

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
