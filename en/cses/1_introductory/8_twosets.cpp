// https://cses.fi/problemset/task/1092
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  if ((n*(n+1))/2 % 2 == 1) {
    cout<<"NO";
    return 0;
  }
  cout<<"YES"<<endl;

  vector<int> set1, set2;
  int set1sum=0, set2sum=0;
  for (int i=n; i>0; i--) {
    if (set1sum <= set2sum) {
      set1sum += i;
      set1.push_back(i);
    } else {
      set2sum += i;
      set2.push_back(i);
    }
  }

  cout<<set1.size()<<endl;
  for (auto val : set1) cout<<val<<" ";
  cout<<endl<<set2.size()<<endl;
  for (auto val : set2) cout<<val<<" ";
}