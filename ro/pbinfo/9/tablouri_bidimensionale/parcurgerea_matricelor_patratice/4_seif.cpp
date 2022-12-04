// https://www.pbinfo.ro/probleme/4163/seif
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("seif.in");
ofstream fout("seif.out");

const int MAXN=510;
int seif[MAXN][MAXN], op[MAXN/2];
vector<int> chenare[MAXN/2];

int modulo(int n, int m) {
  return (n+m)%m;
}

int main() {
  int n, t;
  fin>>n;

  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=n; ++j) fin>>seif[i][j];
  }

  for (int i=1; i<=n/2; ++i) {
    for (int j=i; j<=n-i+1; ++j) chenare[i].push_back(seif[i][j]);
    for (int j=i+1; j<=n-i+1; ++j) chenare[i].push_back(seif[j][n-i+1]);
    for (int j=n-i; j>=i; --j) chenare[i].push_back(seif[n-i+1][j]);
    for (int j=n-i; j>i; --j) chenare[i].push_back(seif[j][i]);
  }

  fin>>t;
  while (t--) {
    int c, p;
    char s;
    fin>>c>>p>>s;
    if (s=='S') op[c] = modulo(op[c]-p, chenare[c].size());
    else op[c] = modulo(op[c]+p, chenare[c].size());
  }

  for (int i=1; i<MAXN/2; ++i) {
    vector<int> aux=chenare[i];
    for (int j=0; j<aux.size(); ++j) {
      int poz=modulo(j+op[i], aux.size());
      chenare[i][poz] = aux[j];
    }
  }
  
  for (int i=1; i<=n/2; ++i) {
    int k=0;
    for (int j=i; j<=n-i+1; ++j) seif[i][j] = chenare[i][k++];
    for (int j=i+1; j<=n-i+1; ++j) seif[j][n-i+1] = chenare[i][k++];
    for (int j=n-i; j>=i; --j) seif[n-i+1][j] = chenare[i][k++];
    for (int j=n-i; j>i; --j) seif[j][i] = chenare[i][k++];
  }

  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=n; ++j) fout<<seif[i][j]<<" ";
    fout<<endl;
  }
}