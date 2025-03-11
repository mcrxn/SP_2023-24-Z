//
// Created by filip on 3/10/2025.
//
/*
 * Од стандарден влез се читаат знаци се додека не се прочита извичник.
 * Во вака внесениот текст се скриени цели броеви (помали од 100).
 * Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.
 * Напомена: cin во C++ ги игнорира празните места (space).
 * За да не ги игнорира потребно е да се додаде noskipws пред читањето на знакот (пр. cin >> noskipws >> znak;)
 */
#include "iostream"

using namespace std;

int main(){
    char c;
    int sum = 0;
    while(cin>>noskipws>>c){
        if(c=='!') break;
        int tmp = 0;
        if(isdigit(c)){
            tmp = tmp * 10 + c - '0';
//            sum += tmp;
            char tmpC;
            cin >> tmpC;
            if(isdigit(tmpC)){
                tmp = tmp * 10 + tmpC - '0';
            }
            sum += tmp;

        }
    }
    cout << sum << endl;
}