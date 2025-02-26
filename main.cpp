#include <iostream>
using namespace std;

int main() {
    
    int n;

    cout << "quanti atleti ci sono ?" << endl;
    cin >> n;
    string a[n];
    string naz[n];
    double t[n];
    int i;

    i = 0;
    while (i < n) {
        cout << "quale è il" << i + 1 << "nome?" << endl;
        cin >> a[i];
        cout << "quale è la " << i + 1 << "nazionalità?" << endl;
        cin >> naz[i];
        cout << "quale è il" << i + 1 << "tempo?" << endl;
        cin >> t[i];
        i = i + 1;
    }
    double min;
    int imin;

    i = 0;
    min = t[i];
    imin = i;
    while (i < n) {
        if (t[i] < min) {
            min = t[i];
            imin = i;
        }
        i = i + 1;
    }
    cout << "il tempo più basso è" << min << endl;
    double max;
    int imax;

    i = 0;
    max = t[i];
    imax = 0;
    while (i < n) {
        if (t[i] > max) {
            max = t[i];
            imax = i;
        }
        i = i + 1;
    }
    cout << "il tempo più alto è" << max << endl;
    double somma;
    double media;

    i = 0;
    somma = 0;
    while (i < n) {
        somma = somma + t[i];
        i = i + 1;
    }
    media = somma / n;
    cout << "la media è" << media << endl;
    i = 0;
    while (i < n) {
        if (t[i] <= media) {
            cout << "il" << i + 1 << "atleta che si chiama" << a[i] << "e è di nazionalità" << naz[i] << "il suo tempo è" << t[i] << "ha stabilito un tempo maggiore di quello della media dei tempi" << endl;
        }
        i = i + 1;
    }
    double tempo;

    cout << " inserisci un tempo" << endl;
    cin >> tempo;
    i = 0;
    while (i < n) {
        if (t[i] <= tempo) {
            cout << "il" << i + 1 << "atleta che si chiama" << a[i] << " e ha nazionalità" << naz[i] << "e il suo tempo è" << t[i] << "ha avuto un tempo minore del tempo dato" << endl;
        }
    }
    
}


