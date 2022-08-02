// https://cses.fi/problemset/task/1068
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

  while (n != 1) {
    if (n < 0) break;
    cout<<n<<" ";
    n = n&1 ? n*3+1 : n/2;
  }
  cout<<1;
}