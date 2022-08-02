// https://www.pbinfo.ro/probleme/118/cifre2
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  ll c1, c2;
  while (n) {
    c2=c1;
    c1=n%10;
    n /= 10;
  }
  cout<<c1+c2;
}