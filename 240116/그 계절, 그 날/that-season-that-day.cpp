#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> jan(31), fab(28), mar(31), apr(30), may(31), jun(30)
, jul(31), aug(31), sep(30), oct(31), nov(30), dec(31);
vector<vector<int>> calender;
calender.push_back(1);
calender.push_back(fab);
calender.push_back(mar);
calender.push_back(apr);
calender.push_back(may);
calender.push_back(jun);
calender.push_back(jul);
calender.push_back(aug);
calender.push_back(sep);
calender.push_back(oct);
calender.push_back(nov);
calender.push_back(dec);

string checkDay(int y, int m, int d){
    if y%400 == 0 calender[1].push_back(0);
    else if y%100 == 0 {}
    else if y%4 == 0 calender[1].push_back(0);

    if (calender[m-1][d-1] != 0) {
        return "-1";
    }
    else {
        switch (m) {
            case 3,4,5 : return "Spring";
            break;
            case 6,7,8 : return "Summer";
            break;
            case 9,10,11 : return "Fall";
            break;
            case 12,1,2 : return "Winter";
            break;
        }
    }

int main() {
    // 여기에 코드를 작성해주세요.
    int y, m ,d; cin >> y >> m >> d;
    string ans = checkDay(y, m, d);
    cout << ans;
    return 0;
}