#include <iostream>
using namespace std;
int main() {
    int lista[10];
    for (int i = 0; i < 10; i++) {
        cin >> lista[i];
    }
    int a = 0;
    cin >> a;

    int copy[10];
    for (int i = 0; i < 10; i++) {
        copy[i] = lista[i];
    }
    int i = 0;

    while (lista[i] <= a) {
        lista[i] = copy[i];
        i++;
    }
    if (lista[i] == a) {
        while (lista[i] == a) {
            lista[i] = a;
            i++;
        }

        while (lista[i] > a) {
            lista[i] = copy[i - 1];
            i++;
        }
       
    } else {
        lista[i] = a;
        i++;
        while (i<10) {
            lista[i] = copy[i - 1];
            i++;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << lista[i] << " ";
    }
    return 0;
}
