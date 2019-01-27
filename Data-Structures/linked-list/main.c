/* Linked list tester program*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(void) {
    struct Node *n = (struct Node*)malloc(sizeof (struct Node));
    n->data = 5;

    printf("Data stored in node n is %d\n", n->data);
    return 0;
}