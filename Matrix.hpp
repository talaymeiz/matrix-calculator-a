#include <string>
#include <iostream>
#include<bits/stdc++.h> 
#include <vector>


#ifndef MY_HHEDER
#define MY_HHEDER

using namespace std;

namespace zich{

    class Matrix{
    
    private:
        int row;
        int col;
        vector<double> mat;
    public:
        //constractor
        Matrix(vector<double> vec, double x, double y);//: mat(vec), row(x), col(y){}//{

        // Accounting operators
        Matrix operator+(Matrix mat) ;
        void operator+=(const Matrix mat);
        friend Matrix operator+(Matrix& mat); //unary
        Matrix operator-(Matrix mat);
        void operator-=(const Matrix mat);
        friend Matrix operator-(Matrix& mat); //unary
        // Comparison operators
        bool operator>(const Matrix mat) const;
        bool operator>=(const Matrix mat) const;
        bool operator<(const Matrix mat) const;
        bool operator<=(const Matrix mat) const;
        bool operator==(const Matrix mat) const;
        bool operator!=(const Matrix mat) const;
        // ++ / --
        const void operator++();
        const void operator--();
        void operator++() const;
        void operator--() const;
        // scalar multiplication
        Matrix& operator*(double scalar);
        friend Matrix operator*(double scalar,const Matrix mat);
        void operator*=(double scalar);
        // Matrix multiplication
        Matrix& operator*(const Matrix mat);// const;
        // Input and output operator

        friend std::ostream &operator<<(std::ostream &o, Matrix const &mat);
        // friend std::ostream &operator>>(std::ostream &o, Matrix const &mat);

    };
}

#endif