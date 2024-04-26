#include <iostream>
#include <vector> // vector ��������� �߰��ؾ� ��� ����

using namespace std;

int main()
{

	vector<int> v = { 1,2,3,4,5 };
	vector<int> v(4); //int�� ���� ���� �� ũ�⸦ 4�� �Ҵ�(��� ���Ϳ�� 0���� �ʱ�ȭ)
	vector<int> v(5, 1); //int�� ���� ���� �� ũ�⸦ 5�� �Ҵ�(��� ���Ϳ�� 1�� �ʱ�ȭ)

	int value = v[2]; // ������ 3��° ����� ���� value�� ������
	v[3] = 100; // ������ 4��° ��ҿ� ���� ����

	v.assign(5, 1); //0~4�ε����� ���� 1�� �ʱ�ȭ, 5���� ���� �ε����� 1�� �ʱ�ȭ

	vector<int> v{ 10, 20 };
	cout << v.size() << endl; // 2 
	cout << v.capacity() << endl; // 2 
	
	v.reserve(100);
	cout << v.size() << endl; // 2 
	cout << v.capacity(); // 100
	
	v.resize(100);
	cout << v.size() << endl; // 100
	cout << v.capacity(); // 100

}

//.at(�ε���) -> �ε����� �ش��ϴ� �� ��ȯ
//.front() -> ������ ù��° ��� ����
//.back() -> ������ ������ ��� ����
//.resize(int) -> �Է� ���� ��ŭ ������ ũ�⸦ Ȯ���ϰ� �ʱ�ȭ
//.reserve(int) -> �Է� ���� ��ŭ ������ ũ�⸦ ����
//.size() -> ���Ͱ� ������� ũ�⸦ ��ȯ
//.capacity() -> ���Ͱ� ����� ũ�⸦ ��ȯ

//.push_back(value) ->�迭�� ���� �������� ���Ҹ� ���� 
//		-> push_back(value)�� ������ ����ϴ� �� ����, 
//		   reserve(int)�� �̸� ũ�⸦ �����ϴ� ���� �� ����
//.pop_back() ->������ ������ �κ� ����

//.begin() -> ���� �������� iterator ��ȯ
//.insert(v.begin()+3, ����); ->3�� �ε����� ���Ҹ� ����
//.erase(���� iterator, ������ iterator) 
//		-> ���� ��ġ���� ������ ��ġ �������� ���Ҹ� ����
// 		ex) v.erase(v.begin() + 1, v.begin() + 3); -> 1 ~ 2�� �ε��� ����
//.clear() -> ������ ��� ��Ҹ� ����