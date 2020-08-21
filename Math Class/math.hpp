#ifndef __MATH_HPP__
#define __MATH_HPP__

#ifdef _MSC_VER >= 1500
#pragma warning (disable : 4244)
#pragma warning (disable : 4522)
#endif

#ifdef _MSC_VER
#define ALWAYS_INLINE __forceinline
#else
#define ALWAYS_INLINE __attribute__((always_inline))
#endif

#ifndef MATH_API
#define MATH_API
#endif

#ifndef MATH_IMPL_API
#define MATH_IMPL_API
#endif

#ifndef MATH_VEC2
#define MATH_VEC2_CLASS(o, v)	Vec2<_Ty>(X o v.X, Y o v.Y)
#define MATH_VEC2_VARGS(o, v)	Vec2<_Ty>(X o v, Y o v)
#endif

#ifndef MATH_VEC3
#define MATH_VEC3_CLASS(o, v)	Vec3<_Ty>(X o v.X, Y o v.Y, Z o v.Z)
#define MATH_VEC3_VARGS(o, v)	Vec3<_Ty>(X o v, Y o v, Z o v)
#endif

#ifndef MATH_VEC4
#define MATH_VEC4_CLASS(o, v)	Vec4<_Ty>(X o v.X, Y o v.Y, Z o v.Z, W o v.W)
#define MATH_VEC4_VARGS(o, v)	Vec4<_Ty>(X o v, Y o v, Z o v, W o v)
#endif

#define FLOAT_EPSILON	0.0001f
#define PI				3.1415926535897932f

template <typename _Ty>
class Vec2
{
public:
	_Ty X, Y;
public:
	Vec2() :
		X(0), Y(0)
	{}
	Vec2(_Ty In) :
		X(In), Y(In)
	{}
	Vec2(_Ty InX, _Ty InY) :
		X(InX), Y(InY)
	{}
public:
	ALWAYS_INLINE Vec2<_Ty> operator = (_Ty In)
	{
		X = In; Y = In;
		return *this;
	}
	ALWAYS_INLINE Vec2<_Ty> operator = (const _Ty& In) const
	{
		X = In; Y = In;
		return *this;
	}
	ALWAYS_INLINE Vec2<_Ty> operator = (Vec2<_Ty> In)
	{
		X = In.X; Y = In.Y;
		return *this;
	}
	ALWAYS_INLINE Vec2<_Ty> operator = (const Vec2<_Ty>& In) const
	{
		X = In.X; Y = In.Y;
		return *this;
	}

	ALWAYS_INLINE Vec2<_Ty> operator += (_Ty In)
	{
		return MATH_VEC2_VARGS(+=, In);
	}
	ALWAYS_INLINE Vec2<_Ty> operator -= (_Ty In)
	{
		return MATH_VEC2_VARGS(-=, In);
	}
	ALWAYS_INLINE Vec2<_Ty> operator *= (_Ty In)
	{
		return MATH_VEC2_VARGS(*=, In);
	}
	ALWAYS_INLINE Vec2<_Ty> operator /= (_Ty In)
	{
		return MATH_VEC2_VARGS(/=, In);
	}

	ALWAYS_INLINE Vec2<_Ty> operator += (const _Ty& In) const
	{
		return MATH_VEC2_VARGS(+=, In);
	}
	ALWAYS_INLINE Vec2<_Ty> operator -= (const _Ty& In) const
	{
		return MATH_VEC2_VARGS(-=, In);
	}
	ALWAYS_INLINE Vec2<_Ty> operator *= (const _Ty& In) const
	{
		return MATH_VEC2_VARGS(*=, In);
	}
	ALWAYS_INLINE Vec2<_Ty> operator /= (const _Ty& In) const
	{
		return MATH_VEC2_VARGS(/=, In);
	}

	ALWAYS_INLINE Vec2<_Ty> operator + (Vec2<_Ty> In)
	{
		return MATH_VEC2_CLASS(+, In);
	}
	ALWAYS_INLINE Vec2<_Ty> operator - (Vec2<_Ty> In)
	{
		return MATH_VEC2_CLASS(-, In);
	}
	ALWAYS_INLINE Vec2<_Ty> operator * (Vec2<_Ty> In)
	{
		return MATH_VEC2_CLASS(*, In);
	}
	ALWAYS_INLINE Vec2<_Ty> operator / (Vec2<_Ty> In)
	{
		return MATH_VEC2_CLASS(/ , In);
	}

