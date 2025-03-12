//
// Created by filip on 3/11/2025.
//
/*Од стандарден влез се читаат непознат број на хексадецимални цифри се додека не се внесе точка (.).
 * Ваша задача е да го пресметате декадниот збир на внесените хексадецимални цифри.
 * Доколку добиениот декаден збир е делив со 16 се печати Pogodok.
 * Доколку истиот тој збир покрај што е делив со 16 плус завршува на 16 (последните цифри му се 1 и 6),
 * се печати Poln pogodok инаку се печати самиот збир.
Пример:
влез: A 7 F 2 0 c A 5
излез: 61
(61 = 10 + 7 + 15 + 2 + 0 + 12 + 10 + 5, бројот не е делив со 16, ниту пак последните цифри му се 1,6)
 */

#include "iostream"

using namespace std;

int main(){
    char c;

    int sum = 0;

    while(cin >> c){
        if(c == '.') break;
        if(isdigit(c)){
            sum += c - '0';
        } else {
            switch (tolower(c)) {
                case 'a':
                    sum += 10;
                    break;
                case 'b':
                    sum += 11;
                    break;
                case 'c':
                    sum += 12;
                    break;
                case 'd':
                    sum += 13;
                    break;
                case 'e':
                    sum += 14;
                    break;
                case 'f':
                    sum += 15;
                    break;
                default:
                    break;
            }

        }
    }
    if(sum % 16 == 0) {
        if((sum % 100) == 16){
            cout << "Poln pogodok" << endl;
        }else {
            cout << "Pogodok" << endl;
        }
    } else cout << sum << endl;
}