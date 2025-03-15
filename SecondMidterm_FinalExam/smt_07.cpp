//
// Created by filip on 3/15/2025.
//
/*Од тастатура се внесуваат димензиите на една матрица (m, n <= 100), а потоа и елементите од матрицата.
 * Да се генерира низа (со најмногу m) така што секој елемент од низата се добива со наоѓање на елементот во секоја редица
 * од матрицата што е најоддалечен од аритметичката средина во рамки на таа редица.
 * Ако постојат повеќе елементи што се најоддалечени од аритметичката средина, тогаш се зема предвид првиот.
 * Редоследот на запишување на елементите во низата одговара на редоследот на редиците.
 * * Пример:
 * Влез:
  3 6
  1 2 2 3 4 5
  1 1 2 2 3 3
  1 2 3 4 5 6
 * Излез:
  5 1 1
*/

#include "iostream"

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    int matrix[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int arr[m];
    int arrIdx = 0;
    for (int i = 0; i < m; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += matrix[i][j];
        }
        double mean = (double)rowSum / n;
        double highestDistance = 0.00;
        int idx = 0;
        for (int j = 0; j < n; j++) {
            if(abs(matrix[i][j] - mean) > highestDistance) {
                highestDistance = abs(matrix[i][j] - mean);
                idx = j;
            }
        }
        arr[i] = matrix[i][idx];

    }
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
}