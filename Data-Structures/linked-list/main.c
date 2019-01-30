/* Linked list tester program*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

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