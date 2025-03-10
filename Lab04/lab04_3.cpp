//
// Created by filip on 3/9/2025.
//
/*
 * Напишете програма која чита два природни броја, почеток и крај, од стандардниот влез.
 * Потоа програмата треба да ги пронајде и отпечати палиндромите во опсегот [почеток, крај].
 * Палиндром се дефинира како број што останува ист и кога неговите цифри се во обратен редослед.
 * Ваша задача е да ги најдете најмалите и најголемите палиндроми во дадениот опсег.
 */

#include "iostream"

using namespace std;

int main(){

    int start, end;

    cin >> start >> end;

    int smallestPalindrome = 0;
    int currentBiggestPalindrome = 11;
    for (int i = start; i <= end; i++) {
        int tmp = i;
        int tmp1 = 0;
        while(tmp > 0){
            tmp1 = (tmp1 * 10) + tmp % 10;
            tmp /= 10;
        }
        if((smallestPalindrome == 0) && (i == tmp1)) smallestPalindrome = tmp1;
        if((i == tmp1) && currentBiggestPalindrome < tmp1) currentBiggestPalindrome = tmp1;
    }

    cout << "Smallest Palindromic Number: " << smallestPalindrome << endl;
    cout << "Biggest Palindromic Number: " << currentBiggestPalindrome << endl;

}