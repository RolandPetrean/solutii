// https://www.pbinfo.ro/probleme/3254/prod-pi
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int maxi=0, mini=9;
  while (n) {
    if ((n%10)&1) mini = min(mini, n%10);
    else maxi = max(maxi, n%10);
    n /= 10;
  }
  cout<<mini*maxi;
}