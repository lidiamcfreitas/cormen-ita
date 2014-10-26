#include <iostream>
#include <vector>

void askForVector(std::vector<int> &vector);
void printVector(std::vector<int> &vector);
void insertionSort(std::vector<int> &vector);

int main()
{
    std::vector<int> vector;
    
    askForVector(vector); // ask user for a vector of integers
    
    std::cout << "here is the original vector:\n";
    printVector(vector);
    
    std::cout << "here is the ordered vector:\n";
    insertionSort(vector); // order vector with insertion sort
    printVector(vector);
    
}

void askForVector(std::vector<int> &vector) // ask user for a vector of integers
{
    int size;
    
    std::cout << "please insert the size of vector to order: ";
    std::cin >> size; // ask for the size of the vector
    vector.resize(size);
    
    int value;
    
    for (int i = 0; i<size; i++){
        std::cout << "please insert a value for the " << i + 1 << " position: ";
        std::cin >> value;
        vector[i] = value; // fill the vector with the values given
    }
    
}


void insertionSort( std::vector<int> &vector) // order vector with insertion sort
{
    int key; // will be the value to be inserted each time

    for(int j=1;j<vector.size();j++)
    {
        int i=0;
        key = vector[j];
        for (; i<j; i++)
        {
            if(vector[i]>=key) // stop if there equal or bigger value than the key
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

void printVector(std::vector<int> &vector) // prints the vector
{
    
    for (int i: vector)
        std::cout << ":" << i;
    std::cout << ":\n";
}
