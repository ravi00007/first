#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int *head='\0';
struct list
{
	int info;
	list *next;
};
main()
{
	if(head=='\0')
	{
		printf("queue is empty");
		return 0;
	}
	head=head->next;
	
	return 0;
	
}
