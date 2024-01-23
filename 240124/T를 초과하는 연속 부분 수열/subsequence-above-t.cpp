#include <iostream>
using namespace std;

int arr[1000] = {0};

int main()
{
    // 여기에 코드를 작성해주세요.
    int n, t;
    cin >> n >> t;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= t)
        {
            if (ans < count)
            { // 지금까지 최장 부분수열 길이보다 count가 크면 교체
                ans = count;
            }
            count = 0; // 수열 길이 초기화
        }
        else
            count++;
    }
    if (ans < count)
        ans = count;

    cout << ans;
    return 0;
}