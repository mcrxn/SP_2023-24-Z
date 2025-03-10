//
// Created by filip on 3/10/2025.
//
/*Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
 * Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356).
 * Од тастатура се внесува природен број n ( n > 9).
 * Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“.
 * Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).
*/
#include "iostream"

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n <= 9) {
        cout << "Brojot ne e validen" << endl;
        return 0;
    }

    for (int i = n-1; i >= 0; i--) {

        int tmp = i;
        int tmp1 = 0, counter = 0;
        while(tmp > 0){
            tmp1 = tmp1 * 10 + tmp % 10;
            counter++;
            tmp /= 10;
        }
        if(tmp1 % counter == 0){
            cout << i << endl;
            return 1;
        }
    }
}