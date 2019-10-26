#include<stdio.h>
#include<stdlib.h>

int power(int x,int y);

int main() {

	int b=1, e=1;
	while (1) {
		
		printf("Enter the power(Base,exponent)\n");

		printf("Base = ");
		scanf_s("%d", &b);

		if (b == 0)
			break;

		printf("Exponent = ");
		scanf_s("%d", &e);

		printf("%d\n\n", power(b, e));

	}
	system("pause");
	return 0;

}

int power(int x,int y) {

	int total = 0;

	if (y >= 1) {
		total = x * power(x,y - 1);
		return total;
		}
	else {
		return 1;
	}
}
/*

*/