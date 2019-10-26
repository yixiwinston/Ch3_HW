#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//題目斷在要求出盒內塔有64個圓環時要怎麼移
//推測應該是 輸入幾個環，最少移幾次才能全部移完

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