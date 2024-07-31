#include<iostream>
using namespace std;
void readmatrix(int matrix[3][3],int row,int col)
{
            cout<<"matrix"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
         cout<<endl;
    } 
}
void transposeof(int matrix[3][3],int transpose[3][3],int row,int col)
{
        for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[j][i]=matrix[i][j];
        }
        
    }
}
void printmatrix(int matrix[3][3],int row,int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        { 
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
    int row=3;
    int col=3;
    int matrix[3][3]={
        {1,2,3},{4,5,6},{7,8,9}
        };
    readmatrix(matrix,row,col);
    int transpose[3][3];
    transposeof(matrix,transpose,row,col);
    cout<<"transpose of matrix is as "<<endl;
    printmatrix(transpose,row,col);
return 0;
} 