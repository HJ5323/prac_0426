#include <iostream>
#include <vector> // vector 헤더파일을 추가해야 사용 가능

using namespace std;

int main()
{

	vector<int> v = { 1,2,3,4,5 };
	vector<int> v(4); //int형 백터 생성 후 크기를 4로 할당(모든 백터요소 0으로 초기화)
	vector<int> v(5, 1); //int형 백터 생성 후 크기를 5로 할당(모든 백터요소 1로 초기화)

	int value = v[2]; // 벡터의 3번째 요소의 값을 value로 가져옴
	v[3] = 100; // 벡터의 4번째 요소에 값을 복사

	v.assign(5, 1); //0~4인덱스의 값을 1로 초기화, 5보다 작은 인덱스를 1로 초기화

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

//.at(인덱스) -> 인덱스에 해당하는 값 반환
//.front() -> 백터의 첫번째 요소 접근
//.back() -> 백터의 마지막 요소 접근
//.resize(int) -> 입력 정수 만큼 백터의 크기를 확보하고 초기화
//.reserve(int) -> 입력 정수 만큼 백터의 크기를 예약
//.size() -> 백터가 사용중인 크기를 반환
//.capacity() -> 백터가 예약된 크기를 반환

//.push_back(value) ->배열의 제일 마지막에 원소를 삽입 
//		-> push_back(value)을 여러번 사용하는 것 보다, 
//		   reserve(int)로 미리 크기를 지정하는 것이 더 빠름
//.pop_back() ->백터의 마지막 부분 제거

//.begin() -> 백터 시작점의 iterator 반환
//.insert(v.begin()+3, 원소); ->3번 인덱스에 원소를 삽입
//.erase(시작 iterator, 마지막 iterator) 
//		-> 시작 위치부터 마지막 위치 전까지의 원소를 삭제
// 		ex) v.erase(v.begin() + 1, v.begin() + 3); -> 1 ~ 2번 인덱스 삭제
//.clear() -> 백터의 모든 요소를 지움