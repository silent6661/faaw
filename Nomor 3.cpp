#include<iostream>

int* bubbleSort(int *arr, int size) {
    int i, j, temp;
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

int main()
{
    int i, size;
    int TIarray[10] = { 45, 23, 50, 8, 12, 10, 15, 67, 21, 14 };
    size = sizeof(TIarray) / sizeof(TIarray[0]);
    std::cout << "Input list ...\n";
    for (i = 0; i < size; i++) {
        std::cout << TIarray[i] << "\t";
    }
    std::cout << std::endl;
    
    bubbleSort(TIarray, size);

    std::cout << "Sorted Element List ...\n";
    for (i = 0; i < size; i++) {
        std::cout << TIarray[i] << "\t";
    }
    return 0;
}
