#include <iostream>
using namespace std;

int arr[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m; cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while(m--) {
        int start, end; cin >> start >> end;
        int sum = 0;
        start -=1; end -=1;
        for (start ; start <= end ; start++) {
            sum += arr[start];
        }
        cout << sum << endl;
    }
    return 0;
}