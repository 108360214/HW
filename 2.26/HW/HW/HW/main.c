#include<stdio.h>
#include<stdlib.h>

int main() {

	int num1 = 0, num2 = 0;
	printf("Enter the 2 number : \n");
	scanf_s("%d%d", &num1, &num2);
	if (num1 > num2) {
		printf("%d is a multiple of the %d\n", num1, num2);
	}
	else {
		printf("%d is a multiple of the %d\n", num2, num1);
	}


	system("pause");
	return 0;
}