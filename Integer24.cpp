#include <iostream>
using namespace std;

int main() {
    int K;

    // Введення значення K
    cout << "Enter value K (from 1 to 365): ";
    cin >> K;

    // Понеділок відповідає 1, тому ми віднімаємо 1 від K
    K = K - 1;

    // Визначення номера дня тижня
    int day_of_week = K % 7;

    // Виведення результату
    cout << "Day number " << K + 1 << "-th day of the year: " << day_of_week << endl;

    return 0;
}