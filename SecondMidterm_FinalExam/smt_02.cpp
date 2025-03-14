//
// Created by filip on 3/14/2025.
//
/*На стандарден влез се дадени повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1)
 * што означува колку броеви следуваат по него во истиот ред.
 * Да се напише програма која на СИ за секој ред ќе го испечати бројот со најголема најзначајна цифра.
 * Читањето на броеви завршува кога ќе се прочита бројот 0.
*/
#include "iostream"

using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n == 0) break;
        int m;
        int max = 0;
        int maxDigit = 0;
        for (int i = 0; i < n; i++) {
            cin >> m;
            int tmp = m;
            while(tmp > 0){
                int digit = tmp % 10;
                tmp /= 10;
                if((tmp == 0) && digit > maxDigit) {
                    max = m;
                    maxDigit = digit;
                }
            }
        }
        cout << max << endl;
    }
}