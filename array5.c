#include <stdio.h>
#include <stdlib.h>

int **allocateMarks(int n, int m);
void readMarks(int **marks, int n, int m);
void printMarks(int **marks, int n, int m);
float calculateAverage(int **marks, int n, int m);
int findMax(int **marks, int n, int m);
int findMin(int **marks, int n, int m);
void freeMemory(int **marks, int n);

int main()
{
    int n, m;
    int **marks;
    float average;

    do
    {
        scanf("%d", &n);

        if (n <= 0)
        {
            printf("Invalid number of students. Enter a positive integer: ");
        }
    } while (n <= 0);

    do
    {
        scanf("%d", &m);

        if (m <= 0)
        {
            printf("Invalid number of subjects. Enter a positive integer: ");
        }
    } while (m <= 0);

    marks = allocateMarks(n, m);

    if (marks == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    readMarks(marks, n, m);

    printMarks(marks, n, m);

    average = calculateAverage(marks, n, m);

    printf("Average: %.2f\n", average);
    printf("Highest: %d\n", findMax(marks, n, m));
    printf("Lowest: %d\n", findMin(marks, n, m));

    freeMemory(marks, n);

    return 0;
}

int **allocateMarks(int n, int m)
{
    int **marks;
    int i;

    marks = (int **)malloc(n * sizeof(int *));

    if (marks == NULL)
    {
        return NULL;
    }

    for (i = 0; i < n; i++)
    {
        marks[i] = (int *)malloc(m * sizeof(int));

        if (marks[i] == NULL)
        {
            freeMemory(marks, i);
            return NULL;
        }
    }

    return marks;
}

void readMarks(int **marks, int n, int m)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }
}

void printMarks(int **marks, int n, int m)
{
    int i, j;

    printf("Marks:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d", marks[i][j]);

            if (j < m - 1)
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}

float calculateAverage(int **marks, int n, int m)
{
    int i, j;
    long long sum = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            sum += marks[i][j];
        }
    }

    return (float)sum / (n * m);
}

int findMax(int **marks, int n, int m)
{
    int i, j;
    int max = marks[0][0];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (marks[i][j] > max)
            {
                max = marks[i][j];
            }
        }
    }

    return max;
}

int findMin(int **marks, int n, int m)
{
    int i, j;
    int min = marks[0][0];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (marks[i][j] < min)
            {
                min = marks[i][j];
            }
        }
    }

    return min;
}

void freeMemory(int **marks, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        free(marks[i]);
    }

    free(marks);
}