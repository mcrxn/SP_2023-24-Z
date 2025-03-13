//
// Created by filip on 3/12/2025.
//
/*Цик-цак е број за кој важи дека за секој пар соседни цифри во бројот важи дека едната е помала од 5,
 * а другата е поголема или еднаква на 5. На пример, ако бројот x е составен од цифрите a, b, c и d, тогаш за нив важи:
 * * a<5, b>=5, c<5, d>=5 или a>=5, b<5, c>=5, d<5
 * Пр.  508294, 2638, 81
 * Од тастатура се читаат непознат број на цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат).
 * Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.
*/

#include "iostream"

using namespace std;

int main(){
    int n;

    while(cin >> n){
        bool isZigZag = true;
        int tmp = n;
        if(n >= 10){
            bool flag = tmp % 10 >= 5;
            while(tmp > 0 && isZigZag){
                int tmpDigit = tmp % 10;
                if(tmpDigit < 5){
                    if(flag) isZigZag = false;
                }
                if(tmpDigit >= 5){
                    if(!flag) isZigZag = false;
                }
                tmp /= 10;
                flag = !flag;

            }
        }
        if(isZigZag && n >= 10) cout << n << endl;
    }
}
