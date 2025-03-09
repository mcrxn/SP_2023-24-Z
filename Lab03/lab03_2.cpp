//
// Created by filip on 3/9/2025.
//
/*
 * За еден студент се читаат освоени поени од 5 активности за еден предмет.
 * Услов за еден предмет да биде положен е да се имаат над 50 освоени поени. Ако студентот има 0-50 поени не го положил предметот,
 * ако има 51-60 го положил со 6, 61-70 го положил со 7, 71-80 го положил со 8, 81-90 го положил со 9 и над 90 го положил со 10.
 * Да се испечати оценката која ја имал студентот,неговите поени и да се испечати 1 доколку има услов да добие повисока оценка, а во спротивно 0.
 * Услов за повисока оценка има само ако недостига 1 поен за добивање на повисока оценка.
 */
#include "iostream"

using namespace std;

int main(){
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int totalPoints = a + b + c + d + e;

    if(totalPoints > 0 && totalPoints <=50 ){

        cout << "Predmetot ne e polozen";
    } else if(totalPoints >= 51 && totalPoints <= 60){
        cout << "Ocenka: 6," << " poeni: " << totalPoints << endl;
        totalPoints % 10 == 0 ? cout << "1" : cout << "0" << endl;

    }else if(totalPoints >= 61 && totalPoints <= 70){
        cout << "Ocenka: 7," << " poeni: " << totalPoints << endl;
        totalPoints % 10 == 0 ? cout << "1" : cout << "0" << endl;

    }else if(totalPoints >= 71 && totalPoints <= 80){
        cout << "Ocenka: 8," << " poeni: " << totalPoints << endl;
        totalPoints % 10 == 0 ? cout << "1" : cout << "0" << endl;

    }else if(totalPoints >= 81 && totalPoints <= 90){
        cout << "Ocenka: 9," << " poeni: " << totalPoints << endl;
        totalPoints % 10 == 0 ? cout << "1" : cout << "0" << endl;

    }else if(totalPoints >= 91 && totalPoints <= 100){
        cout << "Ocenka: 10," << " poeni: " << totalPoints << endl;
    }

}