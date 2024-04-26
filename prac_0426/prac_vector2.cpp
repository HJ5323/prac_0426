#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

 time() 이용
int main()
{
	time_t start, end;
	double result;

	start = time(NULL); // time(NULL)을 통해서 현재 시간 반환

	// 수행시킬 코드
	end = time(NULL);
	result = (double)(end - start);

	cout << "수행 시간 : " << result << "secend" << "\n";

	return 0;

}

 //clock()이용
int main()
{
	clock_t start, end;
	double result;

	start = clock(); // 현재 시간 반환

	// 수행시킬 코드
	end = clock();
	result = (double)(end - start);

	cout << "수행 시간 : " << result << "millisecond" << "\n";

	return 0;

	/*millisecond가 아니라 second로 출력하고 싶다면 "CLOCKS_PER_SEC"를 이용해주면 된다.
	cout << "수행 시간 : " << (result /CLOCKS_PER_SEC) << "second" << "\n";*/
}