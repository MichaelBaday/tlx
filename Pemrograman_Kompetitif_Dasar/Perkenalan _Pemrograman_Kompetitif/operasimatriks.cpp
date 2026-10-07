#include <bits/stdc++.h>

int main() {
    int N, M, X;
    std::cin >> N >> M >> X;

    int arr[100][100];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            std::cin >> arr[i][j];
        }
    }

    char sumbu;
    int sudut;
    std::cin >> sumbu;
    if(sumbu == '_') {
        std::cin >> sudut;
        if(sudut == 90) {
            for(int i = 0; i < X; i++) {
                for(int j = 0; j < M; j++) {
                    for(int k = N - 1; k >= 0; k--) {
                        std::cout << arr[k][j];
                    }
                    std::cout << "\n";
                }
            }
        }else if(sudut == 180) {
            for(int l = 0; l < 2; l++) {
                for(int i = 0; i < X; i++) {
                    for(int j = 0; j < M; j++) {
                        for(int k = N - 1; k >= 0; k--) {
                            std::cout << arr[k][j];
                        }
                    }
                }
            }
        }else if(sudut == 270) {
             for(int l = 0; l < 3; l++) {
                for(int i = 0; i < X; i++) {
                    for(int j = 0; j < M; j++) {
                        for(int k = N - 1; k >= 0; k--) {
                            std::cout << arr[k][j];
                        }
                    }
                }
            }
        }
    }

    if(sumbu == '|') {
        std::cin >> sudut;
        if(sudut == 90) {

        }else if(sudut == 180) {

        }else if(sudut == 270) {
            
        }
    }
}