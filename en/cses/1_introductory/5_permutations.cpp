// https://cses.fi/problemset/task/1070
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;
  
  if (n == 1) cout<<1;
  else if (n < 4) cout<<"NO SOLUTION";
  else {
    for (int i=2; i<=n; i+=2) cout<<i<<" ";
    for (int i=1; i<=n; i+=2) cout<<i<<" ";
  }
}