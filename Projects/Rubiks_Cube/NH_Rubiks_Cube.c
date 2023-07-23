//NOUR HESHAM 

#include <stdio.h>
#include<string.h>
int main()
{
char cube[6][9],key;
int i,count,j;

for(i=0;i<6;i++)
    {
    printf("face[%d]=",i+1);
    gets(cube[i]);
    }

  printf("enter key=");
  scanf("%c",&key);

  for(i=0;i<6;i++)
  {
     count=0;
     for(j=0;j<9;j++)
     {
         if(key==cube[i][j])
              count++;
     }
     printf("face[%d]:%d\n",i+1,count);
  }

return 0;

}
