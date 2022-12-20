#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insert_beg();
void insert_end();
void insert_in_btw();
void delete_beg();
void delete_end();
void delete_in_btw();
struct node
{
        int info;
        struct node *next;
};
struct node *start=NULL;
int main()
{
 int ch;
 char c;
 do
 {
     printf("\n_MENU_ \n 1.Create \n 2.Display\n 3.Insert at the begining \n 4.Insert at the end\n 5.Insert in between\n 6.Delete from begining\n 7.Delete from the end\n 8.Delete in between\n");
  scanf("%d",&ch);    
    switch(ch)
     {
           case 1: create();
  	     break;
  	   case 2: display();
  	     break;
  	   case 3: insert_beg();
  	     break;
  	   case 4: insert_end();
  	     break;
  	   case 5: insert_in_btw();
  	     break;
  	   case 6: delete_beg();
  	     break;
  	   case 7: delete_end();
  	     break;
  	   case 8: delete_in_btw();
  	     break; 
  	    
  	         
     }
     printf("\n do you want to continue ? (y,n)");
    scanf("%s",&c);
  }
   while(c=='y');
}
 void create() 
  {
      struct node *temp,*ptr;
      temp=(struct node *)malloc(sizeof(struct node));
         if(temp==NULL)
          {
                printf("\nOut of Memory Space!");
                exit(0);
          }
        printf("\n Enter the value of the node : ");
        scanf("%d",&temp->info);
        temp->next=NULL;
        if(start==NULL)
          {
                start=temp;
          }
        else
          {
                ptr=start;
                while(ptr->next!=NULL)
                  {
                        ptr=ptr->next;
                  }
                ptr->next=temp;
          }
   }
  void display()
    {
	 struct node *ptr;
        if(start==NULL)
          {
                printf("\nList is empty.");
                return;
          }
        else
          {
                ptr=start;
                printf("The List elements are: \n");
                while(ptr!=NULL)
                  {
                        printf("%d\t ",ptr->info );
                        ptr=ptr->next ;
                  }
           }
     }
   void insert_beg()
    {
	 struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
          {
                printf("\nOut of Memory Space!");
                return;
          }
        printf("\nEnter the value to be inserted :" );
        scanf("%d",&temp->info);
        temp->next =NULL;
        if(start==NULL)
          {
                start=temp;
          }
        else
          {
                temp->next=start;
                start=temp;
          }
      } 
   void insert_end() 
     {
	 struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
           {
                printf("\nOut of Memory Space!");
                return;
            }
        printf("\nEnter the data value for the node:" );
        scanf("%d",&temp->info );
        temp->next =NULL;
        if(start==NULL)
          {
                start=temp;
          }
        else
          {
                ptr=start;
                while(ptr->next !=NULL)
                  {
                        ptr=ptr->next ;
                  }
                ptr->next =temp;
          }
      }
    void insert_in_btw()
      {
	 struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
           {
                printf("\nOut of Memory Space!");
                return;
           }
        printf("\nEnter the position for the new node to be inserted:");
        scanf("%d",&pos);
        printf("\nEnter the data value of the node:");
        scanf("%d",&temp->info) ;

        temp->next=NULL;
        if(pos==0)
          {
                temp->next=start;
                start=temp;
          }
        else
          {
                for(i=0,ptr=start;i<pos-1;i++) 
                { 
                ptr=ptr->next;
                        if(ptr==NULL)
                          {
                                printf("\nPosition not found!");
                                return;
                          }
                 }
                temp->next =ptr->next ;
                ptr->next=temp;
          }
      }  
  void delete_beg()
  {
	  struct node *ptr;
        if(start==NULL)
          {
                printf("\nList is Empty: ");
                return;
          }
        else
          {
                ptr=start;
                start=start->next ;
                printf("\nThe deleted element is :%d",ptr->info);
                free(ptr);
          }
  }
void delete_end()
  {
	        struct node *temp,*ptr;
        if(start==NULL)
          {
                printf("\nList is Empty:");
                exit(0);
          }
        else if(start->next ==NULL)
          {
                ptr=start;
                start=NULL;
                printf("\nThe deleted element is:%d",ptr->info);
                free(ptr);
          }
        else
          {
                ptr=start;
                while(ptr->next!=NULL)
                  {
                        temp=ptr;
                        ptr=ptr->next;
                  }
                temp->next=NULL;
                printf("\nThe deleted element is:%d",ptr->info);
                free(ptr);
          }
   }
void delete_in_btw()
  {
	int i,pos;
        struct node *temp,*ptr;
        if(start==NULL)
          {
                printf("\nThe List is Empty.");
                exit(0);
          }
        else
          {                
                printf("\nEnter the position of the node to be deleted:");
                scanf("%d",&pos);
                if(pos==0)
                  {
                        ptr=start;
                        start=start->next ;
                        printf("\nThe deleted element is:%d",ptr->info  );
                        free(ptr);
                  }
                else
                  {
                        ptr=start;
                        for(i=0;i<pos;i++) 
                          { 
                        temp=ptr; ptr=ptr->next ;
                                if(ptr==NULL)
                                  {
                                        printf("\nPosition not Found!");
                                        return;
                                  }
                          }
                        temp->next =ptr->next ;
                        printf("\nThe deleted element is:%d",ptr->info );
                        free(ptr);
                  }
          }
   }

