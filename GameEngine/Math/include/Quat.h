/** @file */ 
/*****************************************************************************/
/*                                                                           */
/* file: Quat.h                                                              */
/*                                                                           */
/*****************************************************************************/

#ifndef ENGINE_MATH_QUAT_H
#define ENGINE_MATH_QUAT_H

/*****************************************************************************/
/* Includes:                                                                 */
/*****************************************************************************/
#include "Matrix.h"
#include "Enum.h"


	/*************************************************************************
	*
	* This class contains functions and data structure for a 4-dimensional 
	* Quaternions.  The quaternions are internally stored interms of the 
	* imaginary components (x,y,z) and the real components (real).
	*
	* In the Math library, quaternions can be thought of as "rotational"
	* matrices, everything that you can represent with rotational matrices
	* you can use with quaternions.  Such as quaternion concatenation,
	* inverses, transpose, normalize, multiplying with matrices, and with
	* vectors.
	*  
	*  
	**************************************************************************/

class Quat 
{
public:
  
    Quat(float qx = 0.0f, float qy = 0.0f, float z = 0.0f, float qw = 1.0f);
    Quat(const Quat& q);
    Quat& operator=(const Quat& q);
    ~Quat();
    
    Quat(const Vect& v, float qw);
    Quat(const RotType rot, float angle);
    Quat(const Matrix& m);
    Quat(const MatrixSpecialType type);
    Quat(const RotAxisAngleType, const Vect& axis, const float angle);
    Quat(const Rot3AxisType, const float x, const float y, const float z);
    Quat(const RotOrientType, const Vect& DOF, const Vect& up);

    // Accessor functions
    // for these to be L-values when overloading [], have to return a & - why?
    float& operator[](const x_enum) {return this->qx;}
    float& operator[](const y_enum) {return this->qy;}
    float& operator[](const z_enum) {return this->qz;}
    float& operator[](const w_enum) {return this->qw;}

    // const version
    const float& operator[](const x_enum) const {return this->qx;}
    const float& operator[](const y_enum) const {return this->qy;}
    const float& operator[](const z_enum) const {return this->qz;}
    const float& operator[](const w_enum) const {return this->qw;}

    // set functions
    void set(const Matrix& m);
    void Quat::set(const MatrixSpecialType type);
    void set(const Rot3AxisType, const float x, const float y, const float z);
    void set(const float x, const float y, const float z, const float w);
    void set(const Vect& v, const float qw);
    void set(const RotType rot, float angle);
    void set(const RotAxisAngleType, const Vect& axis, const float angle); 
    void set(const RotOrientType orient, const Vect& DOF, const Vect& up);
    void setRotOrient(const Vect& DOF, const Vect& up);
    void setRotInvOrient(const Vect& DOF, const Vect& up);

    void setVect(const Vect& v);
    void getVect(Vect& v) const;
    void getAxis(Vect& v) const;
    float getAngle() const;

    // equality functions
    bool isEqual(const Quat& q, const float epsilon) const; // checks normal equivalency
    bool isEquivalent(const Quat& q, const float epsilon) const; // checks normal or negative equivalency
    bool isNegEqual(const Quat& q, const float epsilon) const; // checks negativ equivalency
    bool isConjugateEqual(const Quat& q, const float epsilon) const;
    bool isIdentity(const float epsilon) const;
    bool isNormalized(const float epsilon) const;
    bool isZero(const float epsilon) const;

    // overloading operators 
    const Quat operator+=(const Quat& q);
    const Quat operator-=(const Quat& q);
    const Quat operator*=(const Quat& q);
    const Quat operator/=(const Quat& q);

    const Quat operator+=(const float s);
    const Quat operator-=(const float s);
    const Quat operator*=(const float s);
    const Quat operator/=(const float s);

    const Quat operator*=(const Matrix& m);

    // individual element multiply - must return a new quat (const at the end) to pass unit test
    const Quat multByElement(const Quat& q) const;

    // specialized Quat functions
    void conj();
    void T();
    void inv();
    const float dot(const Quat& p) const;
    const float mag() const;
    const float magSquared() const;
    const float invMag() const;
    const Quat norm();
    void Lqcvq(const Vect& vIn, Vect& vOut) const;
    void Lqvqc(const Vect& vIn, Vect& vOut) const;

    const Quat getConj() const;
    const Quat getT() const;
    const Quat getInv() const;
    const Quat getNorm() const;

    // global friend functions
    friend const Quat operator+(const Quat& q1, const Quat& q2);
    friend const Quat operator-(const Quat& q1, const Quat& q2);
    friend const Quat operator*(const Quat& q1, const Quat& q2);
    friend const Quat operator/(const Quat& q1, const Quat& q2);
    friend const Quat operator+(const Quat& q);
    friend const Quat operator-(const Quat& q);
    friend const Quat operator+(const Quat& q, const float s);
    friend const Quat operator+(const float s, const Quat& q);
    friend const Quat operator-(const Quat& q, const float s);
    friend const Quat operator-(const float s, const Quat& q);
    friend const Quat operator*(const Quat& q, const float s);
    friend const Quat operator*(const float s, const Quat& q);
    friend const Quat operator*(const Quat& q, const Matrix& m);
    friend const Quat operator/(const Quat& q, const float s);
    friend const Quat operator/(const float s, const Quat& q);

private:

// Level 4 complains nameless struct/union ...
#pragma warning( disable : 4201)
	// anonymous union
	union 
	{
		__m128	m;

		// anonymous struct
		struct 
			{
			float qx;
			float qy;
			float qz;
			float qw;
			};
	};


};

/*************************
// Global Mathmatical Operators
*************************/
// const at the end of the declaration is not allowed on these - they are global functions, no this pointer


// Add/Subtract
const Quat operator+(const Quat& q1, const Quat& q2);
const Quat operator+(const Quat& q, const float s);
const Quat operator+(const float s, const Quat& q);

const Quat operator-(const Quat& q1, const Quat& q2);
const Quat operator-(const Quat& q, const float s);
const Quat operator-(const float s, const Quat& q);

// Quat multiplication/division
const Quat operator*(const Quat& p, const Quat& q);
const Quat operator*(const Quat& q, const float s);
const Quat operator*(const float s, const Quat& q);
const Quat operator*(const Quat& q, const Matrix& m);

const Quat operator/(const Quat& q1, const Quat& q2);
const Quat operator/(const Quat& q, const float s);
const Quat operator/(const float s, const Quat& q);

// unary operators
const Quat operator+(const Quat& q);
const Quat operator-(const Quat& q);

#endif // #ifndef QUAT_H

/**** END of Quat.h ********************************************************/
