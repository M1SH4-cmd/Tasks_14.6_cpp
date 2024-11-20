#include <iostream>
using namespace std;

int main(){
    float matrixA[4][4];
    float vectorB[4];
    float vectorC[4];
    float sum = 0.0f;



    cout << "Enter values for vector B:" << endl;

    for(int i = 0; i < 4; i++){
        cin >> vectorB[i];
    }


    cout << "Enter values for matrix A:" << endl;

    for(int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cin >> matrixA[i][j];
        }
    }

    for(int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            vectorC[i] += matrixA[i][j] * vectorB[j];
        }
    }


    cout << "Result:" << endl;
    for(int i = 0; i < 4; i++){
        cout << vectorC[i] << endl;
    }    

}
