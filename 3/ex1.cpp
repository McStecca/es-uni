#include<iostream>
using namespace std;

void leggi(int*X, int k){
    int i=0;
    while(i<k){
        cin >>X[i];
        i=i+1;
    }
}

void stampaMat(bool (*X)[8], int righe){
  for(int i=0; i < righe; i++)
    {
        for(int j=0; j<7; j++)
            cout<<X[i][j]<<' ';
        cout << endl;
    }
}

void calcB(int (*A)[8], bool (*B)[8]){
    int p = 0;
    for (int i = 0; i < 7; i++){
        for (int n = 0; n < 8; n++){
            for (int j = 0; j < 8; j++){
                for (int k = 0; k < 7; k++){
                    if(A[i][j] == A[k][n]){
                        p++;
                        break;//esce dall'ultimo for
                    }
                }
            }
            if (p == 8){
                B[i][n] = true;
            }else{
                B[i][n] = false;
            }
            p = 0;
        }
    }
}

main(){
    int A[7][8];
    bool B[7][8] = {0};
    
    leggi(*A,56); //lo leggiamo come se avesse 1 dimensione
    
    //da fare
    calcB(A, B);
    stampaMat(B,7);
}