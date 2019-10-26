#include<stdio.h>
#include<stdlib.h>

char L[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char M[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int main() {

	char in;

	printf("\nPlease enter an alphabet('!' to end):");

	while (scanf_s(" %c", &in) != EOF) {

		if (in == '!')
			break;

		for (int i = 0; i < 26; i++) {

			if (in == L[i]) {
				printf("The changed word is %c\n\n", M[i]);
			}

			else if (in == M[i]) {
				printf("The changed word is %c\n\n", L[i]);
			}


		}
		printf("\nPlease enter an alphabet('!' to end):");

	}
	system("pause");
	return 0;

}