// https://www.pbinfo.ro/probleme/503/alternanta
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  vector<long long> e(n);
  for (int i=0; i<n; ++i) cin>>e[i];
  for (int i=0; i<n-1; ++i) {
    if (e[i] != 0 && e[i+1] != 0) {
      cout<<"NU";
      return 0;
    }
  }
  cout<<"DA";
}