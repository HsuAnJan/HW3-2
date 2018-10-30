#include<stdio.h>
#include<stdlib.h>

int main() {
	char i;
	printf("請輸入一個英文字母:");
	scanf_s("%c", &i);
	i = i + 32;
	printf("%c\n", i);
	system("pause");
}