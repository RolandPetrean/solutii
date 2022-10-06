// https://www.pbinfo.ro/probleme/833/varste-copii
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll a, b;
  cin>>a>>b;
  if (a == b) cout<<"Copiii au varste egale";
  else if (a > b) cout<<"Primul copil este mai mare cu "<<a-b<<" ani";
  else cout<<"Al doilea copil este mai mare cu "<<b-a<<" ani";
}