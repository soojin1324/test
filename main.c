#include<stdio.h>
int main()
{
	char name[10];
	int age;
	
	printf("����� �̸��� �Է��ϼ��� : ");
	scanf("%s", name);
	
	printf("����� ���̸� �Է��ϼ��� : ");
	scanf("%d", &age);
	
	printf("�ݰ����ϴ� %s��!\n����� %d�� �̽ñ���!", name,age);
}
