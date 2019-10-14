#include<stdio.h>
#include<stdlib.h>

int main() {
	int firstnum = 0;
	int secondnum = 0;
	int lastnum = 0;

	char first_number, second_number, last_number;

	printf("Enter the first_number , second_number , last_number : ");
	scanf_s("%d%d%d", &firstnum, &secondnum, &lastnum);

	if (firstnum > secondnum) {
		if (secondnum > lastnum) {
			printf("first number : %d > second number : %d > last number : %d\n", firstnum, secondnum, lastnum);
		}
	}
	if (lastnum > secondnum) {
		if (secondnum > firstnum) {
			printf("last number : %d > second number : %d > first number : %d\n", lastnum, secondnum, firstnum);
		}
	}
	if (firstnum > lastnum) {
		if (lastnum > secondnum) {
			printf("first number : %d > last number : %d > second number : %d\n", firstnum, lastnum,secondnum );
		}
	}
	if (lastnum > firstnum) {
		if (firstnum > secondnum) {
			printf("last number : %d > first number : %d > second number : %d\n", lastnum, firstnum, secondnum);
		}
	}
	if (secondnum > firstnum) {
		if (firstnum > lastnum) {
			printf("second number : %d > first number : %d > last number : %d\n", secondnum, firstnum, lastnum);
		}
	}
	if (secondnum > lastnum) {
		if (lastnum > firstnum) {
			printf("second number : %d > last number : %d > first number : %d\n", secondnum, lastnum, firstnum);
		}
	}
	//若發生兩數相等
	if (firstnum == secondnum) {
		if (secondnum > lastnum) {
			printf("first number = second number : %d > last number : %d\n",secondnum,lastnum);
		}
		if (lastnum > secondnum) {
			printf("last number : %d > first number = second number : %d\n",lastnum,secondnum);
		}
	}
	if (secondnum == lastnum) {
		if (firstnum > secondnum) {
			printf("first number : %d > second number = last number : %d\n",firstnum,lastnum);
		}
		if (secondnum > firstnum) {
			printf("second number = last number : %d > first number", lastnum, firstnum);
		}
	}
	if (firstnum == lastnum) {
		if (firstnum > secondnum) {
			printf("first number = last number : %d > second number : %d\n",lastnum,secondnum);
		}
		if (secondnum > firstnum) {
			printf("second number : %d > first number = last number : %d\n",secondnum,lastnum);
		}
	}
	if (firstnum == secondnum == lastnum) {
		printf("first number = second number = last number : %d", firstnum);
	}

	system("pause");
	return 0;
}