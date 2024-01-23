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
            count = 0; // 수열 길이 초기화
        }
        else
            count++; // 최장 수열 이어나감
        
        ans = max(ans, count); // 각 반복마다 현재 최장 수열이 저장된 답보다 더 커지면 교체

    }

    cout << ans;
    return 0;
}