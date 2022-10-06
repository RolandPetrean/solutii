// https://www.pbinfo.ro/probleme/1358/minciuna
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int x, y;
  cin>>x>>y;

  if (min(x, y)+1==max(x, y) && min(x, y)%2==0) cout<<"Andrei e mai responsabil";
  else cout<<"minciuna";
}