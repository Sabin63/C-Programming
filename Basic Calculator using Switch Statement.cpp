// Basic Calculator using switch Statement
#include<stdio.h>
int main() 
{
    char x;
    double n1, n2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &x);
    printf("Enter two operands: ");
    scanf("%lf %lf", &n1, &n2);
    switch (x)
	{
    case '+':
        printf("%.1lf + %.1lf = %.1lf", n1, n2, n1 + n2);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", n1, n2, n1 - n2);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", n1, n2, n1 * n2);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", n1, n2, n1 / n2);
        break;
    default:
        printf("Error! operator is not correct");
    }
    return 0;    
    }

