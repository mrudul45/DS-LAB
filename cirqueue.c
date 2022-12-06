#include<stdio.h>
int isEmpty();
int isFull();
void enqueue();
void dequeue();
void display();
int rear=-1;
int front=-1;
int n,i,ch,ele,queue[50];
int main()
{
 char c;
 printf("enter the size of queue :");
 scanf("%d",&n);
 do
   {
    printf("\n_CIRCULAR QUEUE OPERATIONS_\n");
    printf("\n 1.enqueue  \n 2.dequeue \n 3.display \n ");
    scanf("%d",&ch);
     switch(ch)
     {
       case 1: enqueue();
  	     break;
       case 2: dequeue();
  	     break;
       case 3: display();
  	     break;
       case 4: exit(0);
             default:printf("Wrong selection!!");
       }
      printf("\n do you want to continue ? (y,n)");
      scanf("%s",&c);
     }
    while(c=='y');
 } 
  int isfull()
   {
    if((front==rear+1)||(front==0&&rear==n-1)) 
      return 1;
    else
      return 0;
   } 
  int isempty();
   {
     if(front==-1)
       return 1; 
     else
       return 0;
   }
 void enqueue()
  {
  if(isfull())
   printf("\n QUEUE IS FULL");
  else
   {
    if(fromt==-1)
      front=0;
    rear=(rear+1)%n; 
    printf("\n enter the element ");
     scanf("%d",&ele);
    items[rear]=ele;
     printf("\n inserted element is :%d",ele);
    }  
  }
 void dequeue()
  {
   if(isEmpty())    
     printf("Queue is empty");  
   else     
     ele=queue[front];
   if(front==rear)
    {
     front=-1;
     rear=-1;
    }
   else
     front=(front+1)%n;
   printf("Element deleted is %d",ele);
 } 
 void display()
  {
   int i;
     if (isEmpty())
       printf(" \n Empty Queue\n");
     else 
      {
       for (i = front; i != rear; i = (i + 1) % n)
        {
         printf("%d ", queue[i]);
        }
      printf("%d ", queue[i]);
      }
  }    
     
       
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
           
    
