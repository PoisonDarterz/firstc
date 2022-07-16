#include <stdio.h>

int q31_2() { //main
	printf("Enter price: ");
	double price;
	scanf_s("%lf", &price);
	printf("Enter discount rate: ");
	double rate;
	scanf_s("%lf", &rate);

	double fprice = price * ((100-rate) / 100);
	printf("Final price: %.2lf\n", fprice);
	return 0;
}