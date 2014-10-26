#include "insertionsort.h"

int main()
{
    std::vector<int> vector;
    
    askForVector(vector); // ask user for a vector of integers
    
    std::cout << "here is the original vector:\n";
    printVector(vector);
    
    std::cout << "here is the ordered vector:\n";
    reverseInsertionSort(vector); // order vector with insertion sort
    printVector(vector);
    
}


}


void reverseInsertionSort( std::vector<int> &vector) // order vector with insertion sort
{
    int key; // will be the value to be inserted each time

    for(int j=1;j<vector.size();j++)
    {
        int i=0;
        key = vector[j];
        
        for (; i<j; i++)
        {
            if(vector[i]<=key) // stop if there equal or smaller value than the key
                break;
        }
        
        if (i!=j) { // if the value is not the key itself
            int save = i; // save position where key will be entered

            for (i=j; i>save; i--)
                vector[i] = vector[i-1]; // shift values to the right
            
            vector[save] = key; // put key in the right place
        }
    }
    
}


