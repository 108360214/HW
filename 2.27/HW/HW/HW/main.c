#include<stdio.h>
#include<stdlib.h>

int main() {
	int p = 0;
	
	for (int i = 0; i <= 5; i++) {
		for (int j = 5; j >= i; j--) {
			printf(" ");
		}
		for (int k = 0; k <= p; k++) {
			printf("*");
		}
		p+=2;
		printf("\n");
		
	}
	
	
	
	system("pause");
	return 0;
}