#include<stdio.h>
#include<stdlib.h>



int main() {

	int a = 1, b = 1;
	while (a != -1) {

		printf("Enter two integers(-1 to end)\n");

		printf("A = ");
		scanf_s("%d", &a);

		if (a == -1)
			break;

		printf("B = ");
		scanf_s("%d", &b);

		for (int i = 1; i >= 0; i++) {

			if (i % a == 0 && i % b == 0) {

				printf("LCM of the two integers is %d\n\n", i);
				break;



			}

		}
	}

	system("pause");
	return 0;

}