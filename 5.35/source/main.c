#include<stdio.h>
#include<stdlib.h>



int main() {

	while (1) {

		int c = 0;

		int reg[1000] = { 0,1,-1 };

		printf("��J����ܪ��O�i�ǫ��ƦC������(0 to end): ");
		scanf_s("%d", &c);

		if (c == 0)
			break;


		for (int i = 0; i < c; i++) {
			reg[i + 2] = reg[i + 1] + reg[i];
			//printf("%d %d %d", reg[i + 2], reg[i + 1], reg[i]);
			printf("%d   ", reg[i]);
		}
		printf("\n\n");
	}

	system("pause");
	return 0;

}