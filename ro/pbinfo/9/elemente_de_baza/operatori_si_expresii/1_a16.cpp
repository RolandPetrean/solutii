// https://www.pbinfo.ro/probleme/2599/a16
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

long long powll(long long n, long long m) {
  long long r=1;
  for (int i=0; i<m; ++i) r *= n;
  return r;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long a;
  cin>>a;
  cout<<powll(a, 16);
}