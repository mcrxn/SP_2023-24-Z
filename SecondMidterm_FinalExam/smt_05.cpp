//
// Created by filip on 3/15/2025.
//

/*Од стандарден влез се чита ливче во спортска обложувалница.
 * Во првиот ред е запишана сумата на уплата (цел број).
 * Потоа во секој нареден ред кој се чита од стандарден влез (се додека не се прочита знакот #) е запишан по еден тип во следниот формат:

 * * ab12 1 1.25

 * Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци),
 * вториот број е типот (може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).
 * Ваша задача е да го испечатите типот со најголем коефициент како и можната добивка на ливчето.
 * Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.
 * Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.
*/


#include "iostream"
#include "cstring"
using namespace std;

int main(){
    double bet;

    cin >> bet;
    char code[9], highestCoefCode[9];

    int tip, highestCoefTip;
    double coef, highestCoef = 0.00;


    while(cin >> code && *code != '#'){
        cin >> tip;
        cin >> coef;
        bet *= coef;
        if(coef > highestCoef){
            highestCoef = coef;
            strcpy(highestCoefCode, code);
            highestCoefTip = tip;
        }
    }

    cout << highestCoefCode << " " << highestCoefTip << " " << highestCoef << endl;
    cout << bet << endl;
}