#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct item {
	char * name;
	char * code;
	int score;
};
struct item stu, max, min;
void sort();
int main() {
	int n, i;
	stu.name = malloc(11 * sizeof(char));
	stu.code = malloc(11 * sizeof(char));
	max.name = malloc(11 * sizeof(char));
	max.code = malloc(11 * sizeof(char));
	min.name = malloc(11 * sizeof(char));
	min.code = malloc(11 * sizeof(char));
	scanf("%d", &n);
	scanf("%s", stu.name);
	scanf("%s", stu.code);
	scanf("%d", &stu.score);
	strcpy(max.name, stu.name);
	strcpy(max.code, stu.code);
	max.score = stu.score;
	strcpy(min.name, stu.name);
	strcpy(min.code, stu.code);
	min.score = stu.score;
	for (i = 0; i < n-1; i++) {
		scanf("%s", stu.name);
		scanf("%s", stu.code);
		scanf("%d", &stu.score);
		sort();
	}
	printf("%s %s\n", max.name, max.code);
	printf("%s %s\n", min.name, min.code);
}

void sort() {
	if (max.score < stu.score) {
		strcpy(max.name, stu.name);
		strcpy(max.code, stu.code);
		max.score = stu.score;
	}
	if (min.score > stu.score) {
		strcpy(min.name, stu.name);
		strcpy(min.code, stu.code);
		min.score = stu.score;
	}
}