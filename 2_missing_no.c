#include <stdio.h>
#include "utils/array_funcs.h"

void main()
{
    int list[] = {6, 5, 12, 10, 9, 1, -5};
    int length = len(list);

    struct Array array;
    array.valOf = list;
    array.length = length;

    sorted(array);

    int index = 0;
    int val = array.valOf[0];

    while (index < array.length)
    {
        printf("%d, ", val);
        if (val <= array.valOf[index])
        {
            val++;
            continue;
        }
        else
        {
            val++;
            index++;
        }
    }
    printf("\n");
}