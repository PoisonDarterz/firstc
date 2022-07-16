#include <stdio.h>

int q22_2() { //main
	printf("Enter temperature in Celsius: ");
	double celsius;
	scanf_s("%lf", &celsius);
	double fahrenheit = celsius * 9/5 + 32;
	printf("%.2lf Celsius is %.2lf Fahrenheit\n", celsius, fahrenheit);
	return 0;
}