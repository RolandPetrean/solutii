// https://www.pbinfo.ro/probleme/54/maxim
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long x;
  cin>>x;
  long long m=x;
  if (m == 0) {
    cout<<"NU EXISTA";
    return 0;
  }
  while (cin>>x && x != 0) {
    if (x > m) m = x;
  }
  cout<<m;
}