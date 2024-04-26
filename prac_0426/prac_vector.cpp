#include <iostream>
#include <vector>

using namespace std;

//1. vector를 사용하여 정수를 저장하는 빈 벡터 선언
//2. 사용자로부터 5개의 정수를 입력 받아 벡터에 추가
//3. 벡터의 크기 출력
//4. 벡터의 모든 원소 출력
//5. 가장 큰 값을 찾아 출력
//6. 벡터의 모든 원소를 두배로
//7. 인덱스를 입력 받아 해당 인덱스에 있는 원소 제거
//8. 인덱스를 입력 받아 해당 인덱스에 있는 새로운 원소 삽입


void printVector(const vector<int>& v) // 벡터의 모든 원소 출력
{
    for (int i = 0; i < v.size(); i++) 
    {
        cout << v[i] << " ";
    }
    cout << "\n" << endl;
}

int main()
{
    vector<int> v; // 1. 빈 벡터 선언

    // 2. 사용자로부터 5개의 정수를 입력 받아 벡터에 추가
    cout << "5개의 정수를 입력하세요 : " ;
    for (int i = 0; i < 5; i++)
    {
        int num;
        cin >> num;
        v.push_back(num); // v 배열의 제일 마지막에 원소 삽입
    }


    // 3. 벡터의 크기 출력
    cout << "\n벡터의 크기 : " << v.size() << "\n" << endl;


    // 4. 벡터의 모든 원소 출력
    cout << "벡터의 모든 원소 : ";
    printVector(v);


    // 5. 가장 큰 값 찾아 출력
    int max = v[0]; // max 값은 인덱스 0번 값으로 초기화
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > max) // for 루프를 돌면서 인덱스 0번 값보다 크면 max값으로 업데이트
        {
            max = v[i];
        }
    }
    cout << "가장 큰 값 : " << max << "\n" << endl;


    // 6. 벡터의 모든 원소를 두배로
    for (int i = 0; i < v.size(); i++)
    {
        v[i] *= 2;
    }

    // 2배 확인
    cout << "2배 확인 : ";
    printVector(v);


    int remove;
    do
    { // 반복적으로 실행할 코드

        cout << "제거할 원소의 인덱스를 입력하세요: ";
        cin >> remove;

        if (remove >= 0 && remove <= v.size()) 
        {
            v.erase(v.begin() + remove); // 마지막 위치가 없음 -> 입력된 인덱스 값만 삭제
            cout << "인덱스 " << remove << "번에 있는 원소를 제거했습니다." << endl;
        }

        else
        {
            cout << "유효하지 않은 인덱스입니다.\n" << endl;
        }

    } while (remove >= 0 && remove > v.size()); // 반복할 조건
    
    // 원소 제거 확인
    cout << "원소 제거 확인 : ";
    printVector(v);

    // 8. 인덱스를 입력 받아 해당 인덱스에 있는 새로운 원소 삽입
    int in, newValue;
    do
    {
        cout << "삽입할 위치의 인덱스와 새로운 값을 입력하세요: ";
        cin >> in >> newValue;

        if (in >= 0 && in <= v.size())
        {
            v.insert(v.begin() + in, newValue); // in번 인덱스에 newValue 삽입
            cout << "인덱스 " << in << "에 " << newValue << "를 삽입했습니다." << endl;
        }

        else 
        {
            cout << "유효하지 않은 인덱스입니다.\n" << endl;
        }
    } while (in >= 0 && in > v.size());

    // 원소 추가 확인
    printVector(v);

    return 0;
}