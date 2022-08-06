// https://www.pbinfo.ro/probleme/2580/setbit0
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, b;
  cin>>n>>b;
  cout<<(n&~(1<<b));
}