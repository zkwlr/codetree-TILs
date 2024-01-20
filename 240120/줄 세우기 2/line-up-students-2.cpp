#include <iostream>
using namespace std;

#define MAX_SIZE 1000

struct Student {
    int height;
    int weight;
    int num;
};

void studentSort(struct Student arr[], int n) {
    for (int i = n-1; i > 0; i--) // 원소 n개 정렬이면 버블정렬에선 n-1번 교환 시행
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j].height > arr[j + 1].height) // 키 정렬
            {
                struct Student temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
            else if ( arr[j].height == arr[j+1].height) { // 키가 동일하다면
                if (arr[j].weight < arr[j + 1].weight) {
                    struct Student temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;
    struct Student arr[MAX_SIZE];
    for (int i = 0; i < n; i++) { // 학생 정보 저장
        struct Student student;
        cin >> student.height >> student.weight;
        student.num = i+1;
        arr[i] = student;
    }

    studentSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i].height << " " 
        << arr[i].weight << " " 
        << arr[i].num << " " << endl;
    }
    return 0;
}