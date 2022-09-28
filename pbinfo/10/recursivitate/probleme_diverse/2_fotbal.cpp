// https://www.pbinfo.ro/probleme/1660/fotbal
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int scor(int a, int b) {
  if (a==0 && b==0) return 1;
  if (a<0 || b<0) return 0;
  return scor(a-1, b)+scor(a, b-1);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int a, b;
  cin>>a>>b;

  cout<<scor(a, b);
}