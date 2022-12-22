// https://www.codechef.com/problems/KITCHENSPICE
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--){ 
    int x;
    cin>>x;

    if (x<4) cout<<"MILD";
    else if (x<7) cout<<"MEDIUM";
    else cout<<"HOT";
    cout<<endl;
  }
}