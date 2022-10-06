// https://www.pbinfo.ro/probleme/347/summaxmin
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int mini=1000000, maxi=-1000000;
  while (n--) {
    int x;
    cin>>x;
    mini = min(mini, x);
    maxi = max(maxi, x);
  }
  cout<<mini+maxi;
}