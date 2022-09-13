#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

void func(int *mass[]) {
    int x1, y1, x2, y2;
    int a = 2, b = 2;
    cout << "Введите координаты х1,у1" << endl;
    cout << "Введите вторые координаты х2,у2" << endl;
    cin >> x1 >> y1;
    cin >> x2 >> y2;


    if (mass[x1][y1] == mass[x2][y2]) {
        cout << "Yes";

        Beep(233, 100); Sleep(125);
        Beep(294, 100); Sleep(125);
        Beep(349, 100); Sleep(125);
        Beep(466, 100); Sleep(125);
        Beep(587, 100); Sleep(125);
        Beep(698, 100); Sleep(125);
        Beep(932, 100); Sleep(575);
        Beep(932, 100); Sleep(125);
        Beep(932, 100); Sleep(125);
        Beep(932, 100); Sleep(125);
        Beep(1046, 100);
    }
    else {
        cout << "No";
        float B = 493.88,
            D = 587.32,
            A = 440.00,
            G = 392.00;

        Beep(B, 300);
        Beep(D, 300);
        Beep(B, 300);
        Beep(D, 600);

        Beep(B, 300);
        Beep(A, 300);
        Beep(B, 600);

        Beep(A, 300);
        Beep(G, 300);
        Beep(A, 600);
        Beep(G, 600);
    }

}
int main() {

}