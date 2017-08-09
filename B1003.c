#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int judge(char* str);
int main() {
	int i,t;
	char* s[10];
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		s[i] = malloc(100 * sizeof(char));
	}
	for (i = 0; i < t; i++) {
		scanf("%s", s[i]);
	}
	for (i = 0; i < t; i++) {
		judge(s[i]) ? printf("YES\n") : printf("NO\n");
	}
	getchar();
	getchar();
	return 0;
}
int judge(char * str) {
	char*pA = str, *pB = str + strlen(str) - 1;
	char *pm;
	int lena, lenb, mc;
	while(*pA!='P'){
		if (*pA != 'A')return 0;
		pA++;
	}
	while (*pB != 'T') {
		if (*pB != 'A')return 0;
		pB--;
	}
	for (pm = pA + 1; pm < pB; pm++) {
		if (*pm != 'A')return 0;
	}
	lena = pA - str;
	lenb = str + strlen(str) - 1- pB;
	mc = (pB - 1) - pA - 1;
	return ((lenb - lena) == mc*lena) && mc >= 0;
}
