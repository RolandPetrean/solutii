// https://www.pbinfo.ro/probleme/4127/siruri4
#include <bits/stdc++.h>
using namespace std;

ifstream fin("siruri.in");
ofstream fout("siruri.out");

// Verifica daca este posibila unirea a 2 numere
bool posibil(long long a, long long b) {
  while (b>9) b/= 10;
  if (a%10==b) return true;
  return false;
}

// Uneste 2 numere si sterge cifrele care se repeta
long long unire(long long a, long long b) {
  vector<int> cif;
  while (b) {
    cif.push_back(b%10);
    b /= 10;
  }
  while (a) {
    cif.push_back(a%10);
    a /= 10;
  }

  long long res=0;
  array<bool,10> rep{};
  for (int i=cif.size()-1; i>=0; --i) {
    if (rep[cif[i]]) continue;
    res = res*10+cif[i];
    rep[cif[i]] = true;
  }

  return res;
}

// Numarul de cifre a lui n
int nrcif(long long n) {
  if (n==0) return 1;
  int cnt=0;
  while (n) {
    ++cnt;
    n /= 10;
  }
  return cnt;
}

int main() {
  int c, n;
  fin>>c>>n;

  vector<int> v(n);
  for (int i=0; i<n; ++i) fin>>v[i];

  if (c==1) {
    int cnt=0;
    for (int x:v) {
      array<int,10> cif{};
      while (x) {
        ++cif[x%10];
        if (cif[x%10]>1) break; // // Daca sunt 2+ cifre de acelasi fel, iesim din bucla
        x /= 10;
      }
      if (cif[x%10]<2) ++cnt;
    }
    fout<<cnt;
  } else if (c==2) {
    int cnt=n;
    for (int i=0; i<n-1; ++i) {
      if (posibil(v[i], v[i+1])) {
        --cnt;
        // Nu e nevoie sa stergem efectiv elementul v[i], putem doar sa setam v[i+1], si
        // va avea acelasi efect.
        v[i+1] = unire(v[i], v[i+1]);
      }
    }
    fout<<cnt;
  } else {
    for (int i=0; i<n; ++i) {
      if (i<n-1 && posibil(v[i], v[i+1])) {
        v[i+1] = unire(v[i], v[i+1]);
        v[i] = -1; // La fel, nu stergem elementul, doar setam la -1.
      } else v[i] = unire(v[i], 0); // Unirea cu 0 sterge cifrele care se repeta.
    }

    int maxcif=0, ap=0;
    for (int i=0; i<n; ++i) {
      if (v[i] == -1) continue; // Daca e -1 atunci este "sters".

      int nrcf=nrcif(v[i]);
      if (nrcf > maxcif) {
        maxcif = nrcf;
        ap = 1;
      } else if (nrcf == maxcif) ++ap;
    }
    
    fout<<maxcif<<" "<<ap;
  }
}