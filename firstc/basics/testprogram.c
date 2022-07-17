#include <stdio.h>

int main() {
	int myNumbers[5] = { 10, 20, 30, 40, 50 };
	int getSize = sizeof(myNumbers);
	int getArrayLength = sizeof(myNumbers) / sizeof(int);
	printf("%d\n", getSize);                                  // prints 20 (int uses 4 bytes)
	printf("%d", getArrayLength);                           // prints 5
}