// https://infoarena.ro/problema/indep
// 20p
#include <bits/stdc++.h>
using namespace std;

ifstream fin("indep.in");
ofstream fout("indep.out");

const int N=501, VMAX=1001, NC=200;
int n;
short dp[2][VMAX][NC], unu[NC]={1,1};

void copie(short dest[NC], short sursa[NC]) {
  for (int i=0; i<=sursa[0]; ++i) dest[i] = sursa[i];
}

void suma(short s[NC], short a[NC], short b[NC]) {
  int t=0, i=1;
  while (i<=a[0] || i<=b[0] || t>0) {
    int aux = a[i]+b[i]+t;
    s[i] = aux%10;
    t = aux/10;
    ++i;
  }
  s[0] = i-1;
}

void afis(short nr[NC]) {
  for (int i=nr[0]; i>0; --i) fout<<nr[i];
}

int main() {
  int n;
  fin>>n;

  for (int i=1; i<=n; ++i) {
    int v_i;
    fin>>v_i;
    if (i==1) {
      dp[1][v_i][0] = dp[1][v_i][1] = 1;
      continue;
    }

    int i_c=i%2, i_a=1-i_c;
    for (int j=1; j<=VMAX; ++j) copie(dp[i_c][j], dp[i_a][j]);
    for (int j=1; j<=VMAX; ++j) {
      int d=__gcd(v_i, j);
      suma(dp[i_c][d], dp[i_c][d], dp[i_a][j]);
    }
    
    suma(dp[i_c][v_i], dp[i_c][v_i], unu);
  }

  n %= 2;
  afis(dp[n][1]);
}