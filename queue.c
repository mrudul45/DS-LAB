#include<stdio.h>
#include<stdlib.h>
void enqueue(int val);
void dequeue();
void display();
void peek();
int queue[50],front=-1,rear=-1,ch;
void main()
{
int val;
char c;
do
    {
      printf("\n____ QUEUE OPERATION:____\n");
      printf("\n 1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Peek\n 5.Exit\n");
      printf("Enter your choice:");
      scanf("%d",&ch);
      
      switch(ch)
         { 
           case 1: printf("Enter the element to insert:");
                   scanf("%d",&val);
                   enqueue(val);
                   break;
           case 2: dequeue();
                   break;
           case 3: display();
                   break;
           case 4: peek();
                   break;
           case 5:exit(0);        
           default:printf("Wrong selection!!");
         }
     printf("\n do you want to continue ? (y,n)");
      scanf("%s",&c);
     }
    while(c=='y');
  }        
    void enqueue(int val)
     {
       if(rear!=50)
       {
               front=0;
                rear++;
                queue[rear]=val;
                printf("Insertion successfull!!\n");
       }
        else
           printf("Queue is full! Imsertion not possible!");
      
      }
    void dequeue()
      {
        if(front==rear)
         printf("Queue is empty.Deletion is not possible.!\n");
        else
          {
            printf("Deleted:%d",queue[front]);
            front++;
             if(front==rear)
               front=rear=-1;
           }
       }
     void display()
       {
         if(rear==-1)
          printf("Queue is empty!!");
         else
          {
           int i;
          printf("\n Queue elements are:\n");
          for(i=front;i<=rear;i++)
           printf("\t%d",queue[i]);
          }
        } 
     void peek()
        {
           printf("\n The front element of queue is:%d",queue[front]);
         }                                   
