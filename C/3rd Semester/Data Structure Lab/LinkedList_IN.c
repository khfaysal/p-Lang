#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int num;
    struct node *ptr;
};
typedef struct node NODE;

void display_list(NODE *first) {
    NODE *temp = first;
    int count = 0;
    printf("\nStatus of the linked list:\n");
    while (temp != NULL) {
        printf("[%p] -> %d\n", (void *)temp, temp->num);
        temp = temp->ptr;
        count++;
    }
    printf("[NULL]\n");
    printf("Number of nodes in the list: %d\n", count);
}

int main() {
    NODE *first = NULL, *temp = NULL, *head = NULL, *last = NULL, *any = NULL;
    int choice = 1;

    // Create initial linked list
    while (choice) {
        head = (NODE *)malloc(sizeof(NODE));
        if (head == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
        printf("Enter a data element to insert into the Linked List: ");
        scanf("%d", &head->num);
        head->ptr = NULL;

        if (first == NULL) {
            first = last = head;
        } else {
            last->ptr = head;
            last = head;
        }

        printf("Do you want to continue (Type 0 to exit or 1 to continue)? ");
        scanf("%d", &choice);
    }

    display_list(first);

    // Add a new node at the beginning
    head = (NODE *)malloc(sizeof(NODE));
    if (head == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter a data element to insert at the beginning: ");
    scanf("%d", &head->num);
    head->ptr = first;
    first = head;

    display_list(first);

    // Add a new node at the end
    head = (NODE *)malloc(sizeof(NODE));
    if (head == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter a data element to insert at the end: ");
    scanf("%d", &head->num);
    head->ptr = NULL;
    last->ptr = head;
    last = head;

    display_list(first);

    // Add a new node in the middle
    int searchv;
    printf("Enter a value to search for inserting after it: ");
    scanf("%d", &searchv);

    temp = first;
    while (temp != NULL) {
        if (temp->num == searchv) {
            break;
        }
        temp = temp->ptr;
    }

    if (temp != NULL) {
        head = (NODE *)malloc(sizeof(NODE));
        if (head == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
        printf("Enter a data element to insert in the middle: ");
        scanf("%d", &head->num);
        head->ptr = temp->ptr;
        temp->ptr = head;
    } else {
        printf("Value %d not found in the list.\n", searchv);
    }

    display_list(first);

    return 0;
}
