// https://cses.fi/problemset/task/2428
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, k;
  cin>>n>>k;

  int l=0, d=0, t=0;;
  map<int,int> m;
  vector<int> x(n);
  for (int i=0; i<n; ++i) {
    cin>>x[i];

    if (m[x[i]]++ == 0) ++d;
    for (; d>k; ++l) {
      --m[x[l]];
      if (m[x[l]] == 0) --d; 
    }
    t += i-l+1;
  }
  cout<<t;
}