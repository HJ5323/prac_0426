#include <iostream>

using namespace std;

int main()
{
	int n3;
	cout << "���ڸ� �Է��ϼ���: ";
	cin >> n3;

	// ���� �迭 ���� & �Ҵ�
	int** arr2 = new int* [n3];

	for (int i = 0; i < n3; i++)
	{
		arr2[i] = new int[n3];
	}

	for (int i = 0; i < n3; i++)
	{
		for (int j = 0; j < n3; j++)
		{
			arr2[i][j] = 0; // ���� �迭 ���
		}
	}

	// ���� �迭 ����(�ݳ�)
	for (int i = 0; i < n3; i++)
	{
		delete[] arr2[i];
	}

	delete[] arr2;
}

int n3 = 5;

int** arr2 = new int* [n3];
// arr2[n3] : { �ּҰ�, �ּҰ�, �ּҰ�, �ּҰ�, �ּҰ� }
// arr2[0] = { ��, ��, ��, ��, �� }
// arr2[1] = { ��, ��, ��, ��, �� }
// ...

// arr2[n3][n3] = {
//		{ ��, ��, ��, ��, �� },
//		{ ��, ��, ��, ��, �� },
//		{ ��, ��, ��, ��, �� },
//		{ ��, ��, ��, ��, �� },
//		{ ��, ��, ��, ��, �� }}