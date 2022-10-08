// https://www.pbinfo.ro/probleme/346/maxandap
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int maxi=INT_MIN, ap=0;
  while (n--) {
    int x;
    cin>>x;
    if (x>maxi) {
      maxi = x;
      ap = 1;
    } else if (x==maxi) ++ap;
  }
  cout<<maxi<<" "<<ap;
}