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
void init(struct LinkedList *ll);
void insert(struct LinkedList *ll, int _data);
void printList(struct LinkedList *ll);
void destroy(struct LinkedList *ll);

#endif