#include <iostream>
using namespace std;
int main() {
    int lista[10];
    for (int i = 0; i < 10; i++) {
        cin >> lista[i];
    }
    int a = 0;
    cin >> a;

    /* copio la lista in ingresso*/
    int copy[10];
    for (int i = 0; i < 10; i++) {
        copy[i] = lista[i];
    }
    int i = 0;

    /* gli i-esimi valori < di a rimangono nella loro posizione*/
    while (lista[i] <= a) {
        lista[i] = copy[i];
        i++;
    }
    /* se l'i-esimo valore della lista è uguale ad a, inserisco a mentre quelli successivi prendono il
     * valore dell'indice precedente dalla lista copy*/
    if (lista[i] == a) {
        while (lista[i] == a) {
            lista[i] = a;
            i++;
        }

        while (lista[i] > a) {
            lista[i] = copy[i - 1];
            i++;
        }
        /* se invece a>lista [i] ma a non è nella lista, l'i-esimo numero assume il valore di a,
         * quelli successivi prendono il valore dell'indice precedente dalla lista copy*/
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
