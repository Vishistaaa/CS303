#pragma once
// Name : Vishista Vuppulapati
// Class : CS303
// Assignment : 01
// Date : 23/09/2022

#include <iostream>
#include<conio.h>

using namespace std;

void read_file(int arr[], int& size);
void show_array(int arr[], int size);
int search_integer(int arr[], int size, int goal);
void change_array(int arr[], int size, int index);
void add_integer(int arr[], int size, int new_val);