


void selectionSort(int array[], int n)
{
    int i, j, min_element;
    for (i = 0; i < n - 1; i++)
    {
        min_element = i;
        for (j = i + 1; j < n; j++)
        {
            if (array[j] < array[min_element])
            {
                min_element = j;
            }
        }
        int temp = array[min_element];
        array[min_element] = array[i];
        array[i] = temp;
    }
}