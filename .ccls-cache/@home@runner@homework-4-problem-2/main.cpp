#include <iostream>

using namespace std;

int main() {
  int a, b;
  //cout << " " << a << "\n " << b;
  cin >> a >> b;
  

  if (a > b)
      cout << " The first number is greater. " << endl;

  else if (a < b)
      cout << " The first number is smaller. " << endl;

  else if (a = b)
      cout << " The numbers are equal. " << endl;

  return 0;
}