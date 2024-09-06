#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5};
    int n=5, pos, element, i, j;
    printf("Enter the position to insert the element: ");
    scanf("%d", &pos);
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    for(i=n; i>= pos; i++)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=element;
    for(j=0; j<10;j++){
        printf("%d ", arr[j]);
    }
}