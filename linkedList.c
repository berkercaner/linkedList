#include <stdio.h>
#include <stdlib.h>

struct node{
	int value;
	struct node *next, *prev;
};

// pushing new node to the front ==> a->b->c->null : push(&head,d) => d->a->b->c->null
void push(struct node** head, int value){
	struct node *tmp = (struct node*) malloc(sizeof(struct node));
	tmp->value = value;  // now there is a->b->c and d->{}
	tmp->next =  (*head); // now (*head) = a->b->c->null and tmp = d->a->b->c->null
	(*head) = tmp; 			// now (*head) = d->a->b->c->null
	free(tmp);
	return;
}

//popping a node from the front ==> a->b->c->null  : pop(&head) => b->c->null && returning the value
int pop(struct node** head){
	int value = (*head)->value; // storing the value at the top
	*(head) = (*head)->next;  //removing from list
	return value;
}

//inserting after the spesific node
void insert(struct node* head,int whichValueAfter, int value){
}

//appending node to the end
void append(struct node** head){
}


int main(){

	return 0;
}
