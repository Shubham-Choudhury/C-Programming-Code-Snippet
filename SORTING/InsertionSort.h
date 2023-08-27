#include <math.h>

void insertionSort(int array[], int n)
{
    int i, element, j;
    for (i = 1; i < n; i++)
    {
        element = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > element)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = element;
    }
}