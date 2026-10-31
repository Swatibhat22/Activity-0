#include <stdio.h>

void readArray(int *arr, int size);
void printArray(int *arr, int size);
void reverseArray(int *arr, int size);
int *findMax(int *arr, int size);
void swapElements(int *arr, int pos1, int pos2);

int main()
{
    int arr[10];
    int size = 10;
    int pos1, pos2;
    int *ptr;

    printf("Enter the elements of the array:\n");
    readArray(arr, size);

    printf("\nOriginal array:\n");
    printArray(arr, size);

    reverseArray(arr, size);

    printf("\nArray after reversing:\n");
    printArray(arr, size);

    ptr = findMax(arr, size);

    printf("\nMaximum element:\n");
    printf("Value: %d\n", *ptr);
    printf("Address: %p\n", (void *)ptr);

    printf("\nEnter two positions to swap (0 to 9): ");
    scanf("%d %d", &pos1, &pos2);

    if (pos1 >= 0 && pos1 < size &&
        pos2 >= 0 && pos2 < size)
    {
        swapElements(arr, pos1, pos2);

        printf("\nArray After Swapping:\n");
        printArray(arr, size);
    }
    
    else
    {
        printf("\nInvalid positions!\n");
    }

    return 0;
}

void readArray(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("Enter element at %d: ", i);
        scanf("%d", arr + i);
    }
}

void printArray(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("Value: %d, Address: %p\n",
               *(arr + i),
               (void *)(arr + i));
    }
}

void reverseArray(int *arr, int size)
{
    int *start = arr;
    int *end = arr + size - 1;
    int temp;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int *findMax(int *arr, int size)
{
    int *max = arr;

    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) > *max)
        {
            max = arr + i;
        }
    }

    return max;
}

void swapElements(int *arr, int pos1, int pos2)
{
    int *p1 = arr + pos1;
    int *p2 = arr + pos2;
    int temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}