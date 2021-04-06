#include<iostream>
using namespace std;

void leggi(int*X, int nelem)
{
  for(int i=0; i < nelem; i++)
    cin >> X[i];
}

int& FETTE(int (*arr)[6][5], int size, char direction, int f, int k){
    if (direction == 'H') return arr[k/5][f][k%5];
    else if (direction == 'V') return arr[k/6][k%6][f];
}

main()
{
  int A[3][6][5], nelem;
  leggi(**A,90);
  bool stop=false;
  while(!stop)
    {
      char c;
      cin >> c;
      if(c =='S')
	    stop=true;
      else
    	{
	        int f,k;
	        cin>>f>>k;
	        cout << FETTE(A,3,c,f,k) << endl;
	    }
    }
}