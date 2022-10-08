// https://www.pbinfo.ro/probleme/1464/sir7
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long p, k;
  cin>>p>>k;

  long long s=k/2;
  if (k&1) s += k-1;
  else s += k-2;
  cout<<s<<p;
}