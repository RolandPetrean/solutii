// https://www.varena.ro/problema/treasurehunt
#include <bits/stdc++.h>
using namespace std;

ifstream fin("treasurehunt.in");
ofstream fout("treasurehunt.out");

int pow10(int p) {
  int x=1;
  for (int i=0; i<p; ++i) x *= 10;
  return x;
}

int decode(int n) {
  int i=1;
  while (n>=4) {
    int p=pow10(i);
    int x = n%p;
    if (x<4) ++i;
    else {
      n /= p;
      n *= 10;
      n += x%4;
    }
  }
  return n;
}

int main() {
  int c;
  fin>>c;

  if (c==1) {
    int n, m, n1, m1;
    fin>>n>>m>>n1>>m1;
    vector<vector<int>> h(n, vector<int>(m)), f(n1, vector<int>(m1));
    for (int i=0; i<n; ++i) {
      for (int j=0; j<m; ++j) fin>>h[i][j];
    }
    for (int i=0; i<n1; ++i) {
      for (int j=0; j<m1; ++j) fin>>f[i][j];
    }

    for (int i=0; i<n-n1+1; ++i) {
      for (int j=0; j<m-m1+1; ++j) {
        bool ok=true;
        for (int x=0; x<n1 && ok; ++x) {
          for (int y=0; y<m1 && ok; ++y) {
            if (h[i+x][j+y] != f[x][y]) ok = false;
          }
        }

        if (ok) {
          fout<<i<<" "<<j;
          return 0;
        }
      }
    }
    fout<<-1;
  } else {
    int n, m, k;
    fin>>n>>m>>k;

    vector<vector<char>> dir(n, vector<char>(m, '\0'));
    vector<vector<int>> h(n, vector<int>(m));
    for (int i=0; i<n; ++i) {
      for (int j=0; j<m; ++j) fin>>h[i][j];
    }

    bool ciclu=false;
    int i=n/2, j=m/2;
    while (i>=0 && j>=0 && i<n && j<m && !ciclu && k) {
      if (dir[i][j] != '\0') ciclu = true;
      else {
        int d=decode(h[i][j]);
        if (d==0) {
          dir[i][j] = 'N';
          --i;
        } else if (d==1) {
          dir[i][j] = 'V';
          --j;
        } else if (d==2) {
          dir[i][j] = 'S';
          ++i;
        } else {
          dir[i][j] = 'E';
          ++j;
        }
        --k;
      }
    }

    if (c==2) {
      if (i<0 || j<0 || i>=n || j>=m) {
        fout<<"IESIRE DIN HARTA";
      } else if (ciclu) {
        fout<<"CICLU";
      } else {
        fout<<"JOC CASTIGAT";
      }
    } else {
      for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
          if (dir[i][j] == '\0') fout<<h[i][j]<<" ";
          else fout<<dir[i][j]<<" ";
        }
        fout<<endl;
      }
    }
  }
}