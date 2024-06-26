#include <stdio.h>

int main_m_array(void) {
	// 다차원 배열 Multidimensional Array
	/*int i; 

	int arr[5];

	int arr2[2][5];

	int arr3[4][2];

	int arr4[3][3][3];*/

	/*int arr[5] = { 1, 2, 3, 4, 5 };
	int arr2[2][5] = { 
		{1,2,3,4,5}, 
		{1, 2, 3, 4, 5}
	};*/
	/*int arr3[4][2] = { 
		{1,2}, 
		{1,2}, 
		{1,2}, 
		{1,2}
	};

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("2차원 배열 (%d, %d)의 값 : %d\n", i, j, arr3[i][j]);
		}
		printf("\n");
	}*/

	int arr4[3][3][3] = { 
		{ 
			{1,2,3}, 
			{4,5,6}, 
			{7,8,9}  
		}, 
		{ 
			{11,12,13},
			{14,15,16},
			{17,18,19}
		}, 
		{ 
			{21,22,23},
			{24,25,26},
			{27,28,29}
		} 
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j< 3; j++){
			for (int k = 0; k < 3; k++) {
				printf("3차원 배열 (%d, %d, %d)의 값 : %d\n", i, j, k, arr4[i][j][k]);
			}
		}
		printf("\n");
	}
	return 0; 
}