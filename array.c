#include<stdio.h>
int main()
{
    int ar[20],n,i,ch;
    void insert(int ar[],int n);
    printf("enter the size of array :");
    scanf(" %d",&n);
    printf("enter the array elements :");
    for(i=0;i<n;i++)
    {
        scanf(" %d",&ar[i]);
    }
    printf("menu:\n 1.insert \n 2.delete \n 3.display \n 4.search");
    printf("\n enter the choice:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:insert(ar,n);
          break;
      default:
      printf("wrong choice");
  }
  }
  
  void insert(int ar[],int n)
  {
    int pos,e,i;
    printf("enter the position :");
    scanf(" %d",&pos);
    printf("enter the element to be inserted :");
    scanf(" %d",&e);
    for(i=n-1;i>=pos-1;i--)
    {
        ar[i+1]=ar[i];
        
    }
    ar[pos-1]=e;
    n=n+1;
    
   printf("array after insertion :");
    for(i=0;i<n;i++)
    {
        printf(" %d",ar[i]);
    }
}
 
 
