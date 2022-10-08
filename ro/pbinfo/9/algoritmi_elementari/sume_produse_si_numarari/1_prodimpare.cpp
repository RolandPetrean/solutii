// https://www.pbinfo.ro/probleme/3976/prodimpare
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  long long p=1;
  for (int i=1; i<=2*n; i+=2) p *= i;
  cout<<p;
}