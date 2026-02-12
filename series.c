#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d", &size);

    int a[size];

    
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d value:\n", i + 1);
        scanf("%d", &a[i]);
    }

    
    for (int i = 0; i < size - 1; i++)
    {
        if (a[i] + 1 == a[i + 1])
        {
            printf("%d, %d\n", a[i], a[i + 1]);
            i++;   
        }
        else if (a[i] == a[i + 1])
        {
            printf("%d\n", a[i]);
            i++;   
        }
    }

    return 0;
}