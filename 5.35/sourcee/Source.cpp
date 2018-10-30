#include<stdio.h>
#include<stdlib.h>

int frequency(int i);

int main() {
	int c = 0, d = 1, i, a, b;
	printf("請問要出現幾個數字:");
	scanf_s("%d", &a);
	for (i = 0; i < a; i++) {
		if (i == 0) {
			printf("0,");
		}
		else if (i == 1) {
			printf("1,");
		}
		else {
			b = frequency(i);
			printf("%d,", b);
		}
	}
	printf("\n");
	system("pause");
}

int frequency(int i) {
	int s,e,c=0,d=1;
	for (s = 1; s < i; s++) {
		e = c + d;
		c = d;
		d = e;
	}
	return e;
}