#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int num;
    struct node *ptr;
};
typedef struct node NODE;

// Function to display the linked list
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

// Function to delete the first node
NODE* delete_first(NODE *first) {
    if (first == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return NULL;
    }
    NODE *temp = first;
    first = first->ptr;
    printf("Deleted node with value: %d\n", temp->num);
    free(temp);
    return first;
}

// Function to delete the last node
NODE* delete_last(NODE *first) {
    if (first == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return NULL;
    }
    if (first->ptr == NULL) { // Only one node in the list
        printf("Deleted node with value: %d\n", first->num);
        free(first);
        return NULL;
    }
    NODE *temp = first;
    while (temp->ptr->ptr != NULL) { // Traverse to the second last node
        temp = temp->ptr;
    }
    printf("Deleted node with value: %d\n", temp->ptr->num);
    free(temp->ptr);
    temp->ptr = NULL;
    return first;
}

// Function to delete a specific node by value
NODE* delete_by_value(NODE *first, int value) {
    if (first == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return NULL;
    }
    if (first->num == value) { // Value found at the first node
        NODE *temp = first;
        first = first->ptr;
        printf("Deleted node with value: %d\n", temp->num);
        free(temp);
        return first;
    }
    NODE *temp = first;
    while (temp->ptr != NULL && temp->ptr->num != value) {
        temp = temp->ptr;
    }
    if (temp->ptr == NULL) {
        printf("Value %d not found in the list.\n", value);
    } else {
        NODE *to_delete = temp->ptr;
        temp->ptr = to_delete->ptr;
        printf("Deleted node with value: %d\n", to_delete->num);
        free(to_delete);
    }
    return first;
}

int main() {
    NODE *first = NULL, *temp = NULL, *head = NULL, *last = NULL;
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

    // Deletion options
    int del_choice, del_value;
    do {
        printf("\nChoose an option:\n");
        printf("1. Delete from beginning\n");
        printf("2. Delete from end\n");
        printf("3. Delete by value\n");
        printf("4. Exit deletion menu\n");
        printf("Enter your choice: ");
        scanf("%d", &del_choice);

        switch (del_choice) {
            case 1:
                first = delete_first(first);
                display_list(first);
                break;
            case 2:
                first = delete_last(first);
                display_list(first);
                break;
            case 3:
                printf("Enter the value to delete: ");
                scanf("%d", &del_value);
                first = delete_by_value(first, del_value);
                display_list(first);
                break;
            case 4:
                printf("Exiting deletion menu.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (del_choice != 4);

    return 0;
}
