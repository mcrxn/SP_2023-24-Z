//
// Created by filip on 3/9/2025.
//
/*
 * Од стандарден влез се чита цел број N.
 * Потоа се вчитуваат N низи од цели броеви (со максимална должина од 100 елементи),
 * при што за секоја прво се внесува должината на низата, а потоа сите елементи на низата.
 * Да се напише програма која за секоја низа ќе го испечати процентот на огледални еднакви броеви во низата.
 * Огледални броеви во низа се првиот и последниот, вториот и претпоследниот итн.
 * Доколку низата има непарен број на елементи, средниот елемент е и огледален и еднаков.
пример влез:
 3
 5 7 2 5 2 8
 6 1 2 3 3 1 1
 8 8 4 8 3 2 1 4 8

пример излез и објаснување:
 60.00% (2,2,5 се огледални и еднакви -> 3/5 елементи -> 60%)
 66.67% (1,1,3,3 се огледални и еднакви -> 4/6 елементи -> 66.67%)
 50.00% (8,8,4,4 се огледални и еднакви -> 4/8 елементи -> 50.00%)
------------------------------------------------------------------------------------------------------------------------

 *From standard input, a whole number N is read.
 * Then, N arrays of integers are read (each with a maximum length of 100 elements).
 * For each array, the length of the array is first entered, followed by all the elements of the array.
 * Write a program that, for each array, will print the percentage of mirrored equal numbers in the array.
 * Mirrored numbers in an array are the first and last, second and second-to-last, and so on.
 * If the array has an odd number of elements, the middle element is also mirrored and equal.

Example input:
 3
 5 7 2 5 2 8
 6 1 2 3 3 1 1
 8 8 4 8 3 2 1 4 8

Example output and explanation:
 60.00% (2, 2, 5 are mirrored and equal -> 3/5 elements -> 60%)
 66.67% (1, 1, 3, 3 are mirrored and equal -> 4/6 elements -> 66.67%)
 50.00% (8, 8, 4, 4 are mirrored and equal -> 4/8 elements -> 50.00%)
*/

#include "iostream"

using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[100];
    for (int i = 0; i < N; i++) {
        int m, counter = 0;
        double percentage = 0.0;
        cin >> m;

        if(m % 2 != 0) {
            counter = 1;
        }

        for (int j = 0; j < m; j++) {
            int tmp;
            cin >> tmp;
            arr[j] = tmp;
        }

        for (int j = 1; j <= m / 2; j++) {
            if (arr[j - 1] == arr[m - j]){
                counter+= 2;
            }
        }
        percentage = ((double)counter / m) * 100;
        cout << percentage << "%" << endl;


    }

}