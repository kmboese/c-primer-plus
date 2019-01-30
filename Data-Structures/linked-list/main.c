/* Linked list tester program*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

#define NUM_ITEMS 10000

// Test functions
void testInsert(void);
void testFind(void);
void testdeleteNode(void);
void testIterate(void);


// Iterate functions
void plusOne(struct Node *n);

int main(void) {
    // Run through all tests
    testInsert();
    testFind();
    testdeleteNode();
    testIterate();

    return 0;
}

void plusOne(struct Node *n) {
    n->data++;
}

void testInsert(void) {
    struct LinkedList *list = malloc(sizeof(struct LinkedList));
    init(list);

    printf("##### %s #####\n", __func__);
    printf("Inserting %d items...\n", NUM_ITEMS);

    for (unsigned int i = 0; i < NUM_ITEMS; i++) {
        insert(list, i);
    }

    // Destroy list
    printf("Destroying list...\n");
    printf("PASS!\n\n");
    destroy(list);
}

void testFind(void) {
    printf("##### %s #####\n", __func__);

    int key = 3, range = 10, ret = 0;
    struct LinkedList *list = malloc(sizeof(struct LinkedList));
    init(list);

    // Insert some data into the list
    for (int i = 1; i <= range; i++) {
        insert(list, i);
    }

    // Find data that should exist
    ret = find(list, key);
    if (ret != -1) {
        printf("Key %d was found at index %d\n", key, ret);
    }

    // Try to find data that shouldn't exist
    key = -1;
    if (find(list, key) == -1) {
        printf("%d not found in the list\n", key);
    }

    // Print the list
    printList(list);
    printf("The list contains %d elements\n", list->size);

    // Destroy the list
    printf("PASS!\n\n");
    destroy(list);
}

void testdeleteNode(void) {
    printf("##### %s #####\n", __func__);

    int key = 2;
    int range = 10;

    struct LinkedList *list = malloc(sizeof(struct LinkedList));
    init(list);

    // Insert some data into the list
    for (int i = 1; i <= range; i++) {
        insert(list, i);
    }

    // Print the list
    printList(list);

    // Remove all elements
    printf("Deleting all elements...\n");
    for (int i = 0; i <= range; i++) {
        deleteNode(list, i);
    }
    // Try to delete an element from an empty list
    if (deleteNode(list, 1) == -1) {
        printf("Error in deleting item from list!\n");
    }
    printList(list);

    // Destroy the list
    printf("PASS!\n\n");
    destroy(list);
}

void testIterate(void) {
    printf("##### %s #####\n", __func__);

    struct LinkedList *list = malloc(sizeof(struct LinkedList));
    init(list);

    // Insert all zeroes
    for (int i = 0; i < 10; i++) {
        insert(list, 0);
    }

    // Add one to all elements using iterate
    iterate(list, &plusOne);

    // Print the list (should be all 1's)
    printList(list);

    // Destroy the list
    printf("PASS!\n\n");
    destroy(list);

}