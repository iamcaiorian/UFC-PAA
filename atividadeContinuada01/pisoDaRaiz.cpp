#include "iostream"

using namespace std;

int pisoDaRaiz(int n) {
    int i = 1;
    while (i * i <= n) {
        i++;
    }
    return i - 1;
}

int main() {
    int n;

    while (true) {
        cin >> n;
        int num = pisoDaRaiz(n);
        cout << num << endl;

        if (n == 0) {
            break;
        }
    }

    return 0;
}