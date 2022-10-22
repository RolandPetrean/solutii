// https://codeforces.com/problemset/problem/520/B
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, m;
  cin>>n>>m;

  int btn=0;
  while (n!=m) {
    if (m<n || m&1) ++m;
    else m /= 2;

    ++btn;
  }

  cout<<btn;
}