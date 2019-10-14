#include<stdio.h>
#include<stdlib.h>

int main() {
	int two = 0, three = 0;
	printf("number square cube\n");
	for (int i = 0; i <= 10; i++) {
		two = i*i;
		three = i*i*i;
	printf("%-7d%-7d%d\n", i, two, three);
	}





	system("pause");
	return 0;
}