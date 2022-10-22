// https://www.varena.ro/problema/skyline
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("skyline.in");
ofstream fout("skyline.out");

// h - inaltime
// l - lungime
struct Dreptunghi {
  long long h, l;
};

int main() {
  int n;
  fin>>n;

  long long maxarea=0;
  stack<Dreptunghi> s; // Stiva cu inaltimi crescatoare
  for (int i=0; i<n; ++i) {
    Dreptunghi d;
    fin>>d.h>>d.l;

    // Cand inaltimea noii cladiri este mai mica decat inaltimea cladirii de pe stiva,
    // inseamna ca putem sa calculam aria maxima a acelei sectiuni, deoarece orice cladire care
    // ar putea fi adaugata nu ar schimba aria maxima.

    // La final, va fi suma tuturor lungimilor cladirilor mai mari decat noua cladire
    long long lungime=0;
    while (!s.empty() && s.top().h>d.h) {
      // Inaltimile sunt ordonate crescator, deci cand ajungem la o anumita cladire, aria
      // maxima va fi (lungimea de pana atunci) * (inaltimea cladirii)
      lungime += s.top().l;
      maxarea = max(maxarea, s.top().h*lungime);
      s.pop();
    }

    // Deoarece am scos celelalte cladiri din stiva, adaugam lungimea lor la noua cladire.
    // Inaltimea ramane la fel, pentru ca daca ar veni o cladire cu inaltime mai mare, oricum
    // nu ar putea forma un dreptunghi la acea inaltime.
    d.l += lungime;
    s.push({d.h, d.l}); // Adaugam pe stiva noua cladire.
  }

  // La final, trebuie sa calculam aria cladirilor ramase.
  int lungime=0;
  while (!s.empty()) {
    lungime += s.top().l;
    maxarea = max(maxarea, s.top().h*lungime);
    s.pop();
  }

  fout<<maxarea;
}