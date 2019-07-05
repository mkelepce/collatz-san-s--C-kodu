#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	unsigned long long n;
	printf("bir tamsayi girin: ");
	scanf("%llu", &n);
	for (;;) {
		printf("%llu ", n);
		if (n == 1)
			break;
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
	}
printf("\n");
}
