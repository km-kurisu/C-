#include<stdio.h>

void main()
{
    int i , j , n , m , a[20];

    printf("Enter the size of the array: ");
    scanf("%d" , &n);

    printf("Enter the elements in array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d" , &a[i]);
    }
    
    for (i = 0; i < n -1 ; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] = a[j + 1])
            {
                m = a[j];
                a[j] = a[j + 1];
                a[j + 1] = m;
            }  
        }  
    }
    
    printf("\n Sorted array: ");
    for (i = 0; i < n ; i++)
    {
        printf("%d" , a[i]);
    }
    
}