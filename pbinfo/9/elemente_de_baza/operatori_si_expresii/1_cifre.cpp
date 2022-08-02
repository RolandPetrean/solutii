// https://www.pbinfo.ro/probleme/102/cifre
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;
  cout<<n%10+n/10%10;
}