// https://www.pbinfo.ro/probleme/1453/stergere1
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  while (n--) {
    int x;
    cin>>x;
    if (x&1) cout<<x<<" ";
  }
}