#include<stdio.h>
int main() {
	int times = 0;
	int input;
	scanf_s("%d", &input);
	while (input != 1) {
		if (input & 1) {
			input = 3 * input + 1;
			input = input / 2;
		}
		else {
			input = input / 2;
		}
		times++;
	}
	printf("%d", times);
	getchar();
	getchar();
	return 0;
}