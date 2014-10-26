#include <iostream>
#include <vector>

void askForVector(std::vector<int> &vector);
void printVector(std::vector<int> &vector);
void insertionSort(std::vector<int> &vector);

int main()
{
    std::vector<int> vector;
    askForVector(vector);
    
    std::cout << "here is the ordered vector:\n";
    insertionSort(vector);
    printVector(vector);
    
}

void askForVector(std::vector<int> &vector)
{
    int size;
    
    std::cout << "please insert the size of vector to order: ";
    std::cin >> size;
    vector.resize(size);
    
    int value;
    
    for (int i = 0; i<size; i++){
        std::cout << "please insert a value for the " << i + 1 << " position: ";
        std::cin >> value;
        vector[i] = value;
    }
    std::cout << "here is the original vector:\n";
    printVector(vector);
}


void insertionSort( std::vector<int> &vector)
{
    int key;

    for(int j=1;j<vector.size();j++)
    {
        int i=0;
        key = vector[j];
        for (; i<j; i++)
        {
            if(vector[i]>=key)
                break;
        }
        if (i!=j) {
            int save = i;

            for (i=j; i>save; i--)
                vector[i] = vector[i-1];
            vector[save] = key;
        }
    }
    
}

void printVector(std::vector<int> &vector)
{
    
    for (int i: vector)
        std::cout << ":" << i;
    std::cout << ":\n";
}
