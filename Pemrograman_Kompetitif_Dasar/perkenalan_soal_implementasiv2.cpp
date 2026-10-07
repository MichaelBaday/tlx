#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;
    int matriks[100][100];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            std::cin >> matriks[i][j];
        }
    }

    int hasil[100][100];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++)
            hasil[j][N - 1 - i] = matriks[i][j];
    }

    std::cout << "\n";

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            std::cout << hasil[i][j];
            if(j != N - 1) {
                std::cout << " ";
            }    
        }
        std::cout << "\n";
    }
}