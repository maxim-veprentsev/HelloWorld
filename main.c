#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main() {
    int* numbers = inputNumbers();

    int lenEvenNumbers;
    int* evenNumbers = filterEvenNumbers(numbers, 5, &lenEvenNumbers);
    
    printArray(evenNumbers, lenEvenNumbers);
}