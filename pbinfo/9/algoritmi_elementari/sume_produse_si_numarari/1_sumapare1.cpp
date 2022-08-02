// https://www.pbinfo.ro/probleme/52/sumapare1
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
    if (x%2==0) s += x;
  }
  cout<<s;
}
