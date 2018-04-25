//#ifndef _MANIF_MANIF_SO3_BASE_H_
//#define _MANIF_MANIF_SO3_BASE_H_

//#include "manif/impl/manifold_base.h"
//#include "manif/impl/tangent_base.h"

//namespace manif
//{

//template <typename _Derived> struct SO3Base;
//template <typename _Derived> struct SO3TangentBase;

//namespace internal
//{

//template <>
//template <typename _Derived>
//struct ManifoldProperties<SO3Base<_Derived>>
//{
//  static constexpr int Dim = 3; /// @brief Space dimension
//  static constexpr int DoF = 3; /// @brief Degrees of freedom
//  static constexpr int N   = 4; /// @brief Dimension of transformation matrix
//};

//template <>
//template <typename _Derived>
//struct ManifoldProperties<SO3TangentBase<_Derived>>
//{
//  static constexpr int Dim = 3; /// @brief Space dimension
//  static constexpr int DoF = 3; /// @brief Degrees of freedom
//};

//} /* namespace internal */

//////////////////
/////          ///
///// Manifold ///
/////          ///
//////////////////

//template <typename _Derived>
//struct SO3Base : ManifoldBase<_Derived>
//{
//  using Base = ManifoldBase<_Derived>;

//  using Manifold = typename Base::Manifold;
//  using Tangent  = typename Base::Tangent;

//  static constexpr int Dim      = ManifoldProperties<SO3Base<_Derived>>::Dim;
//  static constexpr int DoF      = ManifoldProperties<SO3Base<_Derived>>::DoF;
//  static constexpr int RepSize  = 4;
//};

//template <typename _Derived>
//struct SO3TangentBase : TangentBase<_Derived>
//{
//  using Base = TangentBase<_Derived>;

//  using Manifold = typename Base::Manifold;
//  using Tangent  = typename Base::Tangent;

//  static constexpr int Dim      = ManifoldProperties<SO3TangentBase<_Derived>>::Dim;
//  static constexpr int DoF      = ManifoldProperties<SO3TangentBase<_Derived>>::DoF;
//  static constexpr int RepSize  = 2;
//};

//} /* namespace manif */

//#endif /* _MANIF_MANIF_SO3_BASE_H_ */