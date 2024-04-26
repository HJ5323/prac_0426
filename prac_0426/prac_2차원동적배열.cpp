#include <iostream>

using namespace std;

// 1. ����ڷκ��� x, y 2���� �ڿ����� �Է� �ޱ�
// 2. ���� ����ڰ� x�� y�� 0�̳� ������ �Է��Ѵٸ� ���� �޼����� ��� �� �ٽ� �Է� �ޱ�
// 3. x*y�� ũ�⸦ ���� ������ ���� �迭 arr�� ����
// 4. arr[0][0]���� arr[x][y]���� ������� 1���� x*y ����
// 5. arr[0][0]���� arr[x][y]���� ����� �� ���

int main()
{
    int x, y;

    do
    { // �ݺ������� ������ �ڵ�
        cout << "x�� �Է��ϼ���: ";
        cin >> x;

        cout << "y�� �Է��ϼ���: ";
        cin >> y;
        cout << "\n";

        if (x <= 0 || y <= 0)
        {
            cout << "����: �ڿ����� �Է��� �ּ���.\n" << endl;

        }

    } while (x <= 0 || y <= 0); // �ݺ��� ����

    // x*y ũ���� ������ ���� �迭 ����
    int** arr = new int* [x];
    for (int i = 0; i < x; i++) {
        arr[i] = new int[y];
    }

    // �迭�� 1���� x*y������ ���� ����
    int count = 1;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            arr[i][j] = count++; // 1�� Ŀ��.
        }
    }

    // �迭�� ����� �� ���
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // �������� �Ҵ��� �޸� ����
    for (int i = 0; i < x; i++) {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}
