#include <iostream>
using namespace std;

int main() {
int temp, u1 = 0, u2 = 0, u3 = 0, u4 = 0, u5 = 0;

  for (int i = 0; i < 20; i++) {
    cin >> temp;
    if(temp == 1){
        u1++;
    }else if(temp == 2){
        u2++;
    }else if(temp == 3){
        u3++;
    }else if(temp == 4){
        u4++;
    }else if(temp == 5){
        u5++;
    }
  }
  cout << u1 << endl;
  cout << u2 << endl;
  cout << u3 << endl;
  cout << u4 << endl;
  cout << u5 << endl;
  return 0;
}