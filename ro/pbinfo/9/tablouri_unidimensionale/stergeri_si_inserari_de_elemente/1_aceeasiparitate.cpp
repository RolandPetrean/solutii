// https://www.pbinfo.ro/probleme/1365/aceeasi-paritate
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int last;
  cin>>last;
  cout<<last<<" ";

  while (--n) {
    int x;
    cin>>x;

    if (abs(x)%2 == abs(last)%2) cout<<(x+last)/2<<" ";
    cout<<x<<" ";
    last = x;
  }
}