#include <iostream>
#include <Windows.h> 

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    std::cout << "введите число: ";
    std::cin >> n;

    int arr[3][3];

    arr[0][0] = n;

    for (int i = 1; i < 3 * 3; i++) {
        arr[i / 3][i % 3] = arr[(i - 1) / 3][(i - 1) % 3] * 2;
    }

    std::cout << "созданный массив:" << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << arr[i][j] << " ";
        }
    }

    int q;
    std::cout << "введите число: ";
    std::cin >> q;

    int ar[3][3];

    ar[0][0] = q;

    for (int i = 1; i < 3 * 3; i++) {
        ar[i / 3][i % 3] = ar[(i - 1) / 3][(i - 1) % 3] + 1;
    }

    std::cout << "созданный массив:" << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << ar[i][j] << " ";
        }
    }

}