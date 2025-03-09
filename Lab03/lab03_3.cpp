//
// Created by filip on 3/9/2025.
//
/*
 * Марта и нејзините 3 другарки сакаат да одат на кино и купуваат билети.
 * Иницијалната цена на еден билет за сите филмови е 200 денари, но
 * доколку филмот е комедија се доплаќа 20 денари,
 * доколку филмот е акција се доплаќа 40 денари
 * доколку филмот е романса се доплаќа 30 денари


 *Освен картите кои сакаат да ги купат тие сакаат да купат и нешто за пиење и грицкање. Менито е следното:

Пијалоци:                                                                       Пуканки:

Вода: 80ден                                                                     големина S: 100ден

Fanta, CocaCola, Sprite: 100ден                                                 големина M: 150ден

IceTea: 120ден.                                                                 големина L: 200ден.

 *Да се пресмета која ќе биде вкупната цена што Марта и нејзините другарки ќе треба да ја платат.
 * Дополнително доколку тие одлучат да одат во Среда и платат со нивната VISA картичка за вредноста од 2 билети ќе добијат 4
 * (односно добиваат 50% попуст на купените билети без разлика за кој филм станува збор)

 *Објаснување за input
    * вид на филм:  action
    * големина на пуканки:  L
    * број на пакувања пуканки:  2
    * вид на пијалок:  Fanta
    * број на пијалоци:  3
    * Кој ден ќе гледа филм:  Wednesday
    * VISA картичка:  1 (ДА) или 0 (НЕ)

 */

#include "iostream"

using namespace std;
int main(){

    int ticketPrice = 200*4;
    int totalPrice = 0;
    int numberOfPopcornPacks, numberOfDrinks;
    bool isCardVisa;
    string movieType, drink, day;
    char popcornSize;
    cin >> movieType >> popcornSize >> numberOfPopcornPacks >> drink >> numberOfDrinks >> day >> isCardVisa;


    if(drink == "Fanta" || drink == "Sprite" || drink =="CocaCola"){
        totalPrice += numberOfDrinks * 100;
    } else if( drink == "voda"){
        totalPrice += numberOfDrinks * 80;
    } else{
        totalPrice += numberOfDrinks * 120;
    }
    if(movieType == "comedy"){
        ticketPrice += 20*4;
    } else if(movieType == "action"){
        ticketPrice += 40*4;
    } else {
        ticketPrice += 30*4;
    }

    switch (popcornSize) {
        case 'S':
            totalPrice += numberOfPopcornPacks * 100;
            break;
        case 'M':
            totalPrice += numberOfPopcornPacks * 150;
            break;
        case 'L':
            totalPrice += numberOfPopcornPacks * 200;
            break;
        default:
            totalPrice = ticketPrice;
    }

    if(isCardVisa && day == "Wednesday"){
        ticketPrice = ticketPrice * 0.5;
    }
    totalPrice += ticketPrice;

    cout << totalPrice << endl;
}