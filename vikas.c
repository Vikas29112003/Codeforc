#include<stdio.h>
#include<string.h>
struct employee {
  char name[20];
  int id;
  char address[50];
};
int main()
  {struct employee arr[5];
   
   for(int i=0;i<5;i++)
   {scanf("%s",arr[i].name);
   scanf("%d",&arr[i].id);
   scanf("%s",arr[i].address);
   }
   
   for(int i=0; i<5;i++)
   {printf("%s\n ",arr[i].name);
   printf("%d\n ",arr[i].id);
   printf("%s\n ",arr[i].address);
   }
return 0;
  }