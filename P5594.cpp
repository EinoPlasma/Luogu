#include <math.h>
#include <stdio.h>

#include <cstring>
#include <iostream>
#include <string>
using namespace std;
int main() {
  int n, m, k;
  std::cin >> n >> m >> k;
  int student[n][k + 1] = {0};
  memset(student, 0, sizeof(student));
  // read schedules
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int day;
      std::cin >> day;
      student[i][day] = j + 1;
      // std::cout << i << " " << day << " " << student[i][day] << endl;
    }
  }

  for (int day = 1; day <= k; day++) {
    // std::cout << day << " " << k << endl;
    int exam_today[m + 1];
    memset(exam_today, 0, sizeof(exam_today));

    for (int i = 0; i < n; i++) {
      // std::cout << i << " " << day << " " << student[i][day] << endl;

      exam_today[student[i][day]] = 1;

      // std::cout << student[i][day] << " " << endl;
    }

    // std::cout << exam_today[1] << " " << exam_today[2] << " " <<
    // exam_today[3]
    //<< std::endl;

    int exam_count = 0;
    for (int i = 1; i < m + 1; i++) {
      exam_count += exam_today[i];
    }
    cout << exam_count << " ";
  }
}