/* Linked list tester program*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

#define INSERT_RANGE 10

// Test functions
void testFind();

int main(void) {

    testFind();

    return 0;
}

void testFind() {
    printf("##### testFind() #####\n");

    int key = 3;
    int ret = 0;
    struct LinkedList *list = malloc(sizeof(struct LinkedList));
    init(list);

    // Insert some data into the list
    for (int i = 1; i <= INSERT_RANGE; i++) {
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
    destroy(list);
}