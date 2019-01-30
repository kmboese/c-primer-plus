/* Linked list tester program*/

#include <stdio.h>
#include <stdlib.h>
//#include "linked_list.h"

struct Node {
    int data;
    struct Node *next;
};

struct LinkedList {
    struct Node *head;
    int size;
};

// Functions
void init(struct LinkedList *ll);
void insert(struct LinkedList *ll, int _data);
void printList(struct LinkedList *ll);
void destroy(struct LinkedList *ll);


int main(void) {
    struct LinkedList *list = malloc(sizeof(struct LinkedList));
    init(list);
    
    // Insert some data into the list
    for (int i = 1; i <= 3; i++) {
        insert(list, i);
    }

    // Print the list
    printList(list);

    // Destroy the list
    destroy(list);

    return 0;
}

// Allocates memory and initializes a Linked List
void init(struct LinkedList *ll) {
    // Allocate memory for the head
    ll->head = (struct Node*)malloc(sizeof(struct Node));

    // Fill in data values
    ll->head->data = -1;
    ll->head->next = NULL;
    ll->size = 0;
}

// Deallocates memory for a linked list
void destroy(struct LinkedList *ll) {
    // Deallocate memory for nodes
    struct Node *curr = ll->head;
    //struct Node *next = curr->next;
    while (curr != NULL) {
        struct Node *victim = curr;
        curr = curr->next;
        free(victim);
    }

    // free the linked list struct
    free(ll);
}

// LL insert function
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