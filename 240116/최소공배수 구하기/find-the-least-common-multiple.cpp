#include <iostream>
using namespace std;

int func(int n, int m){
    int product = n*m;
    if (n < m) {
        int k = m;
        m = n;
        n = k;
    }
        while(m%n != 0){
            int temp = n;
            n = m%n;
            m = temp;
        }
        return product/n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    int ans = func(n, m);
    cout << ans;
    return 0;
}