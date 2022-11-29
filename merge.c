#include<stdio.h>
void sort(int[],int);
void display(int[],int);
void merge(int[],int,int[],int,int[]);
int main()
{
int a[20],b[20],c[20],i,j,m,n;
printf("\n enter the no. of elements in array A :");
scanf("%d",&m);
printf("\n enter the elements of array A :");
for(i=0;i<m;i++)
 {
   scanf("%d",&a[i]);
  }
printf("\n enter the no. of elements in array B :");
scanf("%d",&n);
printf("\n enter the elements of array B :");
for(j=0;j<n;j++)
 {
  scanf("%d",&b[j]);
  }
sort(a,m);
sort(b,n);
printf(" array A is: \n");
display(a,m);
printf(" array B is: \n");
display(b,n);
merge(a,m,b,n,c);
printf(" array after merging:");
display(c,m+n); 
}
 void sort(int a[20],int n)
 {
 int i,j,t;
 for(i=0;i<n-1;i++)
  {
   for(j=i+1;j<n;j++)
    {
     if(a[i]>a[j])
     {
     t=a[i];
     a[i]=a[j];
     a[j]=t;
     }
    }
   }
  }
 void display(int a[20],int n)
  {
  int i;
  for(i=0;i<n;i++)
  {
   printf("%d \n",a[i]);
   }
  }
  void merge(int a[20],int m,int b[20],int n,int c[20])
 { 
  int i=0,j=0,k=0;
  while(i<m&&j<n)
   {
   if(a[i]<b[j])
    {
     c[k]=a[i];
     k++;
     i++;
    }
   else
    {
     c[k]=b[j];
     j++;
     k++;
    }
   }
  while(i<m)
   {
    c[k]=a[i];
    k++;
    i++;
   }
  while(j<n)
   {
    c[k]=b[j];
    k++;
    j++;
   } 
  }    
             

