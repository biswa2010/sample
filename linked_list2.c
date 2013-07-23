#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;


};

int main(){
	struct node *root;
	struct node *conductor;
	root = malloc(sizeof(struct node));
	root -> data = 10;
	root -> next = 0;
	conductor = root;
	if(conductor != 0){
		while(conductor -> next !=0){
			conductor = conductor -> next ;
			printf("%d",conductor -> data);
		}	
		printf("%d",conductor -> data);

	}
	conductor -> next = malloc(sizeof(struct node));
	if(conductor == 0){
		printf("No memory");
		return 0;
	}
	conductor -> next = 0;
	conductor -> data = 20;
	return 0;
	

}
