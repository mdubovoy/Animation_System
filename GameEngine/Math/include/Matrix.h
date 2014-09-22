#ifndef ENGINE_MATH_MATRIX_H
#define ENGINE_MATH_MATRIX_H

// SIMD includes
#include <xmmintrin.h>
#include <smmintrin.h> 

#include "Enum.h"
#include "Vect.h"
#include "Quat.h"

class Matrix
{
public:

	Matrix();
    Matrix(const MatrixSpecialType);
    Matrix(const MatrixTransType, const float a, const float b, const float c);
    Matrix(const MatrixScaleType, const float a, const float b, const float c);
    Matrix(const RotType, const float rotAngle);
    Matrix(const Vect& v1, const Vect& v2, const Vect& v3, const Vect& v4);
    Matrix(const Quat& Q);    

    Matrix(MatrixTransType type, const Vect &vIn);
    Matrix(MatrixScaleType type, const Vect &vIn);
    Matrix(Rot3AxisType type, const float angle_x, const float angle_y, const float angle_z);
    Matrix(const RotOrientType orient, const Vect& DOF, const Vect& up);


    Matrix(const Matrix& M);
    Matrix& operator=(const Matrix& M);
    ~Matrix();

    // Accessor functions
    // for these to be L-values when overloading [], have to return a & - why?
    float& operator[](const m0_enum) {return this->m0;}
    float& operator[](const m1_enum) {return this->m1;}
    float& operator[](const m2_enum) {return this->m2;}
    float& operator[](const m3_enum) {return this->m3;}
    float& operator[](const m4_enum) {return this->m4;}
    float& operator[](const m5_enum) {return this->m5;}
    float& operator[](const m6_enum) {return this->m6;}
    float& operator[](const m7_enum) {return this->m7;}
    float& operator[](const m8_enum) {return this->m8;}
    float& operator[](const m9_enum) {return this->m9;}
    float& operator[](const m10_enum) {return this->m10;}
    float& operator[](const m11_enum) {return this->m11;}
    float& operator[](const m12_enum) {return this->m12;}
    float& operator[](const m13_enum) {return this->m13;}
    float& operator[](const m14_enum) {return this->m14;}
    float& operator[](const m15_enum) {return this->m15;}

    // const version
    // need these for something like M[m1]+M[m2]+M[m3]+M[m4], where M is a const Matrix passed in
    // adding const at end of parameter list, makes "this" a const Matrix
    // with a const vect, I can't return a reference like I do above. But with Matrix, I can??
    // Leaving return value const unless forced to take it away

    const float& operator[](const m0_enum) const {return this->m0;}
    const float& operator[](const m1_enum) const {return this->m1;}
    const float& operator[](const m2_enum) const {return this->m2;}
    const float& operator[](const m3_enum) const {return this->m3;}
    const float& operator[](const m4_enum) const {return this->m4;}
    const float& operator[](const m5_enum) const {return this->m5;}
    const float& operator[](const m6_enum) const {return this->m6;}
    const float& operator[](const m7_enum) const {return this->m7;}
    const float& operator[](const m8_enum) const {return this->m8;}
    const float& operator[](const m9_enum) const {return this->m9;}
    const float& operator[](const m10_enum) const {return this->m10;}
    const float& operator[](const m11_enum) const {return this->m11;}
    const float& operator[](const m12_enum) const {return this->m12;}
    const float& operator[](const m13_enum) const {return this->m13;}
    const float& operator[](const m14_enum) const {return this->m14;}
    const float& operator[](const m15_enum) const {return this->m15;}

    // set functions
    void set(const MatrixSpecialType type); // ZERO and IDENTITY matrices
    void set(const MatrixTransType, const float a, const float b, const float c); // Translation matrix
    void set(const MatrixScaleType, const float a, const float b, const float c); // Scale matrix
    void set(const RotType, float rotAngle); // Rotation matrix
    void set(const MatrixRowType, const Vect& v); // set a row
    void set(const Vect& v1, const Vect& v2, const Vect& v3, const Vect& v4);

    void set(MatrixTransType type, const Vect &vIn);
    void set(MatrixScaleType type, const Vect &vIn);
    void set(Rot3AxisType type, const float angle_x, const float angle_y, const float angle_z); 
    
    // added with Quat lib
    void set(const Quat& Q);
    void set(const RotAxisAngleType type, const Vect& axis, const float rotAngle);
    void set(const RotOrientType orient, const Vect& DOF, const Vect& up);

    // get row function
    const Vect get(const MatrixRowType) const;

    // equality functions
    bool isEqual(const Matrix& M) const;
    bool isIdentity() const;
    bool isIdentity(const float epsilon) const;

    // Overloading Operators
    const Matrix operator+=(const Matrix& M);
    const Matrix operator-=(const Matrix& M);
    const Matrix operator*=(const float scale);
    const Matrix operator/=(const float scale);
    // Matrix Multiplication
    const Matrix operator*=(const Matrix& M);
    // Individual element divide
    const Matrix operator/=(const Matrix& M);

    const Matrix operator*=(const Quat& Q);

    // specialized matrix functions
    void inv();
    void T();
    const float det() const;
    const Matrix getInv() const;
    const Matrix getT() const;
    
    // Debug print method
    void print(const char * const desc) const;

    // global friend functions
    friend const Matrix operator+(const Matrix& A, const Matrix& B);
    friend const Matrix operator-(const Matrix& A, const Matrix& B);
    friend const Matrix operator*(const float s, const Matrix& M);
    friend const Matrix operator*(const Matrix& M, const float s);
    friend const Matrix operator/(const Matrix& M, const float s);
    friend const Matrix operator*(const Matrix& A, const Matrix& B);
    friend const Matrix operator/(const Matrix& A, const Matrix& B);
    friend const Matrix operator-(const Matrix& M);
    friend const Matrix operator+(const Matrix& M);
    

private:

// Level 4 complains nameless struct/union ...
#pragma warning( disable : 4201)

union 
		{
		struct 
			{
            // vector is aligned, therefore matrix is aligned
            // by keeping structs nameless, can access more easily: this->v0
			Vect v0;
			Vect v1;
			Vect v2;
			Vect v3;
			};

		struct 
			{
			float m0;
			float m1;
			float m2;
			float m3;
			float m4;
			float m5;
			float m6;	
			float m7;
			float m8;
			float m9;
			float m10;
			float m11;
			float m12;
			float m13;
			float m14;
			float m15;
			};
		};

    // helper function for transpose
    void swapRowsandColumns(float& a, float& b);
    
    // one point of use - for constructor and set function - reason to have a private function
    // can have multiple of these if were to have different combo rotations YZX, ZYX, XZY, etc
    void privSetRotXYZ(const float angle_x, const float angle_y, const float angle_z);
};

/*************************
// Global Mathmatical Operators
*************************/
// const at the end of the declaration is not allowed on these - they are global functions, no this pointer

// Add/Substract
const Matrix operator+(const Matrix& A, const Matrix& B);
const Matrix operator-(const Matrix& A, const Matrix& B);

// Multiply/Divide by Scalars
const Matrix operator*(const float s, const Matrix& M);
const Matrix operator*(const Matrix& M, const float s);
const Matrix operator/(const Matrix& M, const float s); // note that s / m doesn't make sense

// * Quat
const Matrix operator*(const Matrix& m, const Quat& q);

// Matrix Multiplication
const Matrix operator*(const Matrix& A, const Matrix& B);
// Individual Element Divide
const Matrix operator/(const Matrix& A, const Matrix& B);

// Unary operators
const Matrix operator-(const Matrix& M);
const Matrix operator+(const Matrix& M);
#endif