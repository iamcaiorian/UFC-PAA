#include <iostream>

using namespace std;

void particao(int *L, int n) {
  int pivo = L[1];
  int i = 2, j = n;

  while (i < j) {
    while (L[i] <= pivo && i < n) {
      i++;
    }

    while (L[j] > pivo) {
      j--;
    }

    if (i < j) {
      swap(L[i], L[j]);
      i++;
      j--;
    }
  }
  
  swap(L[1], L[j]);

  for (int i = 1; i <= n; i++) {
    cout << L[i] << " ";
  }

  cout << endl;
}

int main() {
  int n;
  cin >> n;

  int L[n + 1];
  for (int i = 1; i <= n; i++) {
    cin >> L[i];
  }

  particao(L, n);

  return 0;
}
