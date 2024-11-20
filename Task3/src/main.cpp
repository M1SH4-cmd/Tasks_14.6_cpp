#include <iostream>
using namespace std;


int main(){

    int matrix1[4][4];
    int matrix2[4][4];
    int count = 0;

    cout << "Start entering elements for first matrix:" << endl;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> matrix1[i][j];
        }
    }
    
    cout << "Start entering elements for second matrix:" << endl;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> matrix2[i][j];
            if(matrix2[i][j] == matrix1[i][j]) count++;
        }
    }


    if(count != 16){
        cout << "The two matrices are not identical." << endl;
    }else{
        cout << "The two matrices are identical." << endl;
        int num = matrix1[0][0];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            matrix1[i][j] = 0;
            if(j == i){
                matrix1[i][j] = num;
            }
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    }

    

}
