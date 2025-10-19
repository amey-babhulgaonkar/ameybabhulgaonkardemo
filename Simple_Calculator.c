#include <stdio.h>
int main()
{
    float num1, num2;
    char Operators;
    printf("Welcome To A Simple(very simple) calculator\nTell Me The Numbers You Want To Work With\nEnter First Number:-");
    scanf("%f", &num1);
    printf("Enter the Second Number:-");
    scanf("%f", &num2);
    printf("The Operation You Want To Perform?");
    scanf(" %c", &Operators);
    if (Operators == '+')
    {
        printf("The Sum Of These Numbers Is:-%f", num1 + num2);
    }
    else if (Operators == '-')
    {
        printf("The Difference Of These Numbers Is:-%f", num1 - num2);
    }
    else if (Operators == '*')
    {
        printf("The Multiplication Of These Numbers Is:-%f", num1 * num2);
    }
    else if (Operators == '/')
    {
        if (num2 == 0)
            printf("\nDivision By 0 Is not Valid");
        else
        {
            printf("The Division if These Numbers Is:-%f", num1 / num2);
        }
    }
    else
    {
        printf("Invalid Operation");
    }
    return 0;
}