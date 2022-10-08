// https://www.pbinfo.ro/probleme/119/2maxim
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  vector<long long> nr(n);
  for (int i=0; i<n; ++i) cin>>nr[i];
  sort(nr.begin(), nr.end(), greater<long long>());
  cout<<nr[0]<<" "<<nr[1];
}