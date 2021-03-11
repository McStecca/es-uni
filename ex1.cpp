#include <iostream>
using namespace std;

int main() {
int temp, neg = 0;

  for (int i = 0; i < 20; i++) {
    cin >> temp;//gets input
    if(temp<0)
      neg++;
  }
  cout << (20 - neg) << ' ';//prints positive numbers
  cout << neg;//prints negative numbers
  return 0;
}
