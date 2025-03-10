//
// Created by filip on 3/10/2025.
//
/*
 * Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
 * Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура),
 * да се најде и испечати најмалиот „благ број“.
 * Ако не постои таков број, да се испечати NE.
 */

#include "iostream"
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;

    int sweet = 0;

    for (int i = m; i <= n; i++) {
        int tmp = i;
        bool flag = false;
        if (tmp % 2 == 0){

            while (tmp > 0){
                if(tmp % 2 != 0) break;
                tmp /= 10;
            }
            if (tmp == 0) {
                flag = true;
                sweet = i;
                break;
            }

        }

    }
    if(sweet == 0){
        cout << "NE" << endl;
    }else {
        cout << sweet << endl;
    }

}