// https://www.pbinfo.ro/probleme/55/minimpozitive
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long x, mini=LONG_LONG_MAX;
  while (cin>>x && x != 0) {
    if (x > 0) mini = min(mini, x);
  }
  if (mini == LONG_LONG_MAX) cout<<"NU EXISTA";
  else cout<<mini;
}