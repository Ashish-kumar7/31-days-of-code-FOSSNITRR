#include <bits/stdc++.h>

using namespace std;

int main() {
  int g;
  cin >> g;
  while (g--) {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int cnt[26];
    memset(cnt, 0, sizeof(cnt));
    bool hasEmptyCell = false;
    bool hasUnhappyLadybugs = false;

    for (int i = 0; i < str.size(); i++) {

      if (str[i] >= 'A' && str[i] <= 'Z') {
        cnt[str[i] - 'A']++;
        bool happy = false;
        if (i + 1 < str.size() && str[i + 1] == str[i]) {
          happy = true;
        }
        if (i - 1 >= 0 && str[i - 1] == str[i]) {
          happy = true;
        }
        if (!happy) {
          hasUnhappyLadybugs = true;
        }
      } 
      else {
        hasEmptyCell = true;
      }
    }

    if (!hasUnhappyLadybugs) {
      cout << "YES" << endl;
    }
     else {
      if (!hasEmptyCell) {
        cout << "NO" << endl;
      } 
      else {
        bool canAdjust = true;
        for (int i = 0; i < 26; i++) {
          if (cnt[i] == 1) canAdjust = false;
        }
        cout << (canAdjust ? "YES" : "NO") << endl;
      }
    }
  }
  return 0;
}