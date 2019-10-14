#include<stdio.h>
#include<stdlib.h>

int main(){

	int a = 0, b = 0, c = 0, d = 0, e = 0;
	printf("一整天的總里程數? : ");
	scanf_s("%d", &a);
	printf("汽油一公升/加侖多少錢? : ");
	scanf_s("%d", &b);
	printf("平均一公升/加侖能行駛多少公里? : ");
	scanf_s("%d", &c);
	printf("一天的停車費? : ");
	scanf_s("%d", &d);
	printf("一天的通行費 (過路費)? : ");
	scanf_s("%d", &e);
	printf("你一天在汽車的花費為 : %d\n", a / b*c + d + e);



		system("pause");
	return 0;
}
