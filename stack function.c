#include<stdio.h>
# define size 5

int top=-1,x, arr[size];
void display();
void push ();
int pop ();
int main()
{
    
    int choice;
    while(1)
    {
        printf("enter your choice");
        printf("\n1 to push , \n2 to display \n3 to pop:");
        scanf("%d",&choice);

        switch (choice)
        {
        
            case 1 :
            printf("enter a value to push: ");
            scanf("%d",&x);
            case 2 :
        	printf("Top element : \n",display());
            break;
            break;
            case 3 :
            printf("popped element:%d\n", pop());
            break;
        
        default:
        printf("\ninvaled");
            break;
        }
    }
    return 0;
}
void dispaly()
{
    int i;
    for(i=top; i>=0; i--)
    {
        printf("%d\n", arr[i]);
    }

}
void push ()
{
    if (top >= size)
    {
        printf("overflow");
        return;
    }
    else
    {
        top++;
        arr[top] = x;
    }
    
}
int pop ()
{
    if( top == -1)
    {
        printf("stack is empty:");
        return -1;
    }
    top--;
    return arr[top];
}
