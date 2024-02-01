#include<stdio.h>

int main()
{
   int a=10;
   int *p=&a;
   printf("%d\t",a);
   printf("%d\t",&a);
   printf("%d\t",p);
   printf("%d\t",&p);
   printf("%d\t",*p);
   
   
    return 0;
}
