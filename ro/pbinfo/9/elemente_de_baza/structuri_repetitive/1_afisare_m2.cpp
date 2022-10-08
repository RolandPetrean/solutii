// https://www.pbinfo.ro/probleme/3984/afisare-m2
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long a, b;
  cin>>a>>b;
  for (int i=a; i<=a*b; i+=a) cout<<i<<" ";
}