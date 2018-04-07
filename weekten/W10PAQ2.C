#include<stdio.h>
#include<conio.h>
void displayarray(int arr[3][3]);
int main()
{
 int arr[3][3],i,j;
 clrscr();

 for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
     scanf("%d",&arr[i][j]);
   }
 }
 displayarray(arr);
 getch();
 return 0;
}
void displayarray(int arr[3][3])
{
  int i,j;
  for(i=0;i<3;i++)
  {
    printf("\n");
    for(j=0;j<3;j++)
    {
      printf("%d",arr[i][j]);
      printf(" ");
    }
  }
}