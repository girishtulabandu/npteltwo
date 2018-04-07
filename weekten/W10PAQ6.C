#include<stdio.h>
#include<conio.h>
void tranpose();
void getmatrix();
int check();
int i,j,m,n;
int matrix[3][3],transpose[3][3];
int main()
{
 int x;
 clrscr();
 scanf("%d",&m);
 scanf("%d",&n);
 getmatrix();
 tranpose();
 x=check();
 if(x==0)
 {
  printf("the entered matrix is a skew symmetric matrix");
 }
 else
 {
   printf("The entered matrix is not a skew symmetric matrix");
 }
 getch();
 return 0;
}
void getmatrix()
{
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
    scanf("%d",&matrix[i][j]);
   }
  }
}
void tranpose()
{
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      transpose[j][i]=matrix[i][j];
    }
  }
}

int check()
{
  int y;
  for(i=0;i<m;i++)
  {
   for(j=0;j<m;j++)
   {
    if(transpose[i][j]==-matrix[i][j])
    {
     y=0;
    }
    else
    {
     y++;
    }
   }
  }
  if(y==0)
  {
   return 0;
  }
  else
  {
    return 1;
  }

}