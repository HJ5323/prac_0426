#include <iostream>

using namespace std;

int main()
{
    // 1글자만 판단
    string name = "john";

    for (int i = 0; i < name.length(); i++)
    {
        cout << name[i] << " : " << isdigit(name[i]) << endl;
        if (isdigit(name[i]) != 0) // 숫자 o
        {

        }
        if (isdigit(name[i]) == 0) // 숫자 x
        {

        }
        isalpha(name[0]); // 특수 문자 거른다 -> isdigit과 반대
    } // 문자인지 숫자인지 판별

    /*  isdigit(); // 특수 문자 거른다
      isalpha();*/ // 특수 문자 거른다
}