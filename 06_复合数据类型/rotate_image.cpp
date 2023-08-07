#include<iostream>
using namespace std;


int main()
{
	const int n = 4;
	// 旋转矩阵
	int array[n][n] = {
		{5,1,9,11},
		{2,4,8,10},
		{13,3,6,7},
		{15,14,12,16}
	};

	
	// 1.矩阵转置
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			// 对角线转置
			int temp = array[i][j];
			array[i][j] = array[j][i];
			array[j][i] = temp;
		}
	}

	// 2.前后翻转
	int col = 0;
	while (col < n) {
		int lp = 0, rp = n - 1;
		while (lp < rp)
		{
			int temp = array[col][lp];
			array[col][lp] = array[col][rp];
			array[col][rp] = temp;
			++lp;
			--rp;
		}
		++col;
	}
	


	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}

}