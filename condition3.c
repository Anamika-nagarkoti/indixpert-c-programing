#include <stdio.h>

int main()
{

    int array1[5] = {1, 3, 4, 5, 3};
    int array2[3] = {4, 3, 2};
    int array3[8];

    for (int i = 0; i < 5; i++)
    {
        array3[i] = array1[i];
    }

    for (int i = 0; i < 3; i++)
    {

        array3[i+5] = array2[i];
    }
    printf("new_array :");

    for (int i = 0; i < 8; i++)
    {
        printf("\t%d", array3[i]);
    }

    return 0;
}