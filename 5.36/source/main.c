#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//�D���_�b�n�D�X������64�Ӷ����ɭn���
//�������ӬO ��J�X�����A�ֲ̤��X���~���������

int main() {

	float circle = 0;

	while (1){

	printf("How many disks are there?(-1 to end)\t");
	scanf_s("%f", &circle);

	if (circle == -1)
		break;

	printf("at least need %.0f times\n\n",pow(2, circle) - 1);		//pow(2,3) = 2 ^ 3 
	
}
	system("pause");
	return 0;

}