/* Linked list tester program*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

#define NUM_ITEMS 1000000

// Test functions
void testInsert(void);
void testFind(void);

int main(void) {
    // Run through all tests
    testInsert();
    testFind();

    return 0;
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
    printf("PASS!\n\n");
    printf("Destroying list...\n");
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

    // Print the list
    printList(list);
    printf("The list contains %d elements\n", list->size);

    // Destroy the list
    printf("PASS!\n\n");
    destroy(list);
}