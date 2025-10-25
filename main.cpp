#include <iostream>
#include <climits>
using namespace std;

int main(){
    int N;
    cout << "Введите количество чисел: ";
    cin >> N;

    int max_number = INT_MIN;
    int max_index = -1;
    int sum = 0;
    int count = 0;

    for (int i = 0; i < N; i++) {
    int x;
    cout << "Введите число: ";
    cin >> x;

    if (x % 3 != 0 && x % 5 != 0 && x % 7!= 0) 
    {
        sum += x;
        count++;
        if ( x > max_number) {
            max_number = x;
            max_index = i + 1;
        } 
    }
}
 if (count == 0) {
 cout << "Нет чисел, удовлетворяющих условию" << endl;
 } else {
    cout << "Сумма чисел, не кратных 3, 5 и 7: " << sum << endl;
    cout << "Наибольшее из таких чисел: " << max_number << endl;
    cout << "Его номер в последовательности: " << max_index << endl;
 }  
 return 0;
}
