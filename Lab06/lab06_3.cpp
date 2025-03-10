//
// Created by filip on 3/10/2025.
//
/*
 * Да се напише програма која за низа од N броеви ќе проверува дали парот кој се наоѓа еден до друг е прост број.
 * НАПОМЕНА: низата е составена од цифри од 0 до 9
*/
#include "iostream"

using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i+=2) {
        bool isPrime = true;
        int tmp;

        if(i + 1 < n){
            tmp = (arr[i] * 10) + arr[i + 1];
        } else{
            tmp = arr[i];
        }

        if(tmp < 2) isPrime = false;

        if(tmp % 2 == 0 || tmp % 3 == 0) isPrime = false;

        for(int j = 5; j * j <= tmp; j += 6){
            if(tmp % j == 0 || tmp % (j + 2) == 0) isPrime = false;
        }
        cout << "Brojot: " << tmp << (isPrime ? " e prost" : " NE e prost") << endl;

    }
}