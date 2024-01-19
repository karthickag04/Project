#include<stdio.h>
#include "ofelsedemowithswitch.c"
#include "sample.c"
#include "firstvscodedemo.c"
int ifelsewithswitch();
int ifelsewithswitch();
int printhellow();
int welcomeMesge();

int openfile1();
int main()
 {
//     printhellow();
//      welcomeMesge();
//     ifelsewithswitch();
    openfile1();

    return 0;
}

int openfile1()
{
    FILE* ptr;
    char ch;
 
    // Opening file in reading mode
    ptr = fopen("test.txt", "r");
    
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
        // Checking if character is not EOF.
        // If it is EOF stop reading.
    } while (ch != EOF);
}
