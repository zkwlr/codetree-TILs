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
    for (int i = m1; i < m2; i++)
    {
        day += arr[i]; // 2월 5일 ~ 3월 9일중 달의 날짜 수부터 계산
    }
    day += (d2 - d1); // 날짜까지 계산
    int time = day / 7;
    int remain = day % 7; // 기간 동안 몇주 + 요일이 지났는지 계산

    string input;
    cin >> input;
    if (input == "Mon")
    {
        cout << time + (remain >= 0 ? 1 : 0); // 주 수 + 요일이 몇번 지났는지에 따라 + 1
    }
    else if (input == "Tue")
    {
        cout << time + (remain >= 1 ? 1 : 0);
    }
    else if (input == "Wed")
    {
        cout << time + (remain >= 2 ? 1 : 0);
    }
    else if (input == "Thu")
    {
        cout << time + (remain >= 3 ? 1 : 0);
    }
    else if (input == "Fri")
    {
        cout << time + (remain >= 4 ? 1 : 0);
    }
    else if (input == "Sat")
    {
        cout << time + (remain >= 5 ? 1 : 0);
    }
    else if (input == "Sun")
    {
        cout << time + (remain >= 6 ? 1 : 0);
    }
    return 0;
}

/* 모범답안
#include <iostream>

using namespace std;

int NumOfDays(int m, int d) {
    // 계산 편의를 위해 월마다 몇 일이 있는지를 적어줍니다.
    int days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;

    // 1월부터 (m - 1)월 까지는 전부 꽉 채워져 있습니다.
    for(int i = 1; i < m; i++)
        total_days += days[i];

    // m월의 경우에는 정확이 d일만 있습니다.
    total_days += d;

    return total_days;
}

int NumOfDay(string s) {
    // 간단한 비교를 위해 요일을 숫자로 나타내줍니다.
    if(s == "Mon") return 0;
    else if(s == "Tue") return 1;
    else if(s == "Wed") return 2;
    else if(s == "Thu") return 3;
    else if(s == "Fri") return 4;
    else if(s == "Sat") return 5;
    return 6;
}

int ans;

int main() {
    // 변수 선언 및 입력
    int m1, m2, d1, d2;
    string A;
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    int start_date = NumOfDays(m1, d1);
    int end_date = NumOfDays(m2, d2);
    int cur_day = NumOfDay("Mon");

    for(int date = start_date; date <= end_date; date++) {
        // 오늘의 요일이 A요일과 같다면 정답에 추가합니다.
        if(cur_day == NumOfDay(A)) ans++;
        cur_day = (cur_day + 1) % 7;
    }

    // 출력
    cout << ans;
    return 0;
}
*/