#include <stdio.h>
#include "utils/array_funcs.h"

void main()
{
    int list[] = {1, -2, 3, 8, 7, 4, 11};
    int length = len(list);
    struct Array len_array;
    len_array.valOf = list;
    len_array.length = length;

    printf("length: %d\n", len_array.length);
    int minimum = min(len_array);
    printf("minimum: %d \n", minimum);
    int maximum = max(len_array);
    printf("maximum: %d \n", maximum);

    int missing = 0;
    for (int i = minimum; i < maximum; i++)
    {
        bool found = in(len_array, i);
        if (!found)
        {
            // printf("%d, ", i);
            missing++;
        }
    }
    int *missing_arr;
    missing_arr = (int *)malloc(missing * sizeof list[0]);
    struct Array miss_arr;
    miss_arr.valOf = missing_arr;
    miss_arr.length = missing;

    missing = 0;
    for (int i = minimum; i < maximum; i++)
    {
        bool found = in(len_array, i);
        if (!found)
        {
            miss_arr.valOf[missing] = i;
            missing++;
        }
    }

    for (int i = 0; i < miss_arr.length; i++)
    {
        printf("%d, ", miss_arr.valOf[i]);
    }

    printf("\n");
}
