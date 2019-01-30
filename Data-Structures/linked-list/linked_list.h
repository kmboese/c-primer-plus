#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node {
    int data;
    struct Node *next;
};

struct LinkedList {
    struct Node *head;
    int size;
};

// Linked list functions
/* Initializes the memory for the contents of a linked list and sets default 
values */
void init(struct LinkedList *ll);
/* Inserts data after the head of a linked list */
void insert(struct LinkedList *ll, int _data);
/* Searches for a given key value in the linked list. Returns the index of the 
key if it is found, or -1 otherwise. */
int find(struct LinkedList *ll, int key);
/* Prints the contents of a linked list */
void printList(struct LinkedList *ll);
/* Deallocates memory for a linked list */
void destroy(struct LinkedList *ll);

#endif