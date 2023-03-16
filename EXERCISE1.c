//KANTZARIS THEOFANIS
//1117-2020-00062
#include <stdio.h>

int isArraySorted(int [], int); //sinartisi gia na broume an einai tajinomimenos

int find_maximum(int[], int); //sinartisi gia na broume to megisto

int main()
{
    int size, array[100], c, r, location, maximum;

    printf("Dwse ton arithmo ton stoixeiwn tou pinaka: ");
    scanf("%d", &size);

    printf("Dwse %d akeraious:\n", size);

    for (c = 0; c < size; c++) //ekxorisi ton stoixeiwn
    {
        scanf("%d", &array[c]);
    }

    r = isArraySorted(array, size); //kaloume thn sinartisi gia tajinomisi

    location = find_maximum(array, size); //kaloume thn sinartisi gia megisto stoixeio
    maximum = array[location]; //thesh tou megistou stoixeiou

    if (r == 1)
        printf("O pinakas einai tajinomimenos kata aujousa.\n");
    else if (r == 2)
        printf("O pinakas einai tajinomimenos kata fthinousa.\n");
    else
        printf("O pinakas den einai tajinomimenos.\n");

    printf("To megisto stoixeio brethke sthn thesh = %d me timh = %d.\n", location + 1, maximum);
    return 0;
}

int isArraySorted(int array[], int size) //ektelesh sinartisis
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

int find_maximum(int array[], int size) //ektelesh sinartisis
{
    int c, index = 0;

    for (c = 1; c < size; c++)
    {
        if (array[c] > array[index])
            index = c;
    }
    return index;
}
