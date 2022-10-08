// https://www.pbinfo.ro/probleme/4146/sort10
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  vector<long long> e;
  for (int i=0; i<n; ++i) {
    long long x;
    cin>>x;
    if (x%10==0) e.push_back(x);
  }
  sort(e.begin(), e.end(), greater<long long>());

  if (e.size() == 0) cout<<"NU EXISTA";
  else for (auto v : e) cout<<v<<" ";
}