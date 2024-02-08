#include <stdio.h>
#include <stdlib.h>

int pointerdemo(){
 int a=10, b=20;
    printf("value of a      : %d \t\n", a);
    printf("Address of a    : %d \n", &a);
    printf("-----------\n");
    printf("value of b      : %d \t\n", b);
    printf("address of B    : %d \n", &b);
    printf("-----------\n");

    int *p=&a;
    printf("value of p                          : %d \t\n", p);
    printf("address of p                        : %d \t\n", &p);
    printf("value stored in the address of p    : %d \t\n", *p);
    printf("-----------\n");

    int **q=&p;
    printf("value of q                                              : %d \t\n", q);
    printf("address of q                                            : %d \t\n", &q);
    printf("value stored in the address of q to the address of p    : %d \t\n", **q);

    int ***r=&q;
    printf("value of r                                                                  : %d \t\n", r);
    printf("address of r                                                                : %d \t\n", &r);
    printf("value stored in the address of r to the address of q in the address of p    : %d \t\n", ***r);

    void *s=&a;
    printf("value of s                                                                  : %d \t\n", s);
    printf("address of s                                                                : %d \t\n", &s);
    printf("value stored  in the address of s in the address of r to the address of q in the address of p    : %d \t\n", *(int*)s);

}
int main(void)
{


    // declare variables
    int a=10;
    float b;
    char c;
    char cs[10]="karthick";

    //Declare and Initialize pointers
    int *ptr_a = &a;
    float *ptr_b = &b;
    char *ptr_c = &c;
    char *ptr_cs = &cs;
    char **ptr_css = &ptr_cs;

    //Printing address by using pointers
    printf("Address of a: %d\n",  *ptr_a);
    printf("Address of b: %p\n",   ptr_b);
    printf("Address of c: %p\n",   ptr_c);
    printf("Address of cs: %s\n",  ptr_cs);
    printf("Address of cs: %s\n", *ptr_css);


    return 0;

}
