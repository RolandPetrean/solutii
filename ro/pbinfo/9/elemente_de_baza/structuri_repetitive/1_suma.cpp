// https://www.pbinfo.ro/probleme/51/suma
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll x=1, s=0;
  while (x != 0) {
    cin>>x;
    s += x;
  }
  cout<<s;
}
