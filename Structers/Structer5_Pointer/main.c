#include <stdio.h>
#include <stdlib.h>
struct student{
char name [10];
int id;

};

int main(void)
{
   struct student std;
   struct student *ptr;
   ptr=&std;
   scanf("%s",&ptr->name);
   scanf("%d",&ptr->id);
   printf("Name: %s, \t Id= %d",std.name, std.id);
   printf("\n Name: %s, \t Id= %d",ptr->name, ptr->id);
   return 0;
}
