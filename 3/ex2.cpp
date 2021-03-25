#include<iostream>
using namespace std;

int leggi(int*X, int dimX)
{
  int k,i=0;
  bool ok=false;
  while(!ok)
    {
        cin >> k;
        if(0<k && k<dimX)
	    ok=true;
    }
  
  while(i<k)
    {
      cin >>X[i];
      i=i+1;
    }
  return k;
}

void stampa(int*X, int lim)
{
  int i=0;
  while(i < lim)
    {
      cout<<X[i]<<' ';
      i=i+1;
    }
  cout<<endl;
}

main(){
    int A[30];
    int elemA=leggi(A,30);
    //da fare
    int c = elemA, k = 0;
    while(k != c){
        k = c;
        for (int i = 0; i < c; i++){
            for (int j = i+1; j < c; j++){
                if(A[i] == A[j]){
                    c--;
                    for (int n = j; n < c; n++){
                        A[n] = A[n+1];
                    }
                }
            }
        }
    }
    stampa(A,c);
}