#include <iostream>
#include <string>
using namespace std;

int arr[12]; // 달력 배열

int main()
{
    // 여기에 코드를 작성해주세요.
    for (int i = 1; i <= 12; i++)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
        {
            arr[i] = 31;
        }
        else if (i == 2)
            arr[i] = 29;
        else
            arr[i] = 30;
    }
    arr[0] = 0; // 0월은 없음

    int m1, d1, m2, d2;
    string week;
    int day = 0;
    cin >> m1 >> d1 >> m2 >> d2;
    for (int i = m1; i < m2; i++){
        day += arr[i]; // 2월 5일 ~ 3월 9일중 달의 날짜 수부터 계산
    }
    day += (d2 - d1); // 날짜까지 계산
    int time = day / 7;
    int remain = day % 7; // 기간 동안 몇주 + 요일이 지났는지 계산

    string input;
    cin >> input;
    if (input == "Mon") {
        cout << time + (remain >= 0 ? 1 : 0); // 주 수 + 요일이 몇번 지났는지에 따라 + 1
    }
    else if (input == "Tue") {
        cout << time + (remain >= 1 ? 1 : 0);
    }
    else if (input == "Wed") {
        cout << time + (remain >= 2 ? 1 : 0);
    }
    else if (input == "Thu") {
        cout << time + (remain >= 3 ? 1 : 0);
    }
    else if (input == "Fri") {
        cout << time + (remain >= 4 ? 1 : 0);
    }
    else if (input == "Sat") {
        cout << time + (remain >= 5 ? 1 : 0);
    }
    else if (input == "Sun") {
        cout << time + (remain >= 6 ? 1 : 0);
    }
    return 0;
}