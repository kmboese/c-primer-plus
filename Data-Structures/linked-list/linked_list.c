/* Linked list program */
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

// Allocates memory and initializes a Linked List
void init(struct LinkedList *ll) {
    // Allocate memory for the head
    ll->head = (struct Node*)malloc(sizeof(struct Node));

    // Fill in data values
    ll->head->data = -1;
    ll->head->next = NULL;
    ll->size = 0;
}

int iterate(struct LinkedList *ll, void (*fun)(struct Node *n)) {
    if (!ll) {
        perror("Error: list not defined!\n");
        return -1;
    }

    struct Node *tmp = ll->head;
    // Apply function to all nodes in the list
    while (tmp->next != NULL) {
        tmp = tmp->next;
        (*fun)(tmp);
    }
    return 0;
}

// Deallocates memory for a linked list
void destroy(struct LinkedList *ll) {
    // Deallocate memory for nodes
    struct Node *curr = ll->head;
    struct Node *next;
    //struct Node *next = curr->next;
    while (curr != NULL) {
        next = curr->next;
        free(curr);
        curr = next;
    }

    // free the linked list struct
    free(ll);
}

void insert(struct LinkedList *ll, int _data) {
    // Create a new node
    struct Node *tmp = malloc(sizeof(struct Node));
    tmp->data = _data;

    // Insert node in the list
    if (ll->size == 0) {
        tmp->next = NULL;
        ll->head->next = tmp;
    }
    else {
        // Get previous first node
        struct Node *first = ll->head->next;
        ll->head->next = tmp;
        // Make the new node point to the previous first node
        tmp->next = first;
    }

    // Increment the size
    ll->size++;
}

int delete(struct LinkedList *ll, int key) {
    struct Node *curr = ll->head;
    struct Node *next = curr->next;

    while (next != NULL) {
        if (next->data == key) {
            curr->next = next->next;
            // Free the deleted Node
            free(next);
            return 0;
        }
        curr = next;
        next = next->next;        
    }

    return -1;
}


int find(struct LinkedList *ll, int key) {
    int index = 0;
    struct Node *tmp = ll->head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
        if (tmp->data == key) {
            return index;
        }
        index++;
    }

    // Return -1 if value was not found
    return -1;
}

// LL print function
void printList(struct LinkedList *ll) {
    if (!ll) {
        fprintf(stderr, "Error: linked list is not initialized!\n");
        return;
    }
    struct Node *tmp = ll->head;
    int count = 0;

    // Print contents
    printf("Linked list contents:\n");
    while (tmp->next != NULL) {
        tmp = tmp->next;
        // Insert newline every 10 values for easier reading
        if (count != 0 && count % 10 == 0) {
            printf("\n");
        }
        printf("%d ", tmp->data);
        count++;
    }

    printf("\n");
}
