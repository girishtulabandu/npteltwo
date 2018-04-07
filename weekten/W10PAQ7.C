#include<stdio.h>
#include<conio.h>
int main()
{
 int num1,num2;
 clrscr();
 scanf("%d %d",&num1,&num2);
 swap(&num1,&num2);
 printf("num1=%d,num2=%d",num1,num2);
 getch();
 return 0;
}
int swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
  return *a,*b;
}