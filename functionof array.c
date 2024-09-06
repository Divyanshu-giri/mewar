#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int arr[SIZE];
int i, j;

void Traverse() {
    for (i = 0; i < SIZE; i++) {
        printf("%d\n", arr[i]);
    }
}

void Insertion() {
    int n = SIZE, pos, el, d, g;
    printf("Enter the position to insert the element: \n");
    scanf("%d", &pos);
    if (pos < 0 || pos > n) {
        printf("Invalid position\n");
        return;
    }
    printf("Enter the element to insert: \n");
    scanf("%d", &el);

    for (d = n; d > pos; d--) {
        arr[d] = arr[d - 1];
    }
    arr[pos] = el;
    for (g = 0; g < n + 1; g++) {
        printf("%d\n", arr[g]);
    }
    printf("\n");
}

int Deletion() {
    int i, j, del;
    int n = SIZE;

    printf("Enter element to delete:\n");
    scanf("%d", &del);
    for (i = 0; i < n; i++) {
    	printf("hello1");
        if (arr[i] == del) {
        	printf("hello2");
            for (j = i; j < n - 1; j++) {
                arr[j] = arr[j+1];
                printf("hello3");
            }
            n--;
            break;
        }
    }
    printf("Updated array:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n ", arr[i]);
    }
    printf("\n");
}

void Search() {
    int ch;
    int tar, j, flag = 0;
    int mid, low = 0, high = SIZE - 1;
    while (1) {
        printf("Enter your choice:\n");
        printf("1 for linear search\n2 for binary search\n3 to exit to main menu:\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter the target element: \n");
                scanf("%d", &tar);

                for (j = 0; j < SIZE; j++) {
                    if (arr[j] == tar) {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1) {
                    printf("Element found at index %d\n", j);
                } else {
                    printf("Target is not found\n");
                }
                break;
            case 2:
                printf("Enter the target element:\n");
                scanf("%d", &tar);
                while (low <= high) {
                    mid = (low + high) / 2;
                    if (tar == arr[mid]) {
                        printf("Element found at index %d\n", mid);
                        break;
                    }
                    if (tar < arr[mid]) {
                        high = mid - 1;
                    } else {
                        low = mid + 1;
                    }
                }
                if (low > high) {
                    printf("Target is not found\n");
                }
                break;
            case 3:
                return;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
}

void sorting() {
    int a;
    for (i = 0; i < SIZE; i++) {
        for (j = i + 1; j < SIZE; j++) {
            if (arr[i] > arr[j]) {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void reverse() {
    for(int i = 0; i < SIZE / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[SIZE - i - 1];
        arr[SIZE - i - 1] = temp;
    }
    printf("Reversed array:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

int main() {
    int a;
    while (1) {
        printf("Enter your choice:\n");
        printf("1 for traversal\n2 for insertion\n3 for deletion\n4 for searching\n5 for sorting\n6 for reverse the array\n7 for exit:\n");
        scanf("%d", &a);
        switch (a) {
            case 1:
                Traverse();
                break;
            case 2:
                Insertion();
                break;
            case 3:
                Deletion();
                break;
            case 4:
                Search();
                break;
            case 5:
                sorting();
                break;
            case 6:
                reverse();
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid choice\n");
                break;
        }
    }
    return 0;
}
