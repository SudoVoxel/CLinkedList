#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	void *data;
	struct node *next;
} Node;

Node *list_create(void *value) {
	Node *newnode = (Node *) malloc(sizeof(Node));
	newnode->data = value;
  newnode->next = NULL;
  
	return newnode;
}

void push(Node * head, int val) {
    Node * current = head;

    while (current->next != NULL) {
        current = current->next;
    }

    current->next = (Node *) malloc(sizeof(Node));
    current->next->data = val;
    current->next->next = NULL;
}

void merge(Node * one, Node * two) {
  Node * current = one;

  while (current->next != NULL) {
    current = current->next;
  }

  free(current->next);
  current->next = two;
}

int length(Node * head) {
  int length = 0;
  Node * current = head;

  while (current != NULL) {
    current = current->next;
    length++;
  }

  return length;
}

int pop(Node ** head) {
    int retval = -1;
    Node * next_node = NULL;

    next_node = (*head)->next;
    retval = (*head)->data;
    free(*head);
    *head = next_node;

    return retval;
}
