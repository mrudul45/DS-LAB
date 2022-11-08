#include<stdio.h>
int main()
{
 int i,j,n,ch,a[20];
 void insert(int ar[],int n);
 void display(int ar[],int n);
 printf("enter  size of the array:");
 scanf("%d",&n);
 printf("enter the array elements:");
 for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  printf("menu:\n 1.insert \n 2.delete \n 3.display \n 4.search");
  printf("\n enter the choice:");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:insert(a,n);
          break;
   case 2:display(a,n);
          break;        
   
   default:
   printf("wrong choice");
  }
  }
  void insert(int ar[],int n)
  {
   int ele,loc,i=0;
   printf("element to be inserted:");
   scanf("%d",&ele);
   printf("enter location:");
   scanf("%d",&loc);
   if(i==ar[n]-1)
    printf("cant insert overflow");
   else
   for(i=n;i>=loc-1;i--)
    {
     ar[i]=a[i-1];
    }
   ar[loc-1]=ele;
   n=n+1;
   printf("array after insertion :\n");
   for(i=0;i<n;i++)
    {
     printf("%d ",ar[i]);
    }
 }
 void display(int ar[],int n)
 {
 int i;
 for(i=0;i<n;i++)
         {
          printf("%d ",ar[i]);
           }
           }
 
 
