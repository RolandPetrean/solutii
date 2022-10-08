// https://www.pbinfo.ro/probleme/427/bazaminima
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int maxi=-1;
  for (int i=0; i<n; ++i) {
    int x;
    cin>>x;

    while (x) {
      if (x%10>maxi) maxi = x%10;
      x /= 10;
    }
  }
  cout<<maxi+1;
}