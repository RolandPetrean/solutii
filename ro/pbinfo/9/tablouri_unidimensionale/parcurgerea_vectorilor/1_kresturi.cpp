// https://www.pbinfo.ro/probleme/4056/kresturi
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  for (int i=0; i<n; ++i) {
    int x;
    cin>>x;

    for (int j=0; j<x; ++j) {
      for (int k=0; k<x; ++k) {
        if (i&1) cout<<(j*k)%x<<" ";
        else cout<<(j+k)%x<<" ";
      }
      cout<<endl;
    }
  }
}