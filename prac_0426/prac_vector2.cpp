#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

 time() �̿�
int main()
{
	time_t start, end;
	double result;

	start = time(NULL); // time(NULL)�� ���ؼ� ���� �ð� ��ȯ

	// �����ų �ڵ�
	end = time(NULL);
	result = (double)(end - start);

	cout << "���� �ð� : " << result << "secend" << "\n";

	return 0;

}

 //clock()�̿�
int main()
{
	clock_t start, end;
	double result;

	start = clock(); // ���� �ð� ��ȯ

	// �����ų �ڵ�
	end = clock();
	result = (double)(end - start);

	cout << "���� �ð� : " << result << "millisecond" << "\n";

	return 0;

	/*millisecond�� �ƴ϶� second�� ����ϰ� �ʹٸ� "CLOCKS_PER_SEC"�� �̿����ָ� �ȴ�.
	cout << "���� �ð� : " << (result /CLOCKS_PER_SEC) << "second" << "\n";*/
}