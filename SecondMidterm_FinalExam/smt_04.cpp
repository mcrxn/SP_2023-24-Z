//
// Created by filip on 3/15/2025.
//
/* Еден елемент од матрица ја дели матрицата на 4 квадранти (прикажани на сликата).
 * Притоа самиот елемент кој ја дели матрицата припаѓа во четвртиот квадрант (-5 во примерот на сликата).
 * Од стандарден влез се внесува матрица со димензии NxM (1 <= N, M < 100).
 * Потоа се внесуваат два броеви кои претставуваат индекси на еден елемент од матрицата.
 * Да се најдат сумите на секој од квадрантите и да се испечатат на стандарен излез.
 * Притоа се печати сумата за првиот квадрант, па за вториот, па третиот и на крај за четвртиот.
 * Доколку не може да се креира квадрант, тогаш за сумата на тој квадрант треба да се испечати 0.
*/

#include "iostream"

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int matrix[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    int x, y, sum = 0;
    cin >> x >> y;

    // first
    if(x != 0){
        sum = 0;
        for (int i = 0; i < x; i++) {
            for (int j = y; j < m; j++) {
                sum += matrix[i][j];
            }
        }
        cout << sum << " ";
    } else cout << 0 << " ";

    // second
    if((x != 0) && (y != 0)){
        sum = 0;
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                sum += matrix[i][j];
            }
        }
        cout << sum << " ";
    } else cout << 0 << " ";

    // third
    if(y < m){
        sum = 0;
        for (int i = x; i < n; i++) {
            for (int j = 0; j < y; j++) {
                sum += matrix[i][j];
            }
        }
        cout << sum << " ";
    } else cout << 0 << " ";

    // fourth
    sum = 0;
    for (int i = x; i < n; i++) {
        for (int j = y; j < m; j++) {
            sum += matrix[i][j];
        }
    }
    cout << sum << endl;
}