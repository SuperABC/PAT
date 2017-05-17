#include<stdio.h>
#include<math.h>
void py(int n);
int power(int x, int y);
int main() {
	int i = 0,j,sum = 0,digit = 0,temp;
	char num[100] = { 0 };
	while ((num[i] = getchar()) >= '0'&&num[i] <= '9')i++;
	for (j = 0; j < i; j++) {
		sum += num[j]-'0';
	}
	temp = sum;
	while (temp) {
		temp /= 10;
		digit++;
	}
	digit--;
	py(sum / power(10, digit));
	sum -= sum / power(10, digit)*power(10, digit);
	digit--;
	while (digit+1) {
		printf(" ");
		py(sum / power(10, digit));
		sum -= sum / power(10, digit)*power(10, digit);
		digit--;
	}
	getchar();
	getchar();
	return 0;
}
void py(int n) {
	switch (n) {
	case 0:
		printf("ling");
		break;
	case 1:
		printf("yi");
		break;
	case 2:
		printf("er");
		break;
	case 3:
		printf("san");
		break;
	case 4:
		printf("si");
		break;
	case 5:
		printf("wu");
		break;
	case 6:
		printf("liu");
		break;
	case 7:
		printf("qi");
		break;
	case 8:
		printf("ba");
		break;
	case 9:
		printf("jiu");
		break;
	}
}
int power(int x, int y) {
	if (y)return pow(x, y);
	else return 1;
}