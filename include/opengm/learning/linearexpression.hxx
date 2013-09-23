#pragma once
#ifndef OPENGM_LINEAREXPRESSION_HXX
#define OPENGM_LINEAREXPRESSION_HXX

#include <cstddef>
#include <utility>
#include <vector>

namespace opengm {

template<class VALUE, class VAR = VALUE, class COEFF = VALUE>
class LinearExpression
{
public:
  typedef VALUE ExprType;
  typedef VAR VarType;
  typedef COEFF CoeffType;

  typedef typename std::pair< CoeffType, VarType > value_type;
  typedef typename std::vector<value_type>::const_iterator const_iterator;

  LinearExpression( const ExprType& constant = 0 ) {}
  
  const_iterator cbegin() const { return const_iterator(); }
  const_iterator cend() const { return const_iterator(); }

  void setConstant( std::size_t idx, const ExprType& constant ) { }
  ExprType getConstant( std::size_t idx ) const { return 0; }
  void setCoeff( std::size_t idx, const CoeffType& coeff ) {}
  CoeffType getCoeff( std::size_t idx ) const { return 0; }
  void setVar( std::size_t idx, const VarType& var ) {};
  VarType getVar( std::size_t idx ) const { return 0; }

  void push_back( const VarType& var, const CoeffType& coeff = 1. ) {}
  void push_back( const value_type& ) {}
  void insert (std::size_t before, const VarType& var, const CoeffType& coeff = 1. ) {}
  void insert( const_iterator before, std::size_t n, const value_type& val) {}
  template <class InputIterator>
    void insert ( const_iterator before, InputIterator first, InputIterator last ) {}

  void erase( std::size_t idx ) {}
  void clear() {}

  ExprType value() const { return 0; }
  std::size_t size() const { return 0; }

private:
  ExprType constant_;
  std::vector<value_type> expr_;
};

} // namespace opengm

#endif // OPENGM_LINEAREXPRESSION_HXX
