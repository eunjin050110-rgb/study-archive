
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T) || T <= 0) { // 입력 검증
        cerr << "잘못된 테스트 케이스 개수입니다.\n";
        return 1;
    }

    while (T--) {
        string quiz;
        cin >> quiz;

        // 문자열 검증: O와 X만 허용
        bool valid = true;
        for (char c : quiz) {
            if (c != 'O' && c != 'X') {
                valid = false;
                break;
            }
        }
        if (!valid || quiz.empty() || quiz.size() >= 80) {
            cerr << "잘못된 입력 형식입니다.\n";
            return 1;
        }

        int score = 0;      // 총 점수
        int streak = 0;     // 연속 O 개수

        for (char c : quiz) {
            if (c == 'O') {
                streak++;
                score += streak; // 연속된 만큼 점수 추가
            } else {
                streak = 0; // X면 연속 끊김
            }
        }

        cout << score << "\n";
    }

    return 0;
}


