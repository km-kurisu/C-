#include<stdio.h>

int main(void)
{
    int a[20],r,i, ele,n,high,low,mid;

    printf("Enter the size of array:");
    scanf("%d",&n);

    printf("\n Enter the elements of the array:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the Element to be searched:");
    scanf("%d",&ele);
    high = n - 1;
    low = 0;
    while (high >= low)
    {
        mid = (high + low) / 2;
        if (a[mid] == ele)
        {
            r = 1;
        }
        else if (ele > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (r==1)
    {
        printf("Found the number at positon %d.\n");
    }
    else
    {
        printf("Not Found");
    }
}