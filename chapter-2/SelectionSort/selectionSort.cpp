#include "selectionSort.h"

int main()
{
    std::vector<int> _vector;
    
    askForVector(_vector);
    printVector(_vector);
    
    selectionSort(_vector);
    printVector(_vector);
    
}

void selectionSort(std::vector<int>& _vector)
{
    
    // goes through all positions except last
    for (int i = 0; i<_vector.size()-1; i++)
    {
        int aux, min = i;
        
        // checks the minimum of the rest of positions
        for (int j=i + 1; j<_vector.size(); j++) {
            if (_vector[j]<_vector[min])
                min = j;
        }
        
        aux = _vector[i];
        _vector[i] = _vector[min];
        _vector[min] = aux;
        
    }
}