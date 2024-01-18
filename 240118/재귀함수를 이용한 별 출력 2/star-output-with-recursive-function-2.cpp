#include <iostream>
using namespace std;

void recursiveStar(int n) {
    for (int i = 0; i < n ; i++) {
            cout << "*" << " ";
    }
    cout << endl;
    if (n == 1) {
        cout << "*" << " " << endl;
        return;
    }
    recursiveStar(n-1);
    for (int i = 0; i < n ; i++) {
            cout << "*" << " ";
    }
    cout << endl;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;
    recursiveStar(n);
    return 0;
}