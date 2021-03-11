#include<iostream>
using namespace std;

int main(){
  char C[10];
  for (int i = 0; i < 10; i++){//fills the array
    cin >> C[i];
  }

  int A[10];
  for (int i = 0; i < 10; i++){//converts '(' in 1 and ')' in -1
    if (C[i]=='(') A[i]=1;
    else A[i]=-1;
  }
  int k = 0;
  for (int i = 0; i < 10; i++){//sums and checks if it goes under 0
    k += A[i];
    if (k<0){
      cout << "non bilanciato";
      return 0;
    }
  }
  if(k>0)//checks if at the end it's balanced or not
    cout << "non bilanciato";
  else
    cout << "bilanciato";
}