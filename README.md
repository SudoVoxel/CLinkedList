# CLinkedList
###
## A barebones linked list implementation in C

A "purist" implementation of **generic** singly linked lists.


Example:
```c
#include <list.h>

int main() {
   // list_create() requires a starting value.
   Node* list = list_create(4);
   
   push(list,2);
   push(list,3);
   push(list,4);

   Node* list2 = list_create(5);
   push(list2,6);
   push(list2,7);
   
   merge(list,list2);

   Node * current = list;

   // Print each value in list
   while (current != NULL) {
     printf("%d\n ", current->data);
     current = current->next;
   }

   return 0;
   
}
```
