// file: putchar.c

#define _CRT_SECURE_NO_WARNINGS //	scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	char a = '\0';
	puts("���� �ϳ� �Է�: ");
	a = getchar();
	putchar(a); putchar('\n');

	return 0;
}