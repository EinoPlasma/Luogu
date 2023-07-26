#include <math.h>
#include <stdio.h>

#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int iter(vector<int> list) {
  int last = list[list.size()];
  if (last == 1) {
    std::cout << list[0] << endl;
  } else {
    for (int i = 2; i <= last / 2; i++) {
      vector<int> list_cpy = list;
      list_cpy.push_back(i);
      iter(list_cpy);
    }
  }
}
int main() {
  vector<int> list;
  int n;
  cin >> n;
  list.push_back(n);
}