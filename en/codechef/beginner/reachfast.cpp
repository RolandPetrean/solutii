// https://www.codechef.com/problems/REACHFAST
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int x, y, k;
    cin>>x>>y>>k;
    int z=abs(x-y);
    cout<<z/k+(z%k!=0)<<endl;
  }
}