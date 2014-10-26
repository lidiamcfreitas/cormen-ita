#include "linearSearch.h"

int main()
{
    std::vector<int> vector;
    std::vector<int> position;
    int value;
    
    position.resize(vector.size());
    
    askForVector(vector); // ask user for vector of integers
    printVector(vector);
    
    
    std::cout << "Which value do you want to search? ";
    std::cin >> value;
    
    if (linearSearch(vector, value, position))
        printVector(position);
    else
        std::cout << "null" << std::endl;
    
}

int linearSearch(std::vector<int> &vector, int value, std::vector<int> &position)
{
    int j = 0;
    
    for (int i = 0; i<vector.size(); i++)
    {
        if (vector.at(i)==value)
        {
            position.push_back(i);
            j++;
        }
    }
    return j;
}