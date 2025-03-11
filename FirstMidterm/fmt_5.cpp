//
// Created by filip on 3/11/2025.
//
/*Од тастатура се читаат 2 позитивни цели броеви.
 * Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.
 * Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.
 * Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат на парните позиции од другиот број,
 * во истиот редослед. Соодветно да се испечатат пораки „PAREN“ и „NE“.
 * Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)
 */

#include "iostream"
using namespace std;

bool isEvenEq(int a, int b){
    int tmpB = b;
    bool flag = true;
    bool noSuchNumber = false; // flag for test where one of the digits of the smaller number didnt exist in the bigger number
    while(tmpB > 0){
        int tmpA = a;
        int cifra = 1;
        while(tmpA > 0){
            if(tmpA % 10 == 0) flag = false;
            if(((tmpA % 10) == (tmpB % 10)) && (cifra % 2 == 0)){
                flag = true;
                break;
            }
            if((tmpA % 10 == tmpB % 10) && (cifra % 2 != 0)) {
                flag = false;
            }
            cifra++;

            tmpA /= 10;
            if(tmpA <= 0) noSuchNumber = true;
        }
        if(noSuchNumber) return false;
        tmpB /= 10;
    }
    return flag;
}

int main(){
    int a, b;
    cin >> a >> b;
    if(a <= 0 || b <= 0){
        cout << "Invalid input" << endl;
        return 0;
    } else if(a < 10 || b < 10){ // test case where there was one-digit number in the input
        cout << "NE" << endl;
        return 0;
    }
    bool res;
    a > b ? res = isEvenEq(a, b) : res = isEvenEq(b, a);
    cout << (res ? "PAREN" : "NE") << endl;
}