#include<stdio.h>
#include<stdlib.h>

int main(){

	int a = 0, b = 0, c = 0, d = 0, e = 0;
	printf("�@��Ѫ��`���{��? : ");
	scanf_s("%d", &a);
	printf("�T�o�@����/�[�ڦh�ֿ�? : ");
	scanf_s("%d", &b);
	printf("�����@����/�[�گ��p�h�֤���? : ");
	scanf_s("%d", &c);
	printf("�@�Ѫ������O? : ");
	scanf_s("%d", &d);
	printf("�@�Ѫ��q��O (�L���O)? : ");
	scanf_s("%d", &e);
	printf("�A�@�Ѧb�T������O�� : %d\n", a / b*c + d + e);



		system("pause");
	return 0;
}
