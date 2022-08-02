// https://cses.fi/problemset/task/1754
// https://discuss.codechef.com/t/coin-piles-problem-from-cses/28647/6
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll t, a, b;
  cin>>t;

  for (ll i=0; i<t; i++) {
    cin>>a>>b;
    if ((a+b) % 3 == 0 && max(a, b) <= min(a, b) * 2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}