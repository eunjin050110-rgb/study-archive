#include <iostream>

using namespace std;

// 전역 변수로 선언하면 0으로 자동 초기화됩니다. 
// 크기를 넉넉하게 101로 잡으신 건 좋습니다.
int arr1[101][101], arr2[101][101];

int main() {
    // 입출력 속도를 높여주는 코드 (대량 데이터 처리 시 필수)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    if (!(cin >> n >> m)) return 0; // 입력 예외 처리

    // 첫 번째 행렬 입력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr1[i][j];
        }
    }

    // 두 번째 행렬 입력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr2[i][j];
        }
    }

    // 합산 및 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // 공백을 한 칸만 출력하도록 수정
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}