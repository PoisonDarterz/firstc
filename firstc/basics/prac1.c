#include <stdio.h>

double findinterest(int ln, double rt, int yr) {
	double inter = ln * (rt / 100) * yr;
	return inter;
}

double findmonthly(double ttl, int yr) {
	double mon = ttl / (yr * 12);
	return mon;
}

int prac1() { //main
	// obtain inputs
	printf("\n-----------------------KOK LANAS BANK-------------------------\n");
	printf("***********************Loan Calculator************************\n");
	printf("Amount of Loan: ");
	int loan;
	scanf_s("%d", &loan);
	printf("Annual Interest Rate: ");
	double rate;
	scanf_s("%lf", &rate);
	printf("Loan Period in Years: ");
	int period;
	scanf_s("%d", &period);

	//calculations
	double interest = findinterest(loan, rate, period);
	double total = loan + interest;
	double monthly = findmonthly(total, period);

	//final output
	printf("\n---------------------Monthly Payment--------------------------\n");
	printf("             Monthly payment is RM %.2lf\n", monthly);
	printf("\n------------------Total Amount Interest-----------------------\n");
	printf("          Total interest to pay is RM %.2lf\n", interest);
	printf("\n**************************************************************\n");
	return 0;
}