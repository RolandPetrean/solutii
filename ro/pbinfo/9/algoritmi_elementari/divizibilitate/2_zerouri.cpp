// https://www.pbinfo.ro/probleme/306/zerouri
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int p2=0, p5=0;
  while (n--) {
    int x;
    cin>>x;

    for (int d=2; d*d<=x && d<=5; ++d) {
      if (x%d==0) {
        while (x%d==0) {
          if (d==2) ++p2;
          else if (d==5) ++p5;
          x /= d;
        }
      }
    }
    if (x!=0) {
      if (x==2) ++p2;
      else if (x==5) ++p5;
    }
  }
  cout<<min(p2, p5);
}