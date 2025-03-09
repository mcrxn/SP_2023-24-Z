//
// Created by filip on 3/9/2025.
//
/*
 * Да се напише програма што ќе ја испечати сумата на сите броеви деливи со 3 и не делливи со 2 во интервалот [A,B).
 * А и B се внесуваат од тастатура.
 * Објаснување на примерот.
    * А=10, B = 20.
    * Броеви кои припаѓаат во интервалот се 10,11,12,13,..,19.
    * Од нив деллив со 3 а не деллив со 2 е бројот 15, па сумата е 15.
------------------------------------------------------------------------------------------------------------------------
 * Write a program that will print the sum of all numbers divisible by 3 and not divisible with 2 in the interval [A, B),
 * where A and B are entered from the keyboard.
 * Explanation of the example:
    * A = 10, B = 20.
    * The numbers that belong to the interval are 10, 11, 12, 13, .., 19.
    * Among them, the number divisible by 3 and not divisible by 2 is 15, so their sum is 15.
*/

#include "iostream";

using namespace std;

int main(){

    int A, B;
    cin >> A >> B;

    int sum = 0;
    for (int i = A; i < B; i++) {
        if((i % 3 == 0) && (i % 2 != 0)){
            sum += i;
        }
    }
    cout << sum << endl;

}