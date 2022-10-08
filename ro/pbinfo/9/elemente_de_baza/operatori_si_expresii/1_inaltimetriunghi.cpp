// https://www.pbinfo.ro/probleme/3551/inaltimetriunghi
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int c1, c2, i;
  cin>>c1>>c2>>i;

  float h = (float) c1*c2/i;
  cout<<(int)h<<"."<<(int) (h*10)%10<<(int) (h*100)%10;
}