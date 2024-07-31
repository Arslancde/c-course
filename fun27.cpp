#include<iostream>
using namespace std;
void raedmatrix(int matrix[3][3],int row,int col)
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
int sumrow(int matrix[3][3],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        int sum=0;
    }
    for(int j=0;j<col;j++)
    {
        sum+=matrix[i][j];
    }
}
int main(){
    int row=3;
    int col=3;
    int matrix[3][3]={
        {1,2,3},{4,5,6},{7,8,9}
    };
    raedmatrix(matrix,row,col);
return 0;
}