// https://www.pbinfo.ro/probleme/97/anagrame
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string a, b;
  cin>>a>>b;
  
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  cout<<(a==b);
}