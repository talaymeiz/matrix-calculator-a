#include <iostream>
#include <stdexcept>
#include "Matrix.hpp"
#include <vector>
using namespace std;

namespace zich{

        Matrix:: Matrix(const  vector<double> vec, double x, double y){
        // : mat(vec), row(x), col(y){}//{
            this->row = x;
            this->col = y;
            vector<double> v;
            for (int i=0; i<vec.size(); i++)
                v.push_back(vec[(unsigned long)i]);
            this->mat = v;
        };
        
        // Accounting operators
        Matrix Matrix::operator+(Matrix mat){return mat;}
        void Matrix:: operator+=(const Matrix mat){}
        Matrix operator+(Matrix& mat){return mat;} //unary
        Matrix Matrix:: operator-(Matrix mat){return mat;}
        void Matrix:: operator-=(const Matrix mat){}
        Matrix operator-(Matrix& mat){return mat;} //unary

        // Comparison operators
        bool Matrix:: operator>(const Matrix mat) const{return false;}
        bool Matrix:: operator>=(const Matrix mat) const{return false;}
        bool Matrix:: operator<(const Matrix mat) const{return false;}
        bool Matrix:: operator<=(const Matrix mat) const{return false;}
        bool Matrix:: operator==(const Matrix mat) const{return false;}
        bool Matrix:: operator!=(const Matrix mat) const{return false;}
        
        // ++ / --
        const void Matrix:: operator++(){}
        const void Matrix:: operator--(){}
        void Matrix:: operator++() const{}
        void Matrix:: operator--() const{}

        // scalar multiplication
        Matrix& Matrix:: operator*(double scalar) {return *this;}
        Matrix operator*(double scalar,const Matrix mat){return mat;}
        void Matrix:: operator*=(double scalar){}
        
        // Matrix multiplication
        Matrix& Matrix:: operator*(const Matrix mat){return *this;}
        
        // Input and output operator
        std::ostream &operator<<(std::ostream &o, Matrix const &mat) {return cout<<"123";}
        // std::ostream &operator>>(std::ostream &o, Matrix const &mat) {return cin>>mat;}       

}