#include <stdio.h>
#include "PrintArray.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "QuickSort.h"
#include "MergeSort.h"



int main()
{
    int array1[] = {89, 32, 20, 113, -15};
    int size = sizeof(array1) / sizeof(array1[0]);
    printf("ORIGINAL ARRAY: ");
    printArray(array1, size);

    /*--------------------- BUBBLE SORT ---------------------*/
    bubbleSort(array1, size);
    printf("BUBBLE SORT: ");
    printArray(array1, size);

    /*--------------------- INSERTION SORT ---------------------*/
    int array2[] = {89, 32, 20, 113, -15};
    insertionSort(array2, size);
    printf("INSERTION SORT: ");
    printArray(array2, size);

    /*--------------------- SELECTION SORT ---------------------*/
    int array3[] = {89, 32, 20, 113, -15};
    selectionSort(array3, size);
    printf("SELECTION SORT: ");
    printArray(array3, size);

    /*--------------------- QUICK SORT ---------------------*/
    int array4[] = {89, 32, 20, 113, -15};
    quickSort(array4, 0, size - 1);
    printf("QUICK SORT: ");
    printArray(array4, size);

    /*--------------------- MERGE SORT ---------------------*/
    int array5[] = {89, 32, 20, 113, -15};
    mergeSort(array5, 0, size - 1);
    printf("MERGE SORT: ");
    printArray(array5, size);
    
    return 0;
}