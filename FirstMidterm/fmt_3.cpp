//
// Created by filip on 3/10/2025.
//
/*
 * Од стандарден влез се чита еден природен број n.
 * Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем.
 * Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.
 */
#include "iostream"

using namespace std;

int main(){
    int n;
    cin >> n;

    int max = 0, sum = 0;

    for (int i = n - 1; i > 0; i--) {
        int tmp = 0;
        for (int j = 1; j <= i; j++) {
            if(i % j == 0 && j != i){
                tmp += j;
            }
        }
        if(tmp > sum){
            sum = tmp;
            max = i;
        }
    }

    cout << max << endl;
}