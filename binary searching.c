#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int mid, low=0, high=5, tar;
    printf("enter the target elements:\n");
    scanf("%d",&tar);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(tar== arr[mid]){
            printf("element found at index %d \n", mid);
            break;
        }
        if(tar < arr[mid])
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
}