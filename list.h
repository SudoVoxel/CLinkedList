#ifndef LIST_H_
#define LIST_H_

typedef struct node {
	void *data;
	struct node *next;
} Node;

// Create list given value.
Node *list_create(void *value);

// Append value to end of the list.
void push(Node * head, int val);

// Append list two to list one.
void merge(Node * one, Node * two);

// Return number of nodes in the list.
int length(Node * head);

// Remove and return first element in the list.
int pop(Node ** head);

#endif