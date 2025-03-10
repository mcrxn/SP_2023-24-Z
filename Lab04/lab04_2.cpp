//
// Created by filip on 3/9/2025.
//
/*
 * Од стандарден влез се внесува даден број X,
 * а потоа се внесуваат броеви додека не се внесе нешто различно од број.
 * За секој од броевите да се провери дали неговиот број на цифри е еднаков со бројот на цифри на Х,
 * и доколку условот е исполнет, да се испечати.
------------------------------------------------------------------------------------------------------------------------
 *From standard input, a number X is entered,
 * and then the numbers are entered until something other than a number is entered.
 * For each of the entered numbers, check if the number of digits is equal to the number of digits in X.
 * For each of the entered number, if the condition is met, print the number.
*/

#include "iostream"

using namespace std;

int main(){
    int n, nDigits = 0;

    cin >> n;

    while(n>0){

        nDigits++;

        n /= 10;

    }

    int curr, tmp, counter;

    while(cin >> curr){
        tmp = curr;
        counter = 0;
        while(tmp > 0){
            counter++;
            tmp /= 10;
        }
        if(counter == nDigits){
            cout << curr << endl;
        }
    }
}