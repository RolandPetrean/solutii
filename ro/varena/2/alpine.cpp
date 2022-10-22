// https://www.varena.ro/problema/alpine
#include <bits/stdc++.h>
using namespace std;

ifstream fin("alpine.in");
ofstream fout("alpine.out");

int main() {
  int n, k, t1, t2, t3;
  fin>>n>>k>>t1>>t2>>t3;

  vector<int> d(n+1), s(n+1), ult(k+1);
  for (int i=1; i<=n; ++i) fin>>d[i];

  vector<int> cost(n+1), prev(n+1);
  for (int i=1; i<=n; ++i) {
    cost[i] = cost[i-1]+t1;
    prev[i] = 0;
    s[i] = ult[d[i]];

    int cnt=0;
    for (int j=i; j>=1; j = s[j]) {
      cnt += (d[j] == d[i]);

      int val = t2*cnt+t3 + t1*(i-j+1-cnt) + cost[j-1];
      if (val<cost[i]) {
        cost[i] = val;
        prev[i] = j;
      }
    }

    ult[d[i]] = i;
  }

  fout<<cost[n]<<endl;

  vector<int> sol(n+1);
  int i=n;
  while (i>0) {
    if (prev[i]==0) {
      sol[i] = 1;
      --i;
    } else {
      sol[i] = 23;
      for (int j=prev[i]; j<i; ++j) {
        if (d[i] == d[j]) sol[j] = 2;
        else sol[j] = 1;
      }
      i=prev[i]-1;
    }
  }

  for (int i=1; i<=n; ++i) fout<<sol[i];
}