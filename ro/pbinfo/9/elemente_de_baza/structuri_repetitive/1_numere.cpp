// https://www.pbinfo.ro/probleme/339/numere
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  for (int i=0; i<n; ++i) {
    int x;
    cin>>x;
    if (x%2==0) {
      cout<<x;
      return 0;
    }
  }
  cout<<"IMPOSIBIL";
}