#ifndef ENGINE_MATH_VECT_H
#define ENGINE_MATH_VECT_H

// Includes to handle SIMD register types
#include <xmmintrin.h>
#include <smmintrin.h> 
#include  <assert.h>

#include "Enum.h"

// forward declare
class Matrix;
class Quat;

class Vect
{
public:
    // default parameters allow it to act as default constructor too
    Vect(float x = 0.0f, float y = 0.0f, float z = 0.0f, float w = 1.0f);
    
    Vect(const Vect& in);
    Vect& operator=(const Vect& in);
    ~Vect();

    // Accessor functions
    // for these to be L-values when overloading [], have to return a & - why?
    float& operator[](const x_enum) {return this->x;}
    float& operator[](const y_enum) {return this->y;}
    float& operator[](const z_enum) {return this->z;}
    float& operator[](const w_enum) {return this->w;}

    // need these for something like t[x]+t[y]+t[z]+t[w], where t is a const Vect passed in
    // adding const at end of parameter list, makes "this" a const vect
    // with a const vect, I can't return a reference like I do above
    // Leaving return value const unless forced to take it away
    const float operator[](const x_enum) const {return this->x; }
    const float operator[](const y_enum) const {return this->y; }
    const float operator[](const z_enum) const {return this->z; }
    const float operator[](const w_enum) const {return this->w; }

    // Set functions
    void set(const float x, const float y, const float z); 
    void set(const float x, const float y, const float z, const float w);
    void set(const Vect& v);

    // equality functions
    bool isEqual(const Vect& v, const float epsilon) const;
    bool isEqual(const Vect& v) const;
    bool isZero(const float epsilon) const;
    bool isZero() const;

    // Overloading Operators
    const Vect operator+=(const Vect& w);
    const Vect operator-=(const Vect& w);
    const Vect operator*=(const float scale);
    const Vect operator*=(const Quat& q);
    const Vect operator/=(const float scale);
    // Individual element divide
    const Vect operator/=(const Vect& v);

    // specialized vector functions
    const float mag() const;
    const float magSqr() const;
    void norm();
    const Vect getNorm() const;
    const float dot(const Vect& v) const;
    const Vect cross(const Vect& v) const;
    const float getAngle(const Vect& v) const;

    // Operations involving Matrices
    const Vect operator*=(const Matrix& M);

    // Debug print method
    void print(const char * const desc) const;

    // global friend functions
    friend const Vect operator+(const Vect& v, const Vect& w);
    friend const Vect operator-(const Vect& v, const Vect& w);
    friend const Vect operator*(const float s, const Vect& v);
    friend const Vect operator*(const Vect& v, const float s);
    friend const Vect operator/(const Vect& v, const float s);
    friend const Vect operator/(const Vect& v, const Vect& w);
    friend const Vect operator-(const Vect& v);
    friend const Vect operator+(const Vect& v); 
    friend const Vect operator*(const Vect& v, const Matrix& M);
    friend const Vect operator*(const Vect& v, const Quat& q);

private:

// Level 4 complains nameless struct/union ...
#pragma warning( disable : 4201)
	// anonymous union
	union 
	{
        // these members are accessed by .m, .x, etc.
		__m128	m;

		// anonymous struct
		struct 
			{
			float x;
			float y;
			float z;
			float w;
			};
	};
};

/*************************
// Global Mathmatical Operators
*************************/
// const at the end of the declaration is not allowed on these - they are global functions, no this pointer

// Add/Substract
const Vect operator+(const Vect& v, const Vect& w);
const Vect operator-(const Vect& v, const Vect& w);

// Multiply/Divide by scalars
const Vect operator*(const float s, const Vect& v);
const Vect operator*(const Vect& v, const float s);
const Vect operator*(const Vect& v, const Quat& q);
const Vect operator/(const Vect& v, const float s); // note that (s / v) doesn't make sense

// Individual Element Divide
const Vect operator/(const Vect& v, const Vect& w);

// Unary operators
const Vect operator-(const Vect& v);
const Vect operator+(const Vect& v); 

// Vector * Matrix
const Vect operator*(const Vect& v, const Matrix& M);

#endif