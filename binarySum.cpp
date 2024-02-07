#include<algorithm>
int last(string a) {
  if (a.size() == 0) {
    return 0;
  }
  if (a.back() == '0') {
    return 0;
  } else {
    return 1;
  }
}
void remove(string &a) {
  if (a.size() > 0) {
    a.pop_back();
  }
}
char insert(int d) {
  if (d == 0) {
    return '0';
  } else {
    return '1';
  }
}

string addBinaryString(string &a, string &b, int n, int m) {
  int c = 0;
  string res = "";
  while (a.size() > 0 || b.size() > 0) {
    int sum = last(a) + last(b) + c;
    int d = sum % 2;
    c = sum / 2;
    res.push_back(insert(d));
    remove(a);
    remove(b);
  }
  if (c > 0) {
    res.push_back(insert(c));
  }

  reverse(res.begin(), res.end());
  return res;
}