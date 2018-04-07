#include<stdio.h>
#include<conio.h>
int findavg(int marks[]);
int main()
{
  int avg,marks[10],i,n=5;
  clrscr();
  for(i=0;i<n;i++)
  {
   scanf("%d",&marks[i]);
  }
  avg=findavg(marks);
  printf("average=%d",avg);
  getch();
  return 0;
}
int findavg(int marks[])
{
  int i,avg,n=5,sum=0;
  for(i=0;i<n;i++)
  {
    sum=sum+marks[i];
  }
  avg=sum/n;
  return avg;
}