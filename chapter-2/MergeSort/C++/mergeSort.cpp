#include "mergeSort.h"


int main()
{

    std::vector<int> _vector;
    
    askForVector(_vector);
    printVector(_vector);

    mergeSort(_vector, 0, _vector.size());
    printVector(_vector);
    
}

void merge(std::vector<int>& _vector, int begin, int middle, int end)
{
    std::vector<int> _firstV;
    std::vector<int> _secondV;
    
    int  i(0), posFirst(0), posSecond(0);
    printVector(_vector);
    for (; i<middle; i++)
        _firstV.push_back(_vector.at(i));

    for(;i<end;i++)
        _secondV.push_back(_vector.at(i));
    
    printVector(_firstV);
    printVector(_secondV);
    
    for (i=0; i<_vector.size(); i++) {
        if (posFirst != _firstV.size() && posSecond != _secondV.size())
        {
            
            if (_firstV[posFirst]<= _secondV[posSecond])
                _vector[i] = _firstV[posFirst++];
            else
                _vector[i] = _secondV[posSecond++];
            
        }
        
        else if (posFirst == _firstV.size())
            _vector[i] = _secondV[posSecond++];
        else
            _vector[i] = _firstV[posFirst++];

    }
}

void mergeSort(std::vector<int>& _vector, int begin, int end)
{
    if (begin < end) {
        int middle = (begin + end)/2;
        mergeSort(_vector, begin, middle);
        mergeSort(_vector, middle + 1, end);
        merge(_vector, begin, middle, end);
    }
}