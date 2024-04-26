#include <iostream>
#include <vector>

using namespace std;

//1. vector�� ����Ͽ� ������ �����ϴ� �� ���� ����
//2. ����ڷκ��� 5���� ������ �Է� �޾� ���Ϳ� �߰�
//3. ������ ũ�� ���
//4. ������ ��� ���� ���
//5. ���� ū ���� ã�� ���
//6. ������ ��� ���Ҹ� �ι��
//7. �ε����� �Է� �޾� �ش� �ε����� �ִ� ���� ����
//8. �ε����� �Է� �޾� �ش� �ε����� �ִ� ���ο� ���� ����


void printVector(const vector<int>& v) // ������ ��� ���� ���
{
    for (int i = 0; i < v.size(); i++) 
    {
        cout << v[i] << " ";
    }
    cout << "\n" << endl;
}

int main()
{
    vector<int> v; // 1. �� ���� ����

    // 2. ����ڷκ��� 5���� ������ �Է� �޾� ���Ϳ� �߰�
    cout << "5���� ������ �Է��ϼ��� : " ;
    for (int i = 0; i < 5; i++)
    {
        int num;
        cin >> num;
        v.push_back(num); // v �迭�� ���� �������� ���� ����
    }


    // 3. ������ ũ�� ���
    cout << "\n������ ũ�� : " << v.size() << "\n" << endl;


    // 4. ������ ��� ���� ���
    cout << "������ ��� ���� : ";
    printVector(v);


    // 5. ���� ū �� ã�� ���
    int max = v[0]; // max ���� �ε��� 0�� ������ �ʱ�ȭ
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > max) // for ������ ���鼭 �ε��� 0�� ������ ũ�� max������ ������Ʈ
        {
            max = v[i];
        }
    }
    cout << "���� ū �� : " << max << "\n" << endl;


    // 6. ������ ��� ���Ҹ� �ι��
    for (int i = 0; i < v.size(); i++)
    {
        v[i] *= 2;
    }

    // 2�� Ȯ��
    cout << "2�� Ȯ�� : ";
    printVector(v);


    int remove;
    do
    { // �ݺ������� ������ �ڵ�

        cout << "������ ������ �ε����� �Է��ϼ���: ";
        cin >> remove;

        if (remove >= 0 && remove <= v.size()) 
        {
            v.erase(v.begin() + remove); // ������ ��ġ�� ���� -> �Էµ� �ε��� ���� ����
            cout << "�ε��� " << remove << "���� �ִ� ���Ҹ� �����߽��ϴ�." << endl;
        }

        else
        {
            cout << "��ȿ���� ���� �ε����Դϴ�.\n" << endl;
        }

    } while (remove >= 0 && remove > v.size()); // �ݺ��� ����
    
    // ���� ���� Ȯ��
    cout << "���� ���� Ȯ�� : ";
    printVector(v);

    // 8. �ε����� �Է� �޾� �ش� �ε����� �ִ� ���ο� ���� ����
    int in, newValue;
    do
    {
        cout << "������ ��ġ�� �ε����� ���ο� ���� �Է��ϼ���: ";
        cin >> in >> newValue;

        if (in >= 0 && in <= v.size())
        {
            v.insert(v.begin() + in, newValue); // in�� �ε����� newValue ����
            cout << "�ε��� " << in << "�� " << newValue << "�� �����߽��ϴ�." << endl;
        }

        else 
        {
            cout << "��ȿ���� ���� �ε����Դϴ�.\n" << endl;
        }
    } while (in >= 0 && in > v.size());

    // ���� �߰� Ȯ��
    printVector(v);

    return 0;
}