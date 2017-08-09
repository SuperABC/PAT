#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int up(int n);
int down(int n);
int main() {
	int four, u, d;
	scanf("%d", &four);
	if (four % 1111 == 0)printf("%d - %d = 0000\n", four, four);
	else if (four == 6174)printf("7641 - 1467 = 6174\n");
	else {
		while (four != 6174) {
			u = up(four);
			d = down(four);
			if (u >= 1000 && d >= 1000&&d - u >= 1000)printf("%d - %d = %d\n", d, u, d - u);
			else if (d >= 1000 && u >= 1000&& d - u >= 100)printf("%d - %d = 0%d\n", d, u, d - u);
			else if (d >= 100 && u >= 1000 && d - u >= 1000)printf("0%d - %d = %d\n", d, u, d - u);
			else if (d >= 100 && u >= 1000 && d - u >= 100)printf("0%d - %d = 0%d\n", d, u, d - u);
			else if (d >= 10 && u >= 1000 && d - u >= 1000)printf("00%d - %d = %d\n", d, u, d - u);
			else if (d >= 10 && u >= 1000 && d - u >= 100)printf("00%d - %d = 0%d\n", d, u, d - u);
			else if (d >= 1 && u >= 1000 && d - u >= 1000)printf("000%d - %d = %d\n", d, u, d - u);
			else if (d >= 1 && u >= 1000 && d - u >= 100)printf("000%d - %d = 0%d\n", d, u, d - u);
			else if (d >= 1000 && u >= 100 && d - u >= 1000)printf("%d - 0%d = %d\n", d, u, d - u);
			else if (d >= 1000 && u >= 100 && d - u >= 100)printf("%d - 0%d = 0%d\n", d, u, d - u);
			else if (d >= 100 && u >= 100 && d - u >= 1000)printf("0%d - 0%d = %d\n", d, u, d - u);
			else if (d >= 100 && u >= 100 && d - u >= 100)printf("0%d - 0%d = 0%d\n", d, u, d - u);
			else if (d >= 10 && u >= 100 && d - u >= 1000)printf("00%d - 0%d = %d\n", d, u, d - u);
			else if (d >= 10 && u >= 100 && d - u >= 100)printf("00%d - 0%d = 0%d\n", d, u, d - u);
			else if (d >= 1 && u >= 100 && d - u >= 1000)printf("000%d - 0%d = %d\n", d, u, d - u);
			else if (d >= 1 && u >= 100 && d - u >= 100)printf("000%d - 0%d = 0%d\n", d, u, d - u);
			else if (d >= 1000 && u >= 10 && d - u >= 1000)printf("%d - 00%d = %d\n", d, u, d - u);
			else if (d >= 1000 && u >= 10 && d - u >= 100)printf("%d - 00%d = 0%d\n", d, u, d - u);
			else if (d >= 100 && u >= 10 && d - u >= 1000)printf("0%d - 00%d = %d\n", d, u, d - u);
			else if (d >= 100 && u >= 10 && d - u >= 100)printf("0%d - 00%d = 0%d\n", d, u, d - u);
			else if (d >= 10 && u >= 10 && d - u >= 1000)printf("00%d - 00%d = %d\n", d, u, d - u);
			else if (d >= 10 && u >= 10 && d - u >= 100)printf("00%d - 00%d = 0%d\n", d, u, d - u);
			else if (d >= 1 && u >= 10 && d - u >= 1000)printf("000%d - 00%d = %d\n", d, u, d - u);
			else if (d >= 1 && u >= 10 && d - u >= 100)printf("000%d - 00%d = 0%d\n", d, u, d - u);
			else if (d >= 1000 && u >= 1 && d - u >= 1000)printf("%d - 000%d = %d\n", d, u, d - u);
			else if (d >= 1000 && u >= 1 && d - u >= 100)printf("%d - 000%d = 0%d\n", d, u, d - u);
			else if (d >= 100 && u >= 1 && d - u >= 1000)printf("0%d - 000%d = %d\n", d, u, d - u);
			else if (d >= 100 && u >= 1 && d - u >= 100)printf("0%d - 000%d = 0%d\n", d, u, d - u);
			else if (d >= 10 && u >= 1 && d - u >= 1000)printf("00%d - 000%d = %d\n", d, u, d - u);
			else if (d >= 10 && u >= 1 && d - u >= 100)printf("00%d - 000%d = 0%d\n", d, u, d - u);
			else if (d >= 1 && u >= 1 && d - u >= 1000)printf("000%d - 000%d = %d\n", d, u, d - u);
			else if (d >= 1 && u >= 1 && d - u >= 100)printf("000%d - 000%d = 0%d\n", d, u, d - u);
			four = d - u;
		}
	}
	getchar();
	getchar();
	return 0;
}
int up(int n) {
	int d1, d2, d3, d4;
	d1 = n / 1000;
	d2 = n % 1000 / 100;
	d3 = n % 100 / 10;
	d4 = n % 10;
	if (d1 > d2)d1 ^= d2^=d1 ^= d2;
	if (d2 > d3)d2 ^= d3 ^= d2 ^= d3;
	if (d3 > d4)d3 ^= d4 ^= d3 ^= d4;
	if (d1 > d2)d1 ^= d2 ^= d1 ^= d2;
	if (d2 > d3)d2 ^= d3 ^= d2 ^= d3;
	if (d1 > d2)d1 ^= d2 ^= d1 ^= d2;
	return 1000 * d1 + 100 * d2 + 10 * d3 + d4;
}
int down(int n) {
	int d1, d2, d3, d4;
	n = up(n);
	d1 = n / 1000;
	d2 = n % 1000 / 100;
	d3 = n % 100 / 10;
	d4 = n % 10;
	return 1000 * d4 + 100 * d3+ 10 * d2 + d1;
}

