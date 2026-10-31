#include <stdio.h>

void readArray(int *arr, int size) {
    int i;
    for (i = 0; i < size; i++) {
        /* Read each element using pointer arithmetic */
        scanf("%d", arr + i);
    }
}

void printArray(int *arr, int size) {
    int i;
    for (i = 0; i < size; i++) {
        /* Write expression using pointer arithmetic */
        printf("Value: %d\n", *(arr + i));
    }
}

void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    int temp;
    
    /* Write condition */
    while (start < end) {
        /* Swap the values pointed to by start and end */
        temp = *start;
        *start = *end;
        *end = temp;
        
        /* Move start towards the end */
        start++;
        
        /* Move end towards the beginning */
        end--;
    }
}

int *findMax(int *arr, int size) {
    int *maxPtr = arr;
    int i;
    for (i = 1; i < size; i++) {
        /* Compare the current element with the maximum element */
        if (*(arr + i) > *maxPtr) {
            /* Update maxPtr if required */
            maxPtr = arr + i;
        }
    }
    return maxPtr;
}

void swapElements(int *arr, int pos1, int pos2) {
    int *first;
    int *second;
    int temp;
    
    /* Compute the addresses of the two elements */
    first = arr + pos1;
    second = arr + pos2;
    
    /* Swap the values using the computed addresses */
    temp = *first;
    *first = *second;
    *second = temp;
}

int main() {
    int arr[5];
    int *maxPtr;

    printf("Enter 5 elements:\n");
    /* Call readArray() */
    readArray(arr, 5);

    printf("\nOriginal Array:\n");
    /* Call printArray() */
    printArray(arr, 5);

    /* Reverse the array */
    reverseArray(arr, 5);

    printf("\nReversed Array:\n");
    /* Call printArray() */
    printArray(arr, 5);

    /* Find the maximum element */
    maxPtr = findMax(arr, 5);
    
    /* Print maximum value */
    printf("\nMaximum Value: %d\n", *maxPtr);

    /* Swap the first and last elements */
    swapElements(arr, 0, 4);

    printf("\nArray after swapping first and last elements:\n");
    /* Call printArray() */
    printArray(arr, 5);

    return 0;
}
