

def merge(left=[], right = []):
    array = []
    i = 0
    j = 0
    while(i<(len(left)) or j<(len(right))):
        
        if left[i] < right[j]:
            array.append(left[i])
            i +=1
        else:
            array.append(right[j])
            j+=1 
            
        if j==len(right):
            while(i<len(left)):
                array.append(left[i])
                i += 1
                        
        if i==len(left):
            while(j<len(right)):
                array.append(right[j])
                j += 1    
    return array


def mergeSort( numbers = []):
    left = numbers[:round(len(numbers)/2)]
    right = numbers[round(len(numbers)/2):]

    if len(left)!=1:
        left = mergeSort(left)
    if len(right)!=1:
        right = mergeSort(right)
        
    array = merge(left, right)
    return array


def getNumbers():
    fd = open("IntegerArray.txt", "r")
    lines = fd.readlines()
    numbers = []
    for l in lines:
        numbers.append(eval(l))
    
    return numbers


array = mergeSort(getNumbers())