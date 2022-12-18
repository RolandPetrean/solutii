// https://codeforces.com/contest/1512/problem/G
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

const int MAXN=10000005; // 10^7+5
int d[MAXN], minres[MAXN];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  for (int i=1; i<MAXN; ++i) {
    for (int j=i; j<MAXN; j+=i) d[j] += i;
    if (d[i]<MAXN && !minres[d[i]]) minres[d[i]] = i;
  }

  while (t--) {
    int n;
    cin>>n;
    cout<<(minres[n]?minres[n]:-1)<<endl;
  }
}