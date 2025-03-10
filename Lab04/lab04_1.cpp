//
// Created by filip on 3/9/2025.
//
/*
 * Од стандарден влез се вчитува даден број n, а потоа се вчитуваат n трицифрени броеви.
 * Ваша задача е да го најдете најголемиот број чиј збир на неговите цифри треба да е парен број.
 */
#include "iostream"

using namespace std;

int main(){
    int n;
    cin >> n;
    int biggestNumber = 0;

    for (int i = 0; i < n; i++) {
        int curr;

        cin >> curr;

        int tmp = curr;
        int sum = 0;
        while(tmp > 0){
            sum += tmp % 10;
            tmp /= 10;
        }
        if((sum % 2 == 0) && (biggestNumber < curr)){
            biggestNumber = curr;
        }

    }

    cout << biggestNumber << endl;
}