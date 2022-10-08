// https://www.pbinfo.ro/probleme/491/suma2
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int pp=-1, up;
  vector<int> v(n);
  for (int i=0; i<n; ++i) {
    cin>>v[i];
    if (v[i]%2==0) {
      if (pp==-1) pp = i;
      up = i;
    }
  }

  if (pp==-1) {
    cout<<"NU EXISTA";
    return 0;
  }

  int s=0;
  for (int i=pp; i<=up; ++i) s += v[i];
  cout<<s;
}