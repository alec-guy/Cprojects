#include <stdio.h>
#include <stdlib.h>

double celsiusToFahrenheit(double celsius)
{
    return (celsius * 9 / 5) + 32;
}
double fahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}
int main()
{

    // Temperature converter program.
    int choice;
    double celsius, fahrenheit;

    printf("Celsius to Fahrenheit CLI Program\n");
    printf("Choose Celsius or fahrenheit\n");
    printf("1)Celsius To Fahrenheit\n");
    printf("2)Fahrenheit to Celsisus\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter celsius: ");
        scanf("%lf", &celsius);
        fahrenheit = celsiusToFahrenheit(celsius);
        printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
    }
    else if (choice == 2)
    {
        printf("Enter Fahrenheit");
        scanf("%lf", &fahrenheit);
        celsius = fahrenheitToCelsius(fahrenheit);
        printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);
    }
    else
    {
        printf("Neither choice was chosen");
        return 1;
    }
    return 0;
}
