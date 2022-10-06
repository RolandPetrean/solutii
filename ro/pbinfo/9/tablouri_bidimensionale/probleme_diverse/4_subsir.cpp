// https://www.pbinfo.ro/probleme/4136/subsir
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("subsir.in");
ofstream fout("subsir.out");

int main() {
  int c, n, nr;
  fin>>c>>n;
  vector<int> s(n);
  for (int i=0; i<n; ++i) fin>>s[i];
  fin>>nr;

  vector<vector<int>> p(10, vector<int>(n+2)); // p[i][j] - first i after j
  for (int i=0; i<10; ++i) {
    p[i][n-1] = s[n-1] == i ? n-1 : n;
    p[i][n] = p[i][n+1] = n;
    for (int j=n-2; j>=0; --j) {
      p[i][j] = s[j] == i ? j : p[i][j+1];
    }
  }
  
  // q[i] - min prefix where i is in s
  // pf[i] - how many numbers up to i are in s
  vector<int> q(10000001), pf(10000001);
  for (int i=0; i<=10000000; ++i) {
    q[i] = i/10 ? p[i%10][q[i/10]+1] : p[i%10][0];
    pf[i] = i>0 ? pf[i-1] + (q[i] < n) : (q[i] < n);
  }

  for (int i=0; i<nr; ++i) {
    if (c == 1) {
      int x, j;
      fin>>x>>j;
      --j;

      fout<<(q[x] <= j)<<endl;
    } else {
      int a, b;
      fin>>a>>b;

      fout<<(a == 0 ? pf[b] : pf[b]-pf[a-1])<<endl;
    }
  }
}