#include "Header.h"
#include <iostream>
#include <fstream>
#include <string>
#include<conio.h>


void read_file(int arr[], int& size)
{
    int integer;

    ifstream file_input("integers.txt");

    if (!file_input.is_open()) // will check to open the file
    {
        while (true) 
        {
            std::cout << "Unable to open the file, please try again.";
            std::cout << endl;
            return;

            break;
        }
       
    }

    
    while (file_input >> integer)
    {
        arr[size] = integer;
        size = size+1;
    }

    file_input.close();
}

void show_array(int arr[], int size)
{
    
    for (int i = 0; i < size; i++)
    {
        
            std::cout << arr[i] << "  ";
       
        
    }
    std:: cout << endl;
}


int search_integer(int arr[], int size, int goal)
{
    for (int i = 0; i < size; i++)
    {
       
        if (goal == arr[i])
        {
            return i;
        }
        
    }

    return -1;
}

void change_array(int arr[], int size, int index)
{
    int previous_val = arr[index]; 
    int new_val = 25;

    arr[index] = new_val; // gets assigned to the new variable

   std :: cout << "Previous value: " << previous_val << "\nNew value: " << new_val << "\n";
}


void add_integer(int arr[], int size, int new_val) 
{
    arr[size++] = new_val; // will increment the size by 1 every time it runs
}