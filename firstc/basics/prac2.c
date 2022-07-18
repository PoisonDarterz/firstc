#include <stdio.h>

int main() {
	// get inputs
	printf("-------------------Hashim Hardware-----------------\n");
	printf("\nCustomer number: ");
		int cusno;
	scanf_s("%d", &cusno);
	printf("\nCustomer name: ");
		char cusname[50];
	scanf_s(" %[^\n]s", &cusname, sizeof(cusname));
	printf("\nSales Amount: ");
		double amount;
	scanf_s("%lf", &amount);
	printf("\nTax code (0 or 1 or 2): ");
		int code = 0;
	scanf_s("%d", &code);

	//calculation
	double tax = 0.0;
	double total;

	switch (code) {
		case 0: {
			tax = 0.00;
			break;
		} case 1: {
			tax = amount * 0.03;
			break;
		} case 2: {
			tax = amount * 0.05;
			break;
		}
	}

	total = amount + tax;

	// final output
	printf("\n********************Sales Report*******************\n");
	printf("Customer Number: %d\n", cusno);
	printf("Customer Name: %s\n", cusname);
	printf("Sales Amount: RM %.2lf\n", amount);
	printf("Sales Tax: RM %.2lf\n", tax);
	printf("Total Amount: RM %.2lf\n", total);
	printf("***************************************************\n");
	printf("\nThis report is prepared by: Jonas Chuan.");
	
	return 0;
}