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
/* Takes a linked list and a function pointer, and calls that function on each
node in the list.*/
int iterate(struct LinkedList *ll, void (*fun)(struct Node *n));
/* Inserts data after the head of a linked list */
void insert(struct LinkedList *ll, int _data);
/* Deletes the first node containing the key. Returns 0 if the key was found 
and a node was deleted, or -1 otherwise.*/
int deleteNode(struct LinkedList *ll, int key);
/* Searches for a given key value in the linked list. Returns the index of the 
key if it is found, or -1 otherwise. */
int find(struct LinkedList *ll, int key);
/* Prints the contents of a linked list */
void printList(struct LinkedList *ll);
/* Deallocates memory for a linked list */
void destroy(struct LinkedList *ll);

#endif