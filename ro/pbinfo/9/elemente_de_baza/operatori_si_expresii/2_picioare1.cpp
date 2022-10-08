// https://www.pbinfo.ro/probleme/176/picioare1
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long c, p;
  cin>>c>>p;
  long long o=(p-2*c)/2;
  cout<<c-o<<" "<<o;
}