#include <stdio.h>

int q22_4() { //main
	double array[3];
	double arraysize = sizeof(array) / sizeof(double);

		for (int j = 0; j < 3; j++) {
			printf("Enter a number: ");
			scanf_s("%lf", &array[j]);
		}
		
	double total = 0.0;
	
		for (int i = 0; i < arraysize; i++) {
			total += array[i];
		}

	double avg = total / arraysize;
	printf("The average is %.2lf\n", avg);
	
	return 0;
}