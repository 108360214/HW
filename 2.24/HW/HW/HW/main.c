#include<stdio.h>
#include<stdlib.h>

int main() {

	int num = 0, logic = 0;
	printf("Enter a number : ");
	scanf_s("%d", &num);
	logic = num % 2;
	if (logic == 0) {
		printf("Odd (°¸¼Æ)");
	}
	if(logic != 0) {
		printf("Even (°ò¼Æ)");
	}
	system("pause");
	return 0;
}