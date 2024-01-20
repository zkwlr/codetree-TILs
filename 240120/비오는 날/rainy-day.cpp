#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define MAX_SIZE 100
#define MAX_DATE 21001231

struct Data
{   
    int date;
    string datestring;
    string week;
    string weather;
};

int main()
{
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    struct Data arr[MAX_SIZE]; // data 담을 배열 선언
    for (int i = 0; i < n; i++)
    {
        struct Data data;
        string datestring;
        cin >> datestring >> data.week >> data.weather;
        data.datestring = datestring; // 출력용 날짜 형식 저장
        datestring.erase(remove(datestring.begin(), datestring.end(), '-'), datestring.end()); // 날짜의 - 제거
        data.date = stoi(datestring);                                                          // 문자열을 int로 변환
        arr[i] = data;
    }

    int date = MAX_DATE;    // 최신 날짜 저장
    struct Data recentdate; // 최신 날씨 정보 저장
    for (int i = 0; i < n; i++)
    {
        if (arr[i].date < date && arr[i].weather == "Rain")
        {
            recentdate = arr[i];
            date = arr[i].date;
        }
    }
    cout << recentdate.datestring << " " << recentdate.week << " " << recentdate.weather;

    return 0;
}