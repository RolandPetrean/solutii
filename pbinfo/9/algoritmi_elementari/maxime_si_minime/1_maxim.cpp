// https://www.pbinfo.ro/probleme/54/maxim
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll x;
  cin>>x;
  ll m=x;
  if (m == 0) {
    cout<<"NU EXISTA";
    return 0;
  }
  while (cin>>x && x != 0) {
    if (x > m) m = x;
  }
  cout<<m;
}