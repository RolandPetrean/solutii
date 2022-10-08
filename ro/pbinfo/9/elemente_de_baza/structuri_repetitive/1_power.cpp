// https://www.pbinfo.ro/probleme/1681/power
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

long long powll(long long a, long long b) {
  long long r=1;
  for (int i=0; i<b; ++i) {
    r *= a;
  }
  return r;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long a, b;
  cin>>a>>b;
  cout<<powll(a, b);
}