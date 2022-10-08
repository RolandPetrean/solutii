// https://open.kattis.com/problems/basketballoneonone
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int p1=0, p2=0;
  char c;
  while (cin>>c) {
    int p;
    cin>>p;
    if (c=='A') p1 += p;
    else p2 += p;

    if (p1>=10 && p2>=10) {
      if (abs(p1-p2)>=2) break;
    }
    else if (p1 == 11 || p2 == 11) break;
  }

  if (p1>p2) cout<<"A";
  else cout<<"B";
}