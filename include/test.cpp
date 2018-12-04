#include <iostream>

//const readonly array

//can be alter 
void alterArray(int array[],int length)
{
    array[1] = 10;
}

//noteditable


void noteditable(const int array[], int length)
{
    std::cout << array[1] << std::endl;
}
