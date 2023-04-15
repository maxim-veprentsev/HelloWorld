// Ввод массива пользователем.
int* inputNumbers() {
    int* numbers = (int*)malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++) {
        int number;
        scanf("%d", &number);
        numbers[i] = number;
    }
    return numbers;
}

// Фильтрации массива (оставляем только четные числа).
int* filterEvenNumbers(int* numbers, int size, int* newLen) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if ((numbers[i]) % 2 == 0) {
            count++;
        }
    }

    *newLen = count;

    int* evenNumbers = (int*)malloc(sizeof(int) * count + 1);
    evenNumbers[count - 1] = count - 1;
    int index = 0;
    for (int i = 0; i < size; i++) {
        if ((numbers[i]) % 2 == 0) {
            evenNumbers[index] = numbers[i];
            index++;
        }
    }
    return evenNumbers;
}

// Печать массива на экран.
void printArray(int* numbers, int lenArray) {
    printf("\nResult: ");
    for (int i = 0; i < lenArray; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");
}