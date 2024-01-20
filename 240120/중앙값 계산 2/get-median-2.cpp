#include <iostream>
using namespace std;

#define MAX_SIZE 100

void bubbleSort(int arr[], int n)
{ // O(n^2) 의 정렬, n의 길이만큼 정렬
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    // 여기에 코드를 작성해주세요.
    int n, arr[MAX_SIZE];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        bubbleSort(arr, i); // i번째 원소까지 정렬
        if (i % 2 == 0)
        {                              // 홀수 번째 수를 읽으면
            cout << arr[i / 2] << " "; // 정렬된 배열에서의 중앙값 출력
        }
    }
    return 0;
}