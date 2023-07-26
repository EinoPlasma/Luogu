#include <math.h>
#include <stdio.h>

#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  long long a1, a2, n, d;
  cin >> a1 >> a2 >> n;
  d = a2 - a1;

  long long sum = a1;
  long long an = a1;
  for (long long i = 2; i < n + 1; i++) {
    an += d;
    sum += an;
    // cout << i << " " << an << endl;
  }

  cout << sum;
}