#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void main(){
	struct node *root;
	root = malloc(sizeof(struct node));
	root -> data = 10;
	root -> next = 0;	
	printf("%p",root -> next);

}
