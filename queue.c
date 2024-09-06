#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size],r=-1,f=-1;
void enqueue(int ele){
    if(r== size-1){
        printf("Queue is full\n");
        return ;
    }
    if(f==-1){
        f=0;
    }
    r++;
    queue[r]=ele;
}
int dequeue(){
    if(f==-1){
        printf("Queue is empty\n");
        return -1;
    }
    int x;
    x=queue[f];
    f++;
    return x;
}
int peek()
{
    if(f==-1){
        printf("Queue is empty\n");
        return -1;
    }
    printf("%d\t",queue[f]);
    return queue[f];
}

int main()
{
    int choice, element;
    
    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter element to enqueue: ");
                scanf("%d", &element);
                enqueue(element);
                break;
            case 2:
                element = dequeue();
                if (element != -1) {
                    printf("Dequeued element: %d\n", element);
                }
                break;
            case 3:
                peek();
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;
}