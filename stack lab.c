#include <stdio.h>
#define size 5

int stack[size];
int top = -1;

void push(int element) {
    if (top >= size - 1) {
        printf("Overflow\n");
    } else {
        top++;
        stack[top] = element;
    }
}

int pop() {
    if (top == -1) {
        printf("Underflow, no element to display\n");
        return -1;
    } else {
        int x = stack[top];
        top--;
        return x;
    }
}

int peek() {
    if (top == -1) {
        printf("Stack is empty\n");
        return -1;
    } else {
        return stack[top];
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

// Function to check if the stack is empty
int isEmpty() {
    return top == -1;
}

int main() {
    int a, b;
    printf("Enter the elements of stack:\n");
    for (a = 0; a < size; a++) {
        printf("Enter the element in stack\n");
        scanf("%d", &b);
        push(b);
    }
    printf("Stack elements in stack:\n");
    display();

    printf("Top element is %d\n", peek()); // Peek operation

    pop();
    printf("Updated stack\n");
    display();

    // Check if the stack is empty
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }

    return 0;
}

