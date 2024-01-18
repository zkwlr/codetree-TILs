#include <iostream>
using namespace std;

int lcm(int a, int b) {
    int mul = a*b;
    if (a < b) {
        int temp = b;
        b = a;
        a = temp;
    }
    while (a%b != 0) {
        int i = b;
        b = a % b;
        a = i;
    }
    return mul / b;
}

int recursivelcm(int n, int *arr, int &ans) {
    if (n == 1) {
        return ans;
    }
    ans = lcm(ans, arr[n-2]);
    return recursivelcm(n-1, arr, ans);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n; int arr[10]; int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ans = arr[n-1];

    cout << recursivelcm(n, arr, ans);

    return 0;
}