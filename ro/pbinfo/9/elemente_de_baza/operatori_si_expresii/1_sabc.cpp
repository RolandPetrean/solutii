// https://www.pbinfo.ro/probleme/3978/sabc
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

long long s(long long a, long long b) {
  return b*(b+1)/2 - a*(a-1)/2;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long a, b, c;
  cin>>a>>b>>c;
  cout<<s(a, b)<<" "<<s(b, c)<<" "<<s(a, c);
}