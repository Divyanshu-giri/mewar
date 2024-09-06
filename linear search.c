#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int tar, i, j, flag=0;
    printf("Enter the target element: \n");
    scanf("%d",&tar);

    for(j=0; j<5; j++)
    {
        if(arr[j]==tar)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("Element found at index %d\n", j);
        
    }
    else
    printf("target is not found \n");
}
