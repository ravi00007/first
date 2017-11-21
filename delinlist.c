#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct list
{
	int info;
	list *next;
};
main()
{
	list *head,*prev,*curr;
	int d;
	if (head=='\0')
	{
		printf("list is empty");
		return 0;
		
	}
	
	printf("ENTER ELEMENT TO BE DELETED");
	scanf("%d",&d);
	prev=head;
	for(curr=head;curr!='\0'; )
	{
		if(curr->info==d)
		{
			if(curr=head)
			{
				head=head->next;
				 printf("the operation was completed succesfully");
			}
			else
			{
				prev->next=curr->next;
				 printf("the operation was completed succesfully");
				return 0;
			}
		}
		prev=curr;
		curr=curr->next;
	}
	printf("****NOT FOUND");
	return 0;

}
