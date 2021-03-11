#include<iostream>
using namespace std;

int main(){
  int A[4], B[4];
  bool ok = true;
  for (int i = 0; i < 4; i++){//fills first array in input order
    cin >> A[i];
  }
  for (int i = 3; i >= 0; i--){//fills second array in inverse input order
    cin >> B[i];
    if(A[i] != B[i]){//checks if arrays are identical
      ok = false;
      break;
    }
  }
  if(ok)
    cout << "e’ un palindromo"<<endl;
  else
    cout<< "non e’ un palindromo"<<endl;
}