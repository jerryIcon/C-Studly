#include<iostream>
using namespace std;

int main() {
	const int n = 3;
	bool isMagic = true;
	int array[n][n] = {
		{4,9,2},
		{3,5,7},
		{8,1,6}
	};
	
	// ����ÿ�С��С�б�ߵĺ�
	int target = (1 + n * n) * n * n / 2 / n;

	int sumLeft = 0;
	int sumRight = 0;
	for (size_t i = 0; i < n; i++)
	{
		int sumCol = 0;
		int sumRow = 0;
		for (size_t j = 0; j < n; j++)
		{
			sumCol += array[j][i];
			sumRow += array[i][j];
		}

		if (sumCol != target || sumRow != target) {
			isMagic = false;
			break;
		}

		sumLeft += array[i][i];
		sumRight += array[i][n - i - 1];
	}

	if (sumLeft != target || sumRight != target)
	{
		isMagic = false;
	}

	cout << (isMagic == true ? "�ǽ׻÷�" : "���ǽ׻÷�") << endl;
}