// https://www.pbinfo.ro/probleme/408/divizorii-oglinditului
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, ogl=0;
  cin>>n;

  while (n) {
    ogl = ogl*10+n%10;
    n /= 10;
  }

  int s=0;
  for (int d=1; d*d<=ogl; ++d) {
    if (ogl%d==0) {
      ++s;
      if (ogl/d != d) ++s;
    }
  }
  cout<<s;
}