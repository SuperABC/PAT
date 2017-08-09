#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, i;
	double a[10], b[10], c[10];
	int ai[10], bi[10], ci[10];
	int ap, bp, cp;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d%d", ai + i, bi + i, ci + i);
	}
	for (i = 0; i < n; i++) {
		a[i] = ai[i];
		b[i] = bi[i];
		c[i] = ci[i];
	}
	for (i = 0; i < n; i++) {
		if (a[i]>2147483647)ap = 1;
		if (a[i]>2147483647)bp = 1;
		if (a[i]>2147483647)cp = 1;
		if (a[i]-ap + b[i] - bp - cp >c[i] - cp - ap -bp)printf("Case #%d: true\n", i+1);
		else printf("Case #%d: false\n", i+1);
	}
	getchar();
	getchar();
	return 0;
}