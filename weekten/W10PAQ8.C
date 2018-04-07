#include<stdio.h>
#include<conio.h>
int fsum();
int main()
{
  int no1,no2,sum;
  clrscr();
  scanf("%d %d",&no1,&no2);
  printf("The sum of the numbers is %d",fsum(&no1,&no2));
  getch();
  return 0;
}

int fsum(int *a,int *b)
{
 int sum=*a+*b;
 return sum;
}
