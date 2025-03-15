//
// Created by filip on 3/15/2025.
//
/*
 * Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100).
 * На почетокот се внесуваат димензиите на матрицата, а потоа и елементите на матрицата кои се само вредностите 1 и 0.
 * Програмата треба да изброи и отпечати на СИ во колку од редиците и колоните има барем 3 последователни елементи со вредност 1.
 * Пример:
                                    1 1 1 0
                                    1 0 1 1
                                    1 0 0 1
 *1 ред + 1 колона = 2
 *
 */

#include "iostream"

using namespace std;

int main(){
    int n,m;

    cin >> n >> m;

    int matrix[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>matrix[i][j];
        }
    }
    int rows = 0;
    int cols = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int elCount = 1;
            if(matrix[i][j] == 1){
                for (int k = j + 1; k < m; k++) {
                    if(matrix[i][k] != 1) break;
                    elCount++;
                }
                if(elCount >= 3) {
                    rows++;
                    break;
                }

            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int elCount = 1;
            if(matrix[j][i] == 1){
                for (int k = j + 1; k < n; k++) {
                    if(matrix[k][i] != 1) break;
                    elCount++;
                }
                if(elCount >= 3){
                    cols++;
                    break;
                }
            }
        }
    }
    int res = rows + cols;
    cout << res <<endl;
}