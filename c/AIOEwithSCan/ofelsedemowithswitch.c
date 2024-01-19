#include<stdio.h>
int ifelsewithswitch()
{
    int a;
    printf("enter the number 2 or 3\t");
    scanf("%d",&a);
    if (a==2)
    {
        int a1, b1,op;
        printf("Enter the value for a1\t");
        scanf("%d",&a1);

       printf("Enter the value for b1\t");
       scanf("%d",&b1);
       printf("Select the Operator");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            printf("you are selected addition\n");
            printf("added value of a1 and b1 is  %d\n",a1+b1);
            break;
        case 2:
            printf("you are selected Subtraction\n");
            printf("Subtracted value of a1 and b1 is  %d\n",a1-b1);
            break;

        case 3:
            printf("you are selected Multiplication\n");
            printf("Multiplied value of a1 and b1 is  %d\n",a1*b1);
            break;

        default:
            break;
        }
        

    }
    else{

        int a1, b1,c1,op;
        printf("Enter the value for a1\t");
        scanf("%d",&a1);

       printf("Enter the value for b1\t");
       scanf("%d",&b1);

       printf("Enter the value for c1\t");
       scanf("%d",&c1);
       printf("Select the Operator");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            printf("you are selected addition\n");
            printf("added value of a1 b1 c1 is  %d\n",a1+b1+c1);
            break;
        case 2:
            printf("you are selected Subtraction\n");
            printf("Subtracted value of a1 b1 c1 is  %d\n",a1-b1-c1);
            break;

        case 3:
            printf("you are selected Multiplication\n");
            printf("Multiplied value of a1 b1 c1 is  %d\n",a1*b1*c1);
            break;

        default:
            break;
        }

    }
    
    return 0;
}
