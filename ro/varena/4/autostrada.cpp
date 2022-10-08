// https://www.varena.ro/problema/autostrada
#include <bits/stdc++.h>
#define mod 1000000007

std::ifstream fin("autostrada.in");
std::ofstream fout("autostrada.out");

int horizontal[2001][2001]{}, vertical[2001][2001]{};
bool up[2001][2001]{}, right[2001][2001]{}, down[2001][2001]{}, left[2001][2001]{};

int main() {
  int n, k, l, c, cz, ct, cp;
  fin>>n>>k>>l>>c>>cz>>ct>>cp;
  --l; --c;

  for (int i=0; i<k; ++i) {
    int dir, p;
    fin>>dir>>p;

    if (dir==0) {
      ++vertical[l-p+1][c];
      --vertical[l+1][c];
      l -= p;
    } else if (dir==1) {
      ++horizontal[l][c+1];
      --horizontal[l][c+p+1];
      c += p;
    } else if (dir==2) {
      ++vertical[l+1][c];
      --vertical[l+p+1][c];
      l += p;
    } else if (dir==3) {
      ++horizontal[l][c-p+1];
      --horizontal[l][c+1];
      c -= p;
    }
    if (l<0 || c<0 || l>=n || c>=n) {
      fout<<"TRASEU INVALID\n"<<i+1;
      return 0;
    }
  }

  for (int i=0; i<n; ++i) {
    for (int j=0; j<n; ++j) {
      if (j>0) {
        horizontal[i][j] += horizontal[i][j-1];
        vertical[j][i] += vertical[j-1][i];
      }
      if (horizontal[i][j]) {
        if (j>0) right[i][j-1] = 1;
        left[i][j] = 1;
      }
      if (vertical[j][i]) {
        if (j>0) down[j-1][i] = 1;
        up[j][i] = 1;
      }
    }
  }

  int total=0;
  for (int i=0; i<n; ++i) {
    for (int j=0; j<n; ++j) {
      if (up[i][j] && right[i][j] && down[i][j] && left[i][j]) total += cp;
      else if ((left[i][j] && right[i][j] && (up[i][j] || down[i][j])) || (up[i][j] && down[i][j] && (right[i][j] || left[i][j]))) total += ct;
      else if (up[i][j] || right[i][j] || down[i][j] || left[i][j]) total += cz;
    }
  }
  fout<<"TRASEU VALID\n"<<total;
}