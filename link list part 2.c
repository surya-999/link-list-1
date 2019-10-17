#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *next;
};
main()
{
struct node *temp1,*temp2,*temp3;
temp1=(struct node *)malloc(sizeof(struct node));
temp1->info=5;
temp1->next=temp2;
temp2=(struct node *)malloc(sizeof(struct node));
temp2->info=2;
temp2->next=temp3;
temp3=(struct node *)malloc(sizeof(struct node));
temp3->info=4;
temp3->next=NULL;
printf("\ndata=%d present adderes=%u next adderes=%u\n",temp1->info,temp1,temp1->next);
printf("\ndata=%d present address=%u next adderes=%u\n",temp2->info,temp2,temp2->next);
printf("\ndata=%d present adderes=%u next adderes=%u\n",temp3->info,temp3,temp3->next);
}

