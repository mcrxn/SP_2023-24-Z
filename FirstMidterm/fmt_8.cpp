//
// Created by filip on 3/11/2025.
//
/*Од стандарден влез се внесуваат два цели броја N и Х.
 * Да се најде најблискот број помал од N коj е тотално различен од бројот Х.
 * Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.
 * Задачата да се реши без употреба на низи и матрици.
*/

#include "iostream"

using namespace std;

int main(){
    int N, X;

    cin >> N >> X;

    for (int i = N - 1; i >= 0; i--) {
        bool flag = true;
        if(i == 0) {
            cout << i << endl;
            break;
        }
        int tmpN = i;
        while (tmpN > 0){
            if(!flag) break;
            int tmpX = X;
            if (tmpX % 10 == tmpN % 10) {
                flag = false;
                break;
            }
            while (tmpX > 0){
                if(tmpX % 10 == tmpN % 10) {
                    flag = false;
                    break;
                }
                tmpX /= 10;
            }
            tmpN /= 10;
        }
        if(flag){
            cout << i << endl;
            break;

        }

    }
}