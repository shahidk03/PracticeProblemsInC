#include <stdbool.h>

#define len(x) (sizeof(x) / sizeof((x)[0]))

typedef struct Array
{
    int *valOf;
    int length;
} Array;

void printArray(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d, ", arr.valOf[i]);
    }
}

void sorted(struct Array arr)
{
    int temp;
    for (int i = 0; i < arr.length; i++)
    {
        for (int j = i; j < arr.length; j++)
        {
            if (arr.valOf[j] < arr.valOf[i])
            {
                temp = arr.valOf[i];
                arr.valOf[i] = arr.valOf[j];
                arr.valOf[j] = temp;
            }
        }
    }
}

int min(struct Array arr)
{
    int m = arr.valOf[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.valOf[i] < m)
        {
            m = arr.valOf[i];
        }
    }
    return m;
}

int max(struct Array arr)
{
    int m = arr.valOf[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.valOf[i] > m)
        {
            m = arr.valOf[i];
        }
    }
    return m;
}

bool in(struct Array arr, int val)
{
    bool found = false;
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.valOf[i] == val)
        {
            found = true;
            break;
        }
    }
    return found;
}
