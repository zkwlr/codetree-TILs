#include <iostream>
using namespace std;

#define LENGTH 200

int arr[LENGTH][LENGTH] = {0}; // 0 = 투명(초기), -1 = 빨강, 1 = 파랑

int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;
    bool isred = true; // 참이면 빨간색 차례
    while(n--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += 100; y1 += 100; x2 += 100; y2 += 100; // 좌표 구간을 0~200 사이로 설정
        if (isred) { // 빨간색 차례면 
            for (int i = y1; i < y2; i++) { // 2차원 좌표 구간 색칠 
                for (int j = x1; j < x2; j++) {
                    arr[i][j] = -1; // 빨간색
                }
            }
            isred = false;
        }
        else { //파란색 차례면
            for (int i = y1; i < y2; i++) { // 2차원 좌표 구간 색칠 
                for (int j = x1; j < x2; j++) {
                    arr[i][j] = 1; // 파란색
                }
            }
            isred = true;
        }
    }

    int count = 0;
    for (int i = 0; i < LENGTH; i++) { // 2차원 좌표 구간 색칠 
                for (int j = 0; j < LENGTH; j++) {
                    if (arr[i][j] == 1) count++; // 파란색 타일이면 count 증가 
                }
            }
    cout << count;
    return 0;
}