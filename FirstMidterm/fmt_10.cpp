//
// Created by filip on 3/11/2025.
//
/*Цик-цак е број за кој што важи дека за секој пар соседни цифри, тие се наизменично поголеми односно помали една во однос на друга.
 * На пример, ако бројот x е составен од цифрите a, b, c, d и е, тогаш за нив важи:
 * * a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e
 * * Пр. 343, 4624, 6231209
 * Од тастатура се читаат непознат број цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат).
 * Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.
*/

#include "iostream"

using namespace std;

int main(){
    int n;
    while(cin >> n){
        bool isZigZag = true;
        if(n >= 10){
            int tmp = n;
            int tmpDigit = tmp % 10;

            bool flag = tmpDigit > (tmp / 10) % 10;
            while(tmp > 0){
                if(!isZigZag) break;
                tmpDigit = tmp % 10;
                tmp /= 10;
                if(tmp % 10 == 0 && tmp < 10) break;
                if(tmpDigit == tmp % 10) {
                    isZigZag = false;
                    break;
                } else if(tmpDigit < tmp % 10){
                    if(flag) isZigZag = false;
                } else if(tmpDigit > tmp % 10){
                    if(!flag) isZigZag = false;
                }
                flag = !flag;
            }
        }

            if(isZigZag && n >= 10) cout << n << endl;
    }

}