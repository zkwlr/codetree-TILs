#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int nx = 0;
    int ny = 0;
    int dx[4] = {-1,0,0,1};
    int dy[4] = {0,-1,1,0};
    for (int i = 0; i < n; i++){
        char k;
        int count;
        cin >> k >> count;
        switch (k){
            case 'W':
                nx += dx[0]*count;
                break;
            case 'S':
                ny += dy[1]*count;    
                break;
            case 'N':
                ny += dy[2]*count;
                break;
            case 'E':
                nx += dx[3]*count;
                break;
        }
    }
    cout << nx << " " << ny;
}