// http://www.usaco.org/index.php?page=viewproblem2&cpid=1059
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  array<int,7> i{};
  for (int& x:i) cin>>x;
  sort(i.begin(), i.end());
  cout<<i[0]<<" "<<i[1]<<" "<<i[6]-i[0]-i[1];
}