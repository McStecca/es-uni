#include<iostream>
using namespace std;

int main(){
  int A[4], temp;
  bool ok = true;
  for (int i = 0; i < 4; i++){//fills first array in input order
    cin >> A[i];
  }
  for (int i = 3; i >= 0; i--){//reads in inverse input order
    cin >> temp;
    if(A[i] != temp){//checks if input is identical
      ok = false; 
      break;
    }
  }
  if(ok)
    cout << "e’ un palindromo"<<endl;
  else
    cout<< "non e’ un palindromo"<<endl;
}