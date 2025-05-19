#include <stdio.h>
#define MAX 5  

int main() 
{
int stack[MAX], top = -1, choice, value;
 while (1)
  {
        printf("\nStack Operations:\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) { 
            if (top == MAX - 1) {
                printf("Stack Overflow! Cannot push\n");
            } else {
                printf("Enter value to push: ");
                scanf("%d", &value);
                top++;
                stack[top] = value;
                printf("%d pushed into stack\n", value);
            }
        } 
        else if (choice == 2) {  
            if (top == -1) {
                printf("Stack Underflow! Cannot pop\n");
            } else {
                printf("%d popped from stack\n", stack[top]);
                top--;
            }
        } 
        else if (choice == 3) {  
            if (top == -1) {
                printf("Stack is empty!\n");
            } else {
                printf("Stack elements:\n ");
                for (int i = top; i >= 0; i--) {
                    printf("stack[%d]= %d \n ", i,stack[i]);
                }
                printf("\n");
            }
        } 
        else if (choice == 4) {  
            printf("Exiting program...\n");
            break;
        } 
        else {
            printf("Invalid choice! Try again.\n");
        }
    }
return 0;
}
