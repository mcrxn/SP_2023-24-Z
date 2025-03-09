//
// Created by filip on 3/9/2025.
//
/*Да се напише програма во која корисникот внесува два цели броја. Програмата треба да ja најде нивната средна вредност.
 * Потоа, програмата треба да го зголеми првиот број за вредноста на таа средна вредност, а вториот број да го намали за истата вредност.
 * На крајот, да се испечати новата разлика меѓу броевите.
*/

#include "iostream"

using namespace std;

int main(){
    int x,y;

    cin >> x >> y;

    float difference = ((x + y) / 2);

    x = x + difference;

    y = y - difference;

    difference = x - y;

    cout << "Difference is : " << difference << endl;



}