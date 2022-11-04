// https://infoarena.ro/problema/cmmdc2
#include <bits/stdc++.h>
using namespace std;

ifstream fin("cmmdc2.in");
ofstream fout("cmmdc2.out");

const int N=1000005;
int a[N];

int main() {
  int n, k;
  fin>>n>>k;

  for (int i=0; i<n; ++i) {
    int x;
    fin>>x;
    ++a[x];
  }

  int ans=0;
  for (int i=N-1; i>0; --i) {
    int s=0;
    for (int j=i; j<N; j+=i) {
      s += a[j];
    }
    if (s>=k) {
      ans = i;
      break;
    }
  }

  fout<<ans<<endl;
  int maxx=(N/ans)*ans;
  for (int i=maxx; i>=0 && k; i-=ans) {
    for (int j=0; j<a[i]; ++j) {
      fout<<i<<" ";
      --k;
      if (!k) break;
    }
  }
}