#include <stdio.h>
int main()
{
        int choice, id, ADD, SUB, M, D, A, B;
        printf("---CALCULATOR ---\n");
        printf("1.ADDTION!\n");
        printf("2.SUBTRACTION!\n");
        printf("3.MULTIPLICATION!\n");
        printf("4.DIVISON!\n");
        printf("enter the choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
                printf("enter the vales for A and B");
                scanf("%d%d", &A, &B);
                ADD = A + B;
                printf("ADDITION IS:%d", ADD);
                break;
        case 2:
                printf("enter the vales for A and B");
                scanf("%d%d", &A, &B);
                SUB = A - B;
                printf("SUBTRACTION IS:%d", SUB);
                break;
        case 3:
                printf("enter the vales for A and B");
                scanf("%d%d", &A, &B);
                M = A * B;
                printf("MULTIPLICATION IS:%d",M);
                break;
        case 4:
                printf("enter the vales for A and B");
                scanf("%d%d", &A, &B);
                D = A / B;
                printf("DIVISION IS:%d",D);
                break;
        default:
                printf("AUKATH MA RAHO!!!");

                break;
        }
        return 0;
}
