// https://www.pbinfo.ro/probleme/2624/invbits
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  long long k=log2(n);
  k = 1<<k;
  cout<<(n^(k|(k-1)));
}