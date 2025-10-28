#include <iostream>
#include <windows.h>
using namespace std;

// Функція, що перевіряє, чи є число простим
bool isPrime(int n) {
    if (n <= 1) return false; // 0, 1 і від’ємні не є простими

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false; // знайдено дільник — не просте
    }
    return true; // дільників не знайдено — число просте
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
    cout << "Введіть число: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " — просте число." << endl;
    else
        cout << num << " — не є простим числом." << endl;

    return 0;
}
