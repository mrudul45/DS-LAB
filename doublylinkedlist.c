#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int value;
    struct node* next,*prev;
}node1;
int val,pos,i;
node1* start=NULL;
void insert_beg();
void insert_in_btw();
void insert_end();
void display();
void delete_beg();
void delete_in_btw();
void delete_end();
void main()
{
    int ch;
    char c;
    do
    {
        printf("\n_MENU_ \n 1.Display\n 2.Insert at the begining \n 3.Insert at the end\n 4.Insert in between\n 5.Delete from begining\n 6.Delete from the end\n 7.Delete in between\n");
        scanf("%d",&ch);
        switch(ch)
         {
           
  	   case 1: display();
  	     break;
  	   case 2: insert_beg();
  	     break;
  	   case 3: insert_end();
  	     break;
  	   case 4: insert_in_btw();
  	     break;
  	   case 5: delete_beg();
  	     break;
  	   case 6: delete_end();
  	     break;
  	   case 7: delete_in_btw();
  	     break; 
         }
    printf("\n do you want to continue ? (y,n)");
    scanf("%s",&c);
     }
   while(c=='y');
}
 void insert_beg()
    {
    node1* nptr=malloc(sizeof(node1));
    if(nptr==NULL)
      {
        printf("Memory overflow\n");
      }
    else
      {
        printf("Enter the element : ");
        scanf("%d",&val);
        nptr->value=val;
        if(start==NULL)
           {
            start=nptr;
            nptr->next=NULL;
            nptr->prev=NULL;
           }
        else
          {
            nptr->next=start;
            nptr->prev=NULL;
            start->prev=nptr;
            start=nptr;
          }
      }
    printf("Node inserted\n");
   }
 void insert_in_btw()
   {
    int c=1;
      node1* ptr;
      node1 *temp=start;
      node1* nptr=malloc(sizeof(node1));
     printf("Enter the element to be inserted : ");
     scanf("%d",&val);
      nptr->value=val;
      ptr=temp;
      nptr->next=NULL;
      printf("\nEnter position : ");
      scanf("%d",&pos);
    if(temp==NULL)
      {
        start=nptr;
        nptr->next=NULL;
        nptr->prev=NULL;
      }
    else
      {
    if(pos==1)
      {
        nptr->next=start;
        start->prev=nptr;
        start=nptr;
      }
    else
       {
        while(temp!=NULL)
          {
            if(c==pos)
              {
                nptr->next=ptr->next;
                ptr->next->prev=nptr;
                nptr->prev=ptr;
                ptr->next=nptr;
                break;
              }
            ptr=temp;
            temp=temp->next;
            c++;
          }
        }
    }
    printf("Node inserted\n");
}
void insert_end()
{
     node1* ptr;
     node1* temp=start;
     node1* nptr=malloc(sizeof(node1));
     if(nptr==NULL)
     {
        printf("Memory Overflow\n");
     }
     else
     {
         printf("Enter the element : ");
         scanf("%d",&val);
         nptr->value=val;
         while(temp!=NULL)
         {
             ptr=temp;
             temp=temp->next;
         }
         ptr->next=nptr;
         nptr->next=NULL;
         nptr->prev=ptr;
         printf("Node inserted\n");
    }
}
void display()
{
    node1* temp;
    if(start==NULL)
    {
        printf("List Empty");
    }
    else
    {
        printf("Elements are:\n");
        temp=start;
        while(temp!=NULL)
        {
            printf("%d\t",temp->value);
            temp=temp->next;
        }
    }
}

void delete_beg()
{
    node1* temp;
    if(start==NULL)
    {
    printf("List empty");
    }
    else if(start->next==NULL)
    {
        printf("Node deleted is %d ",start->value);
        start=NULL;
        free(start);
    }
    else
    {
        temp=start;
        start=start->next;
        printf("Node deleted is %d",temp->value);
        temp->next->prev=NULL;
        free(temp);

    }
}
void delete_in_btw()
{
    int c=1,f=0;
    node1* temp,*nptr;
    if(start==NULL)
    {
        printf("List empty\n");
    }
    else
    {
    printf("Enter position of the node to be deleted : ");
    scanf("%d",&pos);
    temp=start;
    nptr=start;
    if(pos==1)
    {
        if(start->next==NULL)
        {
        printf("Node deleted is %d ",start->value);
        start=NULL;
        free(start);
        f=1;
        }
        else
        {
        temp=start;
        start=start->next;
        printf("Node deleted is %d",temp->value);
        temp->next->prev=NULL;
        free(temp);
        f=1;

        }
    }
    else
    {
        while(temp!=NULL)
        {
            if(c==pos)
            {
                nptr->next=temp->next;
                printf("\nElement deleted : %d",temp->value);
                temp->next->prev=nptr;
                free(temp);
                f=1;
            }
            nptr=temp;
            temp=temp->next;
            c++;
        }
    }
    if(f==0)
    {
    printf("Invalid position\n");
    }
    }
}
void delete_end()
{
    node1* temp,*ptr;
    int c=1;
    if(start==NULL)
    {
        printf("\nEmpty List");
    }
    else
    {
    temp=start;
    while(temp->next!=NULL)
    {
        ptr=temp;
        temp=temp->next;
        c++;
    }
    printf("\nElement Deleted : %d",temp->value);
    ptr->next=NULL;
    free(temp);
    if (c==1)
    start=NULL;
    }
}
