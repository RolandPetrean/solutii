// https://cses.fi/problemset/task/1068
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  while (n != 1) {
    if (n < 0) break;
    cout<<n<<" ";
    n = n&1 ? n*3+1 : n/2;
  }
  cout<<1;
}