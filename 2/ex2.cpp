#include<iostream>
using namespace std;

int leggi(int*X, int dimX){
    int n;
    do{
        cin >> n;
    } while (!(n < dimX));

    for (int i = 0; i < n; i++)
    {
        cin >> X[i];
    }
    return n;
};


void stampa(int*X, int lim){
    for (int i = 0; i < lim; i++){
        cout << X[i] << " ";
    }
    cout << endl;
};


void sort(int*X, int lim){
    int temp;
    for (int i = 1; i < lim; i++){
        if(X[0]!=X[i]){
            for (int j = lim-1; j > i; j--){
                if(X[j] != X[i]){
                    temp = X[i];
                    X[i] = X[j];
                    X[j] = temp;
                    break;
                }
            }
        }
    }
}

main(int argc, char const *argv[])
{
    int A[30];
    int nelemA= leggi(A,30);
    //PRE=(0<nelemA <=30) &&(A[0..nelemA-1 =  A_orig]
    sort(A, nelemA);

    stampa(A, nelemA);

}
