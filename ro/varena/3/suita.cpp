// https://www.varena.ro/problema/suita
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

void get_int(int* int_input) { // parsing
  *int_input=0;
  char next_char=0;
  while( next_char < '0' || next_char > '9' ) next_char = getchar_unlocked();
  while( next_char >= '0' && next_char <= '9' ) {
    (*int_input) = ((*int_input)<<1) + ((*int_input)<<3) + next_char - '0';
    next_char = getchar_unlocked();
  }
}

inline int gauss(int a, int k) {
  return 1LL*(2*a-k+1)*k/2;
}

int x[400001];

int main() {
  freopen("suita.in", "r", stdin);
  freopen("suita.out", "w", stdout);

  int n, k;
  get_int(&n);
  get_int(&k);
  
  int s=0;
  deque<int> maxi{};
  for (int i=0; i<k; ++i) {
    get_int(&x[i]);
    while (!maxi.empty() && x[i]>x[maxi.back()]) maxi.pop_back();
    maxi.push_back(i);
    s += x[i];
  }
  
  int t=(s==gauss(x[maxi.front()], k));
  for (int i=k; i<n; ++i) {
    get_int(&x[i]);

    while (!maxi.empty() && maxi.front()<=i-k) maxi.pop_front();
    while (!maxi.empty() && x[i]>x[maxi.back()]) maxi.pop_back();
    maxi.push_back(i);

    s = s-x[i-k]+x[i];
    t += (s==gauss(x[maxi.front()], k));
  }
  cout<<t;
}