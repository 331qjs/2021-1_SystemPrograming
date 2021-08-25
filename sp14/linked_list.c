#include <stdio.h>
#include <stdlib.h>

typedef char DATA;

struct linked_list{
	DATA			d;
	struct linked_list	*next;
};

typedef struct linked_list	ELEMENT;
typedef ELEMENT			*LINK;

LINK string_to_list(char s[]){
	LINK head;
	if(s[0] == '\0')
		return NULL;
	else{
		head = malloc(sizeof(ELEMENT));
		head -> d = s[0];
		head -> next = string_to_list(s + 1);
		return head;
	}
}

void print_list(LINK head){
	if(head == NULL)
		printf("NULL");
	else{
		printf("%c --> ", head -> d);
		print_list(head -> next);
	}
}

int count(LINK head){
	if(head == NULL)
		return 0;
	else 
		return (1 + count(head -> next));
}

int main(void){
	LINK h;
	h = string_to_list("ABC");
	printf("The resulting list is \n");
	print_list(h);
	printf("\nThis list has %d elements.\n", count(h));
	return 0;
}
