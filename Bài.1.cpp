#include<iostream>
using namespace std;

bool importData(int*** pArr,int szRow, int szCol);
int** add2Matrix(int** pArr1,int** pArr2, int szRow, int szCol);
void printMatrix(int** pArr, int szRow, int szCol);
void freeMem(int** pArr, int szRow, int szCol);

bool importData(int*** pArr,int szRow, int szCol){
    int* ptr;
    *pArr=new int*[szRow];
    for(int i=0; i<szRow;i++){
        (*pArr)[i]=new int[szCol];
    }
    for(int i=0; i<szRow;i++){
        for(int j=0; j<szCol;j++){
            cin>>(*pArr)[szRow][szCol];
        }
    }
    return 
}
int** add2Matrix(int** pArr1,int** pArr2, int szRow, int szCol){
    int** result=new int*[szRow];
    for(int i=0; i<szRow;i++){
        result[i]=new int[szCol];
    }
    for(int i=0; i<szRow;i++){
        for(int j=0; j<szCol;j++){
            result[i][j]=pArr1[i][j]+pArr2[i][j];
        }
    }
    return result;
}
void printMatrix(int** pArr, int szRow, int szCol){
    for(int i=0; i<szRow;i++){
        for(int j=0; j<szCol;j++){
            cout<<pArr[i][j];
        }
    }
}
void freeMem(int** pArr, int szRow, int szCol){
    for(int i=0; i<szRow;i++){
        delete []pArr[i];
    }
    delete[]pArr;
}
int main(){
    int** pArr1;
    int** pArr2;
    int szRow, szCol;
    cin>>szRow>>szCol;
    importData(&pArr1, szRow, szCol);
    importData(&pArr2,szRow,szCol);
    int** tmp= add2Matrix(pArr1,pArr2,szRow,szCol);
    printMatrix(tmp,szRow,szCol);
    freeMem(pArr1,szRow,szCol);
    freeMem(pArr2,szRow,szCol);
    return 0;
}