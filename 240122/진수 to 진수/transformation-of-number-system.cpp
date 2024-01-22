#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

void notation(const int a, const int b, int n)
{
    int todec = 0; // 먼저 10진수로 변환
    int k = 0;     // 자릿수
    while (1)
    {
        todec += (n % 10) * pow(a, k); // 자릿수 마다 a진법이면 a^k승씩 곱해서 계산
        n = n / 10; // 다음 자리수
        if (n == 0)
            break; // 끝 자릿수에 왔으므로 중지
        k++;
    }

    stack<int> ans; // 자릿수 저장 후 후입선출
    while (1)
    {
        ans.push(todec % b); // 10진법으로 나타낸 수를 b로 나눈 나머지만큼 스택에 저장
        todec = todec / b;
        if (todec == 0)
            break; // 1의자리 까지오면 중지
    }
    while (!ans.empty())
    {
        cout << ans.top();
        ans.pop();
    }
    return;
}

int main()
{
    // 여기에 코드를 작성해주세요.
    int a, b, n;
    cin >> a >> b >> n;

    notation(a, b, n);

    return 0;
}