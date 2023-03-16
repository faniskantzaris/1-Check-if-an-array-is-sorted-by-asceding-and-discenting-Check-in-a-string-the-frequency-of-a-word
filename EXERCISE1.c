#include <stdio.h>

int isArraySorted(int [], int); //Function that checking if is sorted.

int find_maximum(int[], int); //Function that find the max element

int main()
{
    int size, array[100], c, r, location, maximum;

    printf("Give the elements of the array: ");
    scanf("%d", &size);

    printf("Give %d integers:\n", size);

    for (c = 0; c < size; c++) //Read the elements
    {
        scanf("%d", &array[c]);
    }

    r = isArraySorted(array, size); //Call the function for the sorted

    location = find_maximum(array, size); //Call the function for the max element
    maximum = array[location]; //The position of the max element

    if (r == 1)
        printf("The array is sorted by asceding.\n");
    else if (r == 2)
        printf("The array is sorted by discending.\n");
    else
        printf("The array is sorted.\n");

    printf("The max element is %d and finded it in the position %d.\n", location + 1, maximum);
    return 0;
}

int isArraySorted(int array[], int size) //Function code
{
    int a = 1, d = 1, c = 0;

    while ((a == 1 || d == 1) && c < size - 1)
    {
        if(array[c] < array[c+1])
            d = 0;
        else if (array[c] > array[c+1])
            a = 0;
        c++;
    }

    if (a == 1)
        return 1;
    else if (d == 1)
        return 2;
    else
        return 0;
}

int find_maximum(int array[], int size) //Function code
{
    int c, index = 0;

    for (c = 1; c < size; c++)
    {
        if (array[c] > array[index])
            index = c;
    }
    return index;
}