	ALWAYS_INLINE Vec2<_Ty> operator + (const Vec2<_Ty>& In) const
	{
		return MATH_VEC2_CLASS(+, In);
	}
	ALWAYS_INLINE Vec2<_Ty> operator - (const Vec2<_Ty>& In) const
	{
		return MATH_VEC2_CLASS(-, In);
	}
	ALWAYS_INLINE Vec2<_Ty> operator * (const Vec2<_Ty>& In) const
	{
		return MATH_VEC2_CLASS(*, In);
	}
	ALWAYS_INLINE Vec2<_Ty> operator / (const Vec2<_Ty>& In) const
	{
		return MATH_VEC2_CLASS(/ , In);
	}

	ALWAYS_INLINE Vec2<_Ty> operator += (Vec2<_Ty> In)
	{
		return MATH_VEC2_CLASS(+=, In);
	}
	ALWAYS_INLINE Vec2<_Ty> operator -= (Vec2<_Ty> In)
	{
		return MATH_VEC2_CLASS(-=, In);
	}
	ALWAYS_INLINE Vec2<_Ty> operator *= (Vec2<_Ty> In)
	{
		return MATH_VEC2_CLASS(*=, In);
	}
	ALWAYS_INLINE Vec2<_Ty> operator /= (Vec2<_Ty> In)
	{
		return MATH_VEC2_CLASS(/=, In);
	}

	ALWAYS_INLINE Vec2<_Ty> operator += (const Vec2<_Ty>& In) const
	{
		return MATH_VEC2_CLASS(+=, In);
	}
	ALWAYS_INLINE Vec2<_Ty> operator -= (const Vec2<_Ty>& In) const
	{
		return MATH_VEC2_CLASS(-=, In);
	}
	ALWAYS_INLINE Vec2<_Ty> operator *= (const Vec2<_Ty>& In) const
	{
		return MATH_VEC2_CLASS(*=, In);
	}
	ALWAYS_INLINE Vec2<_Ty> operator /= (const Vec2<_Ty>& In) const
	{
		return MATH_VEC2_CLASS(/=, In);
	}

	ALWAYS_INLINE bool IsZero() const
	{
		return X == 0 && Y == 0;
	}
	ALWAYS_INLINE bool operator == (Vec2<_Ty> In) const
	{
		return (X == In.X && Y == In.Y);
	}
	ALWAYS_INLINE bool operator != (Vec2<_Ty> In) const
	{
		return (X != In.X && Y != In.Y);
	}
	ALWAYS_INLINE bool operator == (_Ty In) const
	{
		return (X == In && Y == In);
	}
	ALWAYS_INLINE bool operator != (_Ty In) const
	{
		return (X != In && Y != In);
	}

	ALWAYS_INLINE _Ty Dot(Vec2<_Ty>* In) const
	{
		return (X * In->X) + (Y * In->Y);
	}
	ALWAYS_INLINE _Ty Length() const
	{
		return (_Ty)(sqrt(X * X + Y * Y));
	}
};

template <typename _Ty>
class Vec3
{
public:
	_Ty X, Y, Z;
public:
	Vec3() :
		X(0), Y(0), Z(0)
	{}
	Vec3(_Ty In) :
		X(In), Y(In), Z(In)
	{}
	Vec3(_Ty InX, _Ty InY, _Ty InZ) :
		X(InX), Y(InY), Z(InZ)
	{}
public:
	ALWAYS_INLINE Vec3<_Ty> operator = (_Ty In)
	{
		X = In; Y = In; Z = In;
		return *this;
	}
	ALWAYS_INLINE Vec3<_Ty> operator = (const _Ty& In) const
	{
		X = In; Y = In; Z = In;
		return *this;
	}
	ALWAYS_INLINE Vec3<_Ty> operator = (Vec3<_Ty> In)
	{
		X = In.X; Y = In.Y; Z = In.Z;
		return *this;
	}
	ALWAYS_INLINE Vec3<_Ty> operator = (const Vec3<_Ty>& In) const
	{
		X = In.X; Y = In.Y; Z = In.Z;
		return *this;
	}

	ALWAYS_INLINE Vec3<_Ty> operator += (_Ty In)
	{
		return MATH_VEC3_VARGS(+=, In);
	}
	ALWAYS_INLINE Vec3<_Ty> operator -= (_Ty In)
	{
		return MATH_VEC3_VARGS(-=, In);
	}
	ALWAYS_INLINE Vec3<_Ty> operator *= (_Ty In)
	{
		return MATH_VEC3_VARGS(*=, In);
	}
	ALWAYS_INLINE Vec3<_Ty> operator /= (_Ty In)
	{
		return MATH_VEC3_VARGS(/=, In);
	}

	ALWAYS_INLINE Vec3<_Ty> operator += (const _Ty& In) const
	{
		return MATH_VEC3_VARGS(+=, In);
	}
	ALWAYS_INLINE Vec3<_Ty> operator -= (const _Ty& In) const
	{
		return MATH_VEC3_VARGS(-=, In);
	}
	ALWAYS_INLINE Vec3<_Ty> operator *= (const _Ty& In) const
	{
		return MATH_VEC3_VARGS(*=, In);
	}
	ALWAYS_INLINE Vec3<_Ty> operator /= (const _Ty& In) const
	{
		return MATH_VEC3_VARGS(/=, In);
	}

	ALWAYS_INLINE Vec3<_Ty> operator + (Vec3<_Ty> In)
	{
		return MATH_VEC3_CLASS(+, In);
	}
	ALWAYS_INLINE Vec3<_Ty> operator - (Vec3<_Ty> In)
	{
		return MATH_VEC3_CLASS(-, In);
	}
	ALWAYS_INLINE Vec3<_Ty> operator * (Vec3<_Ty> In)
	{
		return MATH_VEC3_CLASS(*, In);
	}
	ALWAYS_INLINE Vec3<_Ty> operator / (Vec3<_Ty> In)
	{
		return MATH_VEC3_CLASS(/ , In);
	}

	ALWAYS_INLINE Vec3<_Ty> operator + (const Vec3<_Ty>& In) const
	{
		return MATH_VEC3_CLASS(+, In);
	}
	ALWAYS_INLINE Vec3<_Ty> operator - (const Vec3<_Ty>& In) const
	{
		return MATH_VEC3_CLASS(-, In);
	}
	ALWAYS_INLINE Vec3<_Ty> operator * (const Vec3<_Ty>& In) const
	{
		return MATH_VEC3_CLASS(*, In);
	}
	ALWAYS_INLINE Vec3<_Ty> operator / (const Vec3<_Ty>& In) const
	{
		return MATH_VEC3_CLASS(/ , In);
	}

	ALWAYS_INLINE Vec3<_Ty> operator += (Vec3<_Ty> In)
	{
		return MATH_VEC3_CLASS(+=, In);
	}
	ALWAYS_INLINE Vec3<_Ty> operator -= (Vec3<_Ty> In)
	{
		return MATH_VEC3_CLASS(-=, In);
	}
	ALWAYS_INLINE Vec3<_Ty> operator *= (Vec3<_Ty> In)
	{
		return MATH_VEC3_CLASS(*=, In);
	}
	ALWAYS_INLINE Vec3<_Ty> operator /= (Vec3<_Ty> In)
	{
		return MATH_VEC3_CLASS(/=, In);
	}

	ALWAYS_INLINE Vec3<_Ty> operator += (const Vec3<_Ty>& In) const
	{
		return MATH_VEC3_CLASS(+=, In);
	}
	ALWAYS_INLINE Vec3<_Ty> operator -= (const Vec3<_Ty>& In) const
	{
		return MATH_VEC3_CLASS(-=, In);
	}
	ALWAYS_INLINE Vec3<_Ty> operator *= (const Vec3<_Ty>& In) const
	{
		return MATH_VEC3_CLASS(*=, In);
	}
	ALWAYS_INLINE Vec3<_Ty> operator /= (const Vec3<_Ty>& In) const
	{
		return MATH_VEC3_CLASS(/=, In);
	}

	ALWAYS_INLINE bool IsZero() const
	{
		return X == 0 && Y == 0 && Z == 0;
	}
	ALWAYS_INLINE bool operator == (Vec3<_Ty> In) const
	{
		return (X == In.X && Y == In.Y && Z == In.Z);
	}
	ALWAYS_INLINE bool operator != (Vec3<_Ty> In) const
	{
		return (X != In.X && Y != In.Y && Z != In.Z);
	}
	ALWAYS_INLINE bool operator == (_Ty In) const
	{
		return (X == In && Y == In && Z == In);
	}
	ALWAYS_INLINE bool operator != (_Ty In) const
	{
		return (X != In && Y != In && Z != In);
	}

	ALWAYS_INLINE _Ty Dot(Vec3<_Ty>* In) const
	{
		return (X * In->X) + (Y * In->Y) + (Z * In->Z);
	}
	ALWAYS_INLINE _Ty Length() const
	{
		return (_Ty)(sqrt(X * X + Y * Y + Z * Z));
	}
};

template <typename _Ty>
class Vec4
{
public:
	_Ty X, Y, Z, W;
public:
	Vec4() :
		X(0), Y(0), Z(0), W(0)
	{}
	Vec4(_Ty In) :
		X(In), Y(In), Z(In), W(In)
	{}
	Vec4(_Ty InX, _Ty InY, _Ty InZ, _Ty InW) :
		X(InX), Y(InY), Z(InZ), W(InW)
	{}
public:
	ALWAYS_INLINE Vec4<_Ty> operator = (_Ty In)
	{
		X = In; Y = In; Z = In; W = In;
		return *this;
	}
	ALWAYS_INLINE Vec4<_Ty> operator = (const _Ty& In) const
	{
		X = In; Y = In; Z = In; W = In;
		return *this;
	}
	ALWAYS_INLINE Vec4<_Ty> operator = (Vec4<_Ty> In)
	{
		X = In.X; Y = In.Y; Z = In.Z; W = In.W;
		return *this;
	}
	ALWAYS_INLINE Vec4<_Ty> operator = (const Vec4<_Ty>& In) const
	{
		X = In.X; Y = In.Y; Z = In.Z; W = In.W;
		return *this;
	}

	ALWAYS_INLINE Vec4<_Ty> operator += (_Ty In)
	{
		return MATH_VEC4_VARGS(+=, In);
	}
	ALWAYS_INLINE Vec4<_Ty> operator -= (_Ty In)
	{
		return MATH_VEC4_VARGS(-=, In);
	}
	ALWAYS_INLINE Vec4<_Ty> operator *= (_Ty In)
	{
		return MATH_VEC4_VARGS(*=, In);
	}
	ALWAYS_INLINE Vec4<_Ty> operator /= (_Ty In)
	{
		return MATH_VEC4_VARGS(/=, In);
	}

	ALWAYS_INLINE Vec4<_Ty> operator += (const _Ty& In) const
	{
		return MATH_VEC4_VARGS(+=, In);
	}
	ALWAYS_INLINE Vec4<_Ty> operator -= (const _Ty& In) const
	{
		return MATH_VEC4_VARGS(-=, In);
	}
	ALWAYS_INLINE Vec4<_Ty> operator *= (const _Ty& In) const
	{
		return MATH_VEC4_VARGS(*=, In);
	}
	ALWAYS_INLINE Vec4<_Ty> operator /= (const _Ty& In) const
	{
		return MATH_VEC4_VARGS(/=, In);
	}

	ALWAYS_INLINE Vec4<_Ty> operator + (Vec4<_Ty> In)
	{
		return MATH_VEC4_CLASS(+, In);
	}
	ALWAYS_INLINE Vec4<_Ty> operator - (Vec4<_Ty> In)
	{
		return MATH_VEC4_CLASS(-, In);
	}
	ALWAYS_INLINE Vec4<_Ty> operator * (Vec4<_Ty> In)
	{
		return MATH_VEC4_CLASS(*, In);
	}
	ALWAYS_INLINE Vec4<_Ty> operator / (Vec4<_Ty> In)
	{
		return MATH_VEC4_CLASS(/ , In);
	}

	ALWAYS_INLINE Vec4<_Ty> operator + (const Vec4<_Ty>& In) const
	{
		return MATH_VEC4_CLASS(+, In);
	}
	ALWAYS_INLINE Vec4<_Ty> operator - (const Vec4<_Ty>& In) const
	{
		return MATH_VEC4_CLASS(-, In);
	}
	ALWAYS_INLINE Vec4<_Ty> operator * (const Vec4<_Ty>& In) const
	{
		return MATH_VEC4_CLASS(*, In);
	}
	ALWAYS_INLINE Vec4<_Ty> operator / (const Vec4<_Ty>& In) const
	{
		return MATH_VEC4_CLASS(/ , In);
	}

	ALWAYS_INLINE Vec4<_Ty> operator += (Vec4<_Ty> In)
	{
		return MATH_VEC4_CLASS(+=, In);
	}
	ALWAYS_INLINE Vec4<_Ty> operator -= (Vec4<_Ty> In)
	{
		return MATH_VEC4_CLASS(-=, In);
	}
	ALWAYS_INLINE Vec4<_Ty> operator *= (Vec4<_Ty> In)
	{
		return MATH_VEC4_CLASS(*=, In);
	}
	ALWAYS_INLINE Vec4<_Ty> operator /= (Vec4<_Ty> In)
	{
		return MATH_VEC4_CLASS(/=, In);
	}

	ALWAYS_INLINE Vec4<_Ty> operator += (const Vec4<_Ty>& In) const
	{
		return MATH_VEC4_CLASS(+=, In);
	}
	ALWAYS_INLINE Vec4<_Ty> operator -= (const Vec4<_Ty>& In) const
	{
		return MATH_VEC4_CLASS(-=, In);
	}
	ALWAYS_INLINE Vec4<_Ty> operator *= (const Vec4<_Ty>& In) const
	{
		return MATH_VEC4_CLASS(*=, In);
	}
	ALWAYS_INLINE Vec4<_Ty> operator /= (const Vec4<_Ty>& In) const
	{
		return MATH_VEC4_CLASS(/=, In);
	}

	ALWAYS_INLINE bool IsZero() const
	{
		return X == 0 && Y == 0 && Z == 0 && W == 0;
	}
	ALWAYS_INLINE bool operator == (Vec4<_Ty> In) const
	{
		return (X == In.X && Y == In.Y && Z == In.Z && W == In.W);
	}
	ALWAYS_INLINE bool operator != (Vec4<_Ty> In) const
	{
		return (X != In.X && Y != In.Y && Z != In.Z && W != In.W);
	}
	ALWAYS_INLINE bool operator == (_Ty In) const
	{
		return (X == In && Y == In && Z == In && W == In);
	}
	ALWAYS_INLINE bool operator != (_Ty In) const
	{
		return (X != In && Y != In && Z != In && W != In);
	}

	ALWAYS_INLINE _Ty Dot(Vec4<_Ty>* In) const
	{
		return (X * In->X) + (Y * In->Y) + (Z * In->Z) + (W * In->W);
	}
	ALWAYS_INLINE _Ty Length() const
	{
		return (_Ty)(sqrt(X * X + Y * Y + Z * Z + W * W));
	}
};

#ifdef _MSC_VER >= 1600
typedef Vec2<int>		Vec2I;
typedef Vec2<float>		Vec2F;
typedef Vec2<double>	Vec2D;
typedef Vec2<long>		Vec2L;

typedef Vec3<int>		Vec3I;
typedef Vec3<float>		Vec3F;
typedef Vec3<double>	Vec3D;
typedef Vec3<long>		Vec3L;

typedef Vec4<int>		Vec4I;
typedef Vec4<float>		Vec4F;
typedef Vec4<double>	Vec4D;
typedef Vec4<long>		Vec4L;
#endif

template <typename _Ty>
ALWAYS_INLINE _Ty Normalize2D(Vec2<_Ty>* In)
{
	double t = sqrt(In->X * In->X + In->Y * In->Y);
	if (t > FLOAT_EPSILON)
	{
		double X2 = In->X / t;
		double Y2 = In->Y / t;
		In->X = static_cast<float>(X2);
		In->Y = static_cast<float>(Y2);
	}
	else
	{
		t = 0;
	}
	return static_cast<_Ty>(t);
}

template <typename _Ty>
ALWAYS_INLINE _Ty Normalize3D(Vec3<_Ty>* In)
{
	double t = sqrt(In->X * In->X + In->Y * In->Y + In->Z * In->Z);
	if (t > FLOAT_EPSILON)
	{
		double X2 = In->X / t;
		double Y2 = In->Y / t;
		double Z2 = In->Z / t;
		In->X = static_cast<float>(X2);
		In->Y = static_cast<float>(Y2);
		In->Z = static_cast<float>(Z2);
	}
	else
	{
		t = 0;
	}
	return static_cast<_Ty>(t);
}

template <typename _Ty>
ALWAYS_INLINE _Ty Normalize4D(Vec4<_Ty>* In)
{
	double t = sqrt(In->X * In->X + In->Y * In->Y + In->Z * In->Z + In->W * In->W);
	if (t > FLOAT_EPSILON)
	{
		double X2 = In->X / t;
		double Y2 = In->Y / t;
		double Z2 = In->Z / t;
		double W2 = In->W / t;
		In->X = static_cast<float>(X2);
		In->Y = static_cast<float>(Y2);
		In->Z = static_cast<float>(Z2);
		In->W = static_cast<float>(W2);
	}
	else
	{
		t = 0;
	}
	return static_cast<_Ty>(t);
}

#endif