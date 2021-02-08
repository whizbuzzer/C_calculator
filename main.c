#include <stdio.h>
#include <stdlib.h>


/* Calculator. Source: https://www.youtube.com/watch?v=KJgsSFOSQv0&t=7808s */
int main()
{
    double num1;
    double num2;
    char op;  // Operation

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operation (+, -, *, / or ^): ");
    scanf(" %c", &op);  // Always put a space before "%c" when getting a "char" from scanf()
    printf("Enter second number: ");
    scanf("%lf", &num2);

    if(op == '+') {
        printf("%f", num1 + num2);
    } else if(op == '-') {
        printf("%f", num1 - num2);
    } else if(op == '*') {
        printf("%f", num1 * num2);
    } else if(op == '/') {
        printf("%f", num1 / num2);
    } else {
        int i = 1;
        double temp = num1;
        while(i++ < num2){
            temp *= num1;
        }
        printf("%f", temp);
    }

    return 0;
}
