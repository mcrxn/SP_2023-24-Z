//
// Created by filip on 3/13/2025.
//

/* Се внесуваат низи од значи од стандарден влез.
 * Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во речениците.
 * Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран,
 * секој во нов ред со мали букви. Потоа во нов ред се печати бројот на појавувања на паровите самогласки.
 * Читањето завршува кога ќе се прочита знакот #.

Пример:
 IO is short for Input Output
 medioio medIo song
 #
 Излез:
    io
    ou
    io
    oi
    io
    io
    6
*/
#include <cstring>
#include "iostream"

using namespace std;


bool isVowel(char c, const char* vowels, int totalVowels = 5){
    for (int i = 0; i < totalVowels; i++) {
        if(tolower(tolower(c) == tolower(vowels[i]))) return true;
    }
    return false;
}

int main(){
    char line[100];
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    int count = 0;

    while (cin.getline(line, 100)){
        for (int i = 0; i < strlen(line); i++) {
            if(line[i] == '#') break;

            if(isVowel(line[i], vowels, 5)){
                if(isVowel(line[i + 1], vowels, 5)){
                    cout << (char)tolower( line[i]) << (char)tolower( line[i + 1]) << endl;
                    count++;
                }
            }

        }
    }
    cout << count << endl;
}