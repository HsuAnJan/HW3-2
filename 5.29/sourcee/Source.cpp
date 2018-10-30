#include<stdio.h>
#include<stdlib.h>

int gcd(int a, int b);

int main() {
	int a, b, lcm;
	printf("請輸入兩個數:");
	scanf_s("%d%d",&a,&b);
	lcm = a * b / gcd(a, b);
	printf("最小公倍數為%d\n", lcm);
	system("pause");
}
int gcd(int a, int b) {
	int i,c;
	if (a > b) {
		for (i = 1; i <=b ;i++ ) {
			if (a%i == 0 && b%i == 0) {
				c = i;
			}
		}
	}
	else if (a < b) {
		for (i = 1; i <= a; i++) {
			if (a%i == 0 && b%i == 0) {
				c = i;
			}
		}
	}
	return c;
}