#include<stdio.h>
#include<conio.h>

void main()
{
    int i, j, temp,n,a[20];

    printf("Enter the size of array:");
    scanf("%d",&n);

    printf("\n Enter the elements of the array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0 ; i < n - 1; i++){
        for(j  = i + 1; j < n; j++){
            if(a[i]<a[j])
            {
                temp = a[i];
                a[i]= a[j];
                a[j] = temp;
            }
        }
    }
    printf("\n Sorted array:");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}