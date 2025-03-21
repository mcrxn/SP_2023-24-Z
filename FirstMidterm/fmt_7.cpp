//
// Created by filip on 3/11/2025.
//
/*Со помош на знаците ‘@’,'%', и ‘.‘ се формира квадратна слика со „должина“ m (m>2) која претставува квадрат од знаците '.', впишан во квадрат од знаците @ и %(види примери).
 * За внесено m да се испечати на екран соодветната слика.
 * Внимавајте – не печатете нити еден дополнителен знак, како празно место, непотребен знак за нов ред...
 * Сликата завршува со знак за нов ред. Забелешка: Бидејќи е дадено ограничување за m, во точно решение на задачата не треба да се користи низа/матрица.
 */

#include "iostream"

using namespace std;

int main(){
    int m;

    cin >> m;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {

            if(j == 0 || j == m - 1) cout << "%";

            if(i == 0 || i == m - 1 ){
                if(j > 0 && j != m - 1 ) cout << "@";
            }

            if(i > 0 && i != m - 1) {
                if(j > 0 && j != m - 1) cout << ".";
            }

        }
        cout << endl;
    }
}