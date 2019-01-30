/* Linked list tester program*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

// struct Node {
//     int data;
//     struct Node *next;
// };

// struct LinkedList {
//     struct Node *head;
//     int size;
// };

// Functions
// void init(struct LinkedList *ll);
// void insert(struct LinkedList *ll, int _data);
// void printList(struct LinkedList *ll);
// void destroy(struct LinkedList *ll);


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