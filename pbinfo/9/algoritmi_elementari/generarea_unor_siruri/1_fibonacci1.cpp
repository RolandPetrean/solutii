// https://www.pbinfo.ro/probleme/423/fibonacci1
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  ll f1=1, f2=1, aux;
  cout<<1<<" ";
  while (f2 <= n) {
    aux = f2;
    f2 += f1;
    f1 = aux;
    cout<<f1<<" ";
  }
}