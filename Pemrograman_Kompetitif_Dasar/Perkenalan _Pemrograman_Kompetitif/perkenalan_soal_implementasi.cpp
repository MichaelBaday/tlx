#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;

    int arr[100][100];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            std::cin >> arr[i][j];
        }
    }

    std::cout << "\n";
    
    for (int j = 0; j < M; j++) {
        for (int i = N - 1; i >= 0; i--) {
            std::cout << arr[i][j];
            if (i > 0) {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }
}