#include <iostream>

using namespace std;

int main()
{
    // 1���ڸ� �Ǵ�
    string name = "john";

    for (int i = 0; i < name.length(); i++)
    {
        cout << name[i] << " : " << isdigit(name[i]) << endl;
        if (isdigit(name[i]) != 0) // ���� o
        {

        }
        if (isdigit(name[i]) == 0) // ���� x
        {

        }
        isalpha(name[0]); // Ư�� ���� �Ÿ��� -> isdigit�� �ݴ�
    } // �������� �������� �Ǻ�

    /*  isdigit(); // Ư�� ���� �Ÿ���
      isalpha();*/ // Ư�� ���� �Ÿ���
}