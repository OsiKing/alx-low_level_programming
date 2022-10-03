#include <stdio.h>
/**
 * main - Create a dynamic library that contains
 *        C functions that can be called from Python.
 *
 * Return: Always 0.
 */
int main(void)
{
int first, second, add, subtract, multiply;
float divide;
printf("Enter two integers\n");
scanf("%d%d", &first, &second);
add = first + second;
subtract = first - second;
multiply = first * second;
divide = first / (float)second;
printf("Sum = %d\n", add);
printf("Difference = %d\n", subtract);
printf("Multiplication = %d\n", multiply);
printf("Division = %.2f\n", divide);
return (0);
}
