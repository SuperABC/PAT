#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char a[100000], b[100000];
	int n, i, as = 0, aj = 0, ab = 0, bs = 0, bj = 0, bb = 0, ae = 0, be = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("\n%c %c", a + i, b + i);
		if (a[i] == 'C')a[i] = 'S';
		if (b[i] == 'C')b[i] = 'S';
		switch (a[i] - b[i]) {
		case 0:ae++; be++; break;
		case 8:aj++; break;
		case 9:as++; break;
		case 17: bb++; break;
		case -8:bj++; break;
		case -9:bs++; break;
		case -17:ab++; break;
		}
	}
	printf("%d %d %d\n", ab + aj + as, ae, bb + bj + bs);
	printf("%d %d %d\n", bb + bj + bs, ae, ab + aj + as);
	if (ab >= as&&ab >= aj)printf("%c", 'B');
	else if (as >= aj)printf("%c", 'C');
	else printf("%c", 'J');
	printf(" ");
	if (bb >= bs&&bb >= bj)printf("%c", 'B');
	else if (bs >= bj)printf("%c", 'C');
	else printf("%c", 'J');
	getchar();
	getchar();
	return 0;
}
