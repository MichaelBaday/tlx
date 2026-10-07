#include <iostream>
using namespace std;

int main() {
    int luas[4][3] = {
        {225 * 335, 299 * 278, 300 * 250},
        {215 * 394, 144 * 718, 300 * 290},
        {200 * 400, 240 * 333, 142 * 619},
        {314 * 298, 411 * 198, 333 * 222}
    };

    int harga_jual[3] = {100, 120, 150};
    
    int harga_total1 = 0, harga_total2 = 0, harga_total3 = 0;
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 4; i++) {
            if (j == 0) {
                harga_total1 += luas[i][j] * harga_jual[j]; 
            } else if (j == 1) {
                harga_total2 += luas[i][j] * harga_jual[j];
            } else if (j == 2) {
                harga_total3 += luas[i][j] * harga_jual[j];
            }
        }
    }
    
    for (int i = 0; i < 3; i++) {
        if (i == 0) {
            cout << harga_total1 << endl;
        } else if (i == 1) {
            cout << harga_total2 << endl;
        } else if (i == 2) {
            cout << harga_total3 << endl;
        }
    }
}
