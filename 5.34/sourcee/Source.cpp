#include<stdio.h>
#include<stdlib.h>

int exponent(int a, int b);

int main() {
	int a, b, c;
	printf("�п�J�@�ƤΦ����:");
	scanf_s("%d%d", &a, &b);
	c = exponent(a, b);
	printf("%d��%d���謰:%d\n", a, b, c);
	system("pause");
}

int exponent(int a, int b) {
	int i,	sol=1;
	for (i = 1; i <= b; i++) {
		sol = sol * a;
	}
	return sol;
}