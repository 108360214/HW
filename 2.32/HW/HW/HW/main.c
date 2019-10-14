#include<stdio.h>
#include<stdlib.h>
int main() {
	int height_cm = 0, body_weight = 0;
	float height_m = 0,BMI = 0, step = 0;
	printf("Enter your height and body weight : ");
	scanf_s("%d%d", &height_cm, &body_weight);
	height_m = height_cm*0.01;
	step = height_m*height_m;
	BMI = body_weight / step;
	printf("your BMI is %.2f\n", BMI);




	system("pause");
	return 0;
}