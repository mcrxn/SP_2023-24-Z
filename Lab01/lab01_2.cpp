//
// Created by filip on 3/9/2025.
//
/*
 * Да се напише програма која од стандарден влез чита цел број(денови). На излез да се отпечати колку години, месеци и денови се тоа.
 * Претпоставуваме дека сите месеци имаат 30 дена и секоја година има 365 дена.
 -------------------------------------------------------------------------------------------------------------------------------------
 * Write a program that reads an integer (days) from standard input. You will need to calculate how many years, months and days it is.
 * We assume that all months have 30 days and each year has 365 days.
 */

#include "iostream"

using namespace std;

int main(){

    int totalDays;
    cin >> totalDays;

    int years = 0, months = 0, days = 0;

    years = totalDays /  365;
    months = (totalDays % 365) / 30;
    days = totalDays % 365 % 30;

    cout << "Years: " << years << ", Months: " << months << ", Days: " << days << endl;
}
