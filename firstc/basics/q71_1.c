#include <stdio.h>

int* getInput(int* nums) {
	for (int i = 0; i < 2; i++) {
		printf("Enter an integer: ");
		scanf_s("%d", &nums[i]);
	}
	return nums;
}

int getSum(int* nums) {
	int sum = 0;
	for (int i = 0; i < 2; i++) {
		sum += nums[i];
	}
	return sum;
}

void output(int sum) {
	printf("The sum of the two integers is: %d\n", sum);
}

int main() {
	int nums[2];
	int* numsPtr = getInput(nums);
	int sum = getSum(numsPtr);
	output(sum);
	return 0;
}