#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int index = 10000;    // 초기 타일 위치
    int arr[20000] = {0}; // 회색 : 0, 흰색 : -1, 검은색 : 1

    while (n--)
    {
        int time;
        char way;
        cin >> time >> way;
        for (int i = 0; i < time; i++)
        {
            if (way == 'R')
            {
                arr[index] = 1;
                if (i == time - 1)
                    break; // time번 뒤집고 그자리에 정지
                index++;
            }
            else if (way == 'L')
            {
                arr[index] = -1;
                if (i == time - 1)
                    break;
                index--;
            }
        }
    }

    int white = 0;
    int black = 0;
    for (int i = 0; i < 20000; i++)
    {
        if (arr[i] == -1)
            white++;
        else if (arr[i] == 1)
            black++;
    }

    cout << white << " " << black;
    return 0;
}