#include "f0700.h"
#include <stdio.h>

int main() {
	char str[20];

	printf("Hello world!\n");
	
	int a1 = 64;
	int a2[1408];

	for (int i = 0; i < 1408; ++i) {
		a2[i] = i - 704;
	}

	int a3 = 2;
	int a4[116] = { 0 };

	int result = 0;

	result = f0700(a1, a2, a3, a4);

	printf("The result is %d\n", result);
	gets(str);

	return 0;
}