#include <stdio.h>

void Hanoi(int count, int start, int mid, int end) {
	if (count == 1)
		printf("%d %d\n", start, end);
	else if(count<=20)
	{
		Hanoi((count - 1), start, end, mid);
		printf("%d %d\n", start, end);
		Hanoi((count - 1), mid, start, end);
	}
}

int main(void) {
	long double sum = 1;
	int num = 0;
	scanf("%d", &num);
	if (num == 1) {
		sum = 1;
	}
	else
		for (int i = 0; i < num; i++) sum *= 2;
	printf("%.0Lf\n", sum-1);
	Hanoi(num, 1, 2, 3);
	return 0;
}