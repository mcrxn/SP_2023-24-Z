//
// Created by filip on 3/9/2025.
//
/* Да се напише програма во која се внесуваат три цели броеви.
 * Доколку внесените броеви се во растечки редослед да се испечати 1, a доколку се во опаѓачки редослед да се испечати -1,
 * во спротивно да се испечати 0.
*/

#include "iostream"

using namespace std;

int main(){

    int x, y, z;

    cin >> x >> y >> z;

    if(x < y && y < z){
        return 1; // cout << 1
    } else if(x > y && y > z){
        return -1; // cout << -1
    } else return 0; // cout << 0
}