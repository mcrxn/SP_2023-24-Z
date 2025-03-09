//
// Created by filip on 3/9/2025.
//
/*
 * Од стандарден влез се читаат два телефонски броја и времетраење на разговорот во минути.
 * Да се пресмета цената на повикот доколку знаеме дека првите 30 минути чинат 3 ден/мин,
 * а после тие 30 мин цената на 1 минута е 2ден.
 * Дополнително доколку двата телефонски броја се на ист оператор да се пресмета 30% попуст.
 * оператор1 ги користи (071, 072, 073)
 * оператор2 ги користи (074, 075, 076)
*/
#include "iostream"
using namespace std;

int main(){
    int number1, number2, minutes;
    cin >> number1 >> number2 >> minutes;


    double cost = 0;
    if(minutes >= 30){
        cost = 30 * 3;
        minutes = minutes - 30;
        cost += minutes * 2;
    } else {
        cost = minutes * 3;
    }

    int operator1 = number1 / 1000000;
    int operator2 = number2 / 1000000;

    if(((operator1 >= 71 && operator1 <= 73) && (operator2 >= 71 && operator2 <= 73))
        || ((operator1 >= 74 && operator1 <= 76) && (operator2 >= 74 && operator2 <= 76))){
            cost = cost * 0.7;
    }
    cout << cost << endl;





}