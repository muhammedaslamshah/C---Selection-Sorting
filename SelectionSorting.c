#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, limit, values[100], j, temp;
    printf("Enter the limmit");
    scanf("%d", &limit);
    printf("Enter values");

    // Input
    
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &values[i]);
    }


    // Sorting

    for (i = 0; i < limit - 1; i++)
    {
        for (j = i + 1; j < limit; j++)
        {
            if (values[i] > values[j])
            {
                temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }
        }
    }

    // Output 

    printf("Sorted values by ascending order : ");
    for (i = 0; i < limit; i++)
    {
        printf("%d \t", values[i]);
    }
}