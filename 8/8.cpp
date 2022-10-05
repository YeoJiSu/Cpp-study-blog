#include <iostream>
 
using namespace std;
 
class Matrix
{
    int** values;
    int row,column;
public:
    Matrix(int row, int col);
    Matrix(Matrix& m);
    Matrix operator * (const int m){
      Matrix temp(row, column);

      for (int i=0;i<row;i++) {
        for (int j=0; j<column;j++){
          temp.values[i][j] = values[i][j]*m;
        }
      }
      return Matrix(temp);
    }

    Matrix operator+(Matrix& m) {
        Matrix tmp(row, column);
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < column; j++) {
                tmp.values[i][j] = values[i][j] + m.values[i][j];
            }
        }
        return Matrix(tmp);
    }
    friend ostream& operator<<(ostream& o, Matrix& m);
    friend istream& operator>>(istream& ins, Matrix& m);
    friend Matrix add(Matrix& m1, Matrix& m2);
};

Matrix::Matrix(Matrix& m)
{
    row = m.row;
    column = m.column;
    values = new int*[row];
    for(int i = 0; i < row; i++)
    {
        values[i] = new int[column];
        for(int j = 0; j < column; j++)
        {
            values[i][j] = m.values[i][j];
        }
    }
}

Matrix::Matrix(int rrow, int col)
{
    row = rrow;
    column = col;
    values = new int*[row];
    for(int i = 0; i < row; i++)
    {
        values[i] = new int[col];
        for(int j = 0; j < col; j++)
        {
            values[i][j] = 0;
        }
    }
}

ostream& operator<<(ostream& o, Matrix& m)
{
    for(int i = 0; i < m.row; i++)
    {
        for(int j = 0; j < m.column; j++)
        {
            o << m.values[i][j] << "\t\t";
        }
        o << endl;
    }
    return o;
}
 
istream& operator>>(istream& ins, Matrix& m)
{
    int row = m.row;
    int col = m.column;
    int **p = m.values;
 
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            int x;
            ins >> x ;
            p[i][j] = x;
        }
    }
    return ins;
}

int main() {
    Matrix m1(2, 2), m2(2, 2) ;
    cin >> m1 ;
    cin >> m2 ;

    Matrix m3(m1 + m2);
    Matrix m4(2, 2);

    m4 = m3 * 10 ;

    cout << m3 << endl << m4 << endl ;
}
