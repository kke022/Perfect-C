// file: tworealop.c

#define _CRT_SECURE_NO_WARNINGS //	scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	printf("(3>4) �����: %d\n", (3 > 4));
	printf("(3<4.0) �����: %d\n", (3 < 4.0));
	printf("('a' <= 'b' ) �����: %d\n", ('a' <= 'b'));
	printf("('Z' <='a') �����: %d\n", ('Z' <= 'a'));
	printf("(4.27 >= 4.35) �����: %d\n", (4.27 >= 4.35));
	printf("(4.0F == 4.0) �����: %d\n", (4.0F == 4.0));

	return 0;
}