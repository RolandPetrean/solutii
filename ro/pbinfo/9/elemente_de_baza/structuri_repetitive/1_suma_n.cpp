// https://www.pbinfo.ro/probleme/2/suma-n
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  
  long long s=0;
  for (int i=0; i<n; i++) {
    long long x;
    cin>>x;
    s += x;
  }
  cout<<s;
}