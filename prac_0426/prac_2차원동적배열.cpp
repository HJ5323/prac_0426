#include <iostream>

using namespace std;

// 1. 사용자로부터 x, y 2개의 자연수를 입력 받기
// 2. 만약 사용자가 x와 y에 0이나 음수를 입력한다며 에러 메세지를 출력 후 다시 입력 받기
// 3. x*y의 크기를 갖는 이차원 동적 배열 arr을 선언
// 4. arr[0][0]부터 arr[x][y]까지 순서대로 1부터 x*y 저장
// 5. arr[0][0]부터 arr[x][y]까지 저장된 값 출력

int main()
{
    int x, y;

    do
    { // 반복적으로 실행할 코드
        cout << "x를 입력하세요: ";
        cin >> x;

        cout << "y를 입력하세요: ";
        cin >> y;
        cout << "\n";

        if (x <= 0 || y <= 0)
        {
            cout << "에러: 자연수를 입력해 주세요.\n" << endl;

        }

    } while (x <= 0 || y <= 0); // 반복할 조건

    // x*y 크기의 이차원 동적 배열 생성
    int** arr = new int* [x];
    for (int i = 0; i < x; i++) {
        arr[i] = new int[y];
    }

    // 배열에 1부터 x*y까지의 값을 저장
    int count = 1;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            arr[i][j] = count++; // 1씩 커짐.
        }
    }

    // 배열에 저장된 값 출력
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // 동적으로 할당한 메모리 해제
    for (int i = 0; i < x; i++) {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}
