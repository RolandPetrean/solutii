// https://www.pbinfo.ro/probleme/469/interval2
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll a, b, x;
  cin>>a>>b>>x;
  if (x >= a && x <= b) cout<<"DA";
  else cout<<"NU";
}