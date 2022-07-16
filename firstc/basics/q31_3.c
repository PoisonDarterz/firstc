#include <stdio.h>

double getheight() {
	double height;
	printf("Enter height: ");
	scanf_s("%lf", &height);
	return height;
}

double getwidth() {
	double width;
	printf("Enter width: ");
	scanf_s("%lf", &width);
	return width;
}

double getlength() {
	double length;
	printf("Enter length: ");
	scanf_s("%lf", &length);
	return length;
}

int q31_3() { //main
	double height = getheight();
	double width = getwidth();
	double length = getlength();
	double volume = height * width * length;
	printf("Volume: %.2lf\n", volume);
	
	return 0;
}