// https://www.pbinfo.ro/probleme/66/numaruldecifre
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  ll s=0;
  if (n == 0) s=1;
  while (n) {
    ++s;
    n /= 10;
  }
  cout<<s;
}