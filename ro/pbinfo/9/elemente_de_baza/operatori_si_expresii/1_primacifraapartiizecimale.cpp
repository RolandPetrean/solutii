// https://www.pbinfo.ro/probleme/2603/primacifraapartiizecimale
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  double a;
  cin>>a;
  a *= 10;
  cout<<(ll) a%10;
}