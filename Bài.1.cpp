#include<iostream>
using namespace std;

bool importData(int*** pArr,int szRow, int szCol);
int** add2Matrix(int** pArr1,int** pArr2, int szRow, int szCol);
void printMatrix(int** pArr, int szRow, int szCol);
void freeMem(int** pArr, int szRow, int szCol);

int main(){
    int** pArr1;
    int** pArr2;
    int szRow, szCol;
    cin>>szRow>>szCol;
    return 0;
}