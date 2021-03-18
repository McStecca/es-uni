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


void sort(int*X, int lim){//sorting algorithm 😳
    int temp;
    for (int i = 1; i < lim; i++){
        if(X[0]!=X[i]){//if this element is different from element in first position
            for (int j = lim-1; j > i; j--){
                if(X[j] != X[i]){//search an element equal to the element in first position
                    temp = X[i];
                    X[i] = X[j];
                    X[j] = temp;//swaps the two elements
                    break;//exits the for
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
