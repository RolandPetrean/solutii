// https://www.codechef.com/problems/KITCHENTIME
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int x, y;
    cin>>x>>y;
    cout<<abs(x-y)<<endl;
  }
}