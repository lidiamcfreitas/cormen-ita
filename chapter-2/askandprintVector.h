#ifndef __ASK_PRINT_H__
#define __ASK_PRINT_H__

#include <iostream>
#include <vector>

void askForVector(std::vector<int> &vector) // ask user for a vector of integers
{
    int size, value;
    
    std::cout << "please insert the size of vector: ";
    std::cin >> size; // ask for the size of the vector
    vector.resize(size);
    
    for (int i = 0; i<size; i++){
        std::cout << "please insert a value for the " << i + 1 << " position: ";
        std::cin >> value;
        vector[i] = value; // fill the vector with the values given
    }
}
 
void printVector(std::vector<int> &vector) // prints the vector
{
    
    for (int i: vector)
        std::cout << ":" << i;
    std::cout << ":\n";
}


#endif
