#include<iostream>
using namespace std;

int leggi(int*X, int dimX){//gets the input
    int n;
    do{
        cin >> n;//dimension of the array
    } while (!(n < dimX));//dimension must be <30

    for (int i = 0; i < n; i++)
    {
        cin >> X[i];//every array single element
    }
    return n;
};


void stampa(int*X, int lim){//prints the array
    for (int i = 0; i < lim; i++){
        cout << X[i] << " ";
    }
    cout << endl;
};

main()
{
    int A[30];
    int nelemA= leggi(A,30);
    //PRE=(0<nelemA <=30) &&(A[0..nelemA-1 =  A_orig]

    int y;
    cin >> y;//pop this values
    int k = 0;
    for (int i = 0; i < (nelemA - k); i++){
        if (A[i] == y){//if element is y
            k++;
        }
        A[i] = A[i+k];//sums k to i, to skip y
        if(A[i]==y) {i--;}//if it skips but there is another y it redoes the same cycle
    }
    stampa(A,(nelemA-k));//prints
}
//POST=(A[0..okFino-1] e A_orig senza y)
