#include<iostream>
#include<stdlib.h>
using namespace std;


int main()
{
	const int H = 3, W = 3;
	int arr2[H][W];
	int example[H][W] = {
		{3,4,5},
		{9,7,6},
		{18,31,8}
	};
	
	int arr[H * W * 2] = { 9,7,6, 3,4,5, 18,31,8, 4,7,31, 5,6,8, 3,9,18 };

	for (int i = 0; i < H * W; i += W)
		for (int j = H * W; j < H * W * 2; ++j)
		{
			if (arr[i] == arr[j]) 
			{
				int s = (j - H * W) % H; //определяет строку
				for (int z = 0; z < W; ++z) 
					arr2[s][z] = arr[z + i]; //заполняет строку
			}
		}

	for (int i = 0; i < H; ++i)
	{
		for (int j = 0; j < W; ++j)
			cout << arr2[i][j] << "\t";
		cout << endl;
	}
	
	
}