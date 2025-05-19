#include <stdio.h>
#include <stdlib.h>
#define MAX 5  

int main() {
    char names[MAX][50];   
    char phones[MAX][15];  
    int top = -1;          
    int choice;

    while (1) {
      
        printf("\n--- Call List Menu --- \n");
        printf("1. Add Call\n");
        printf("2. Remove Last Call\n");
        printf("3. View All Calls\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    switch(choice)    
 {
    case 1:
            {
                if (top == MAX - 1) {
                printf("Call list is full!\n");
            } else {
                top++;
                printf("Enter Name : ");
                scanf("%s", names[top]);  
                printf("Enter Phone Number : ");
                scanf("%s", phones[top]);
                printf("Call added: %s : [%s]\n", names[top], phones[top]);
            }
            break;
            }

    case 2:
        {
            if (top == -1) {
                printf("Call list is empty!\n");
            } else {
                printf("Removed call: %s : [%s]\n", names[top], phones[top]);
                top--;
            }
            break;
        } 
            case 3:
            {
            if (top == -1) {
                printf("Call list is empty.\n");
            } else {
                printf("Recent Calls:\n");
                for (int i = top; i >= 0; i--) {
                    printf("%s : [%s]\n", names[i], phones[i]);
                }
            }
                break;
            
            }
        case 4:
        {
            printf("Exiting program.\n");
            exit(0);
            break;
        }
 default:
         {
            printf("Invalid choice! Try again.\n");
        }
    }
}
return 0;
}


