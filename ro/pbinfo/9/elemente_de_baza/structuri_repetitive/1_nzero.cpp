// https://www.pbinfo.ro/probleme/1565/nzero
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

long long powll(long long a, long long b) {
  long long r=1;
  for (int i=0; i<b; ++i) r *= a;
  return r;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n, a;
  cin>>n>>a;
  cout<<n*powll(10, a);
}