//////////////////////////////////////////////////////////////////////////////
//
// This file is the adaptation for Interprocess of lslboost/detail/bad_weak_ptr.hpp
//
// (C) Copyright Peter Dimov and Multi Media Ltd. 2001, 2002, 2003
// (C) Copyright Ion Gaztanaga 2006. Distributed under the Boost
// Software License, Version 1.0. (See accompanying file
// LICENSE_1_0.txt or copy at http://www.lslboost.org/LICENSE_1_0.txt)
//
// See http://www.lslboost.org/libs/interprocess for documentation.
//
//////////////////////////////////////////////////////////////////////////////
#ifndef BOOST_INTERPROCESS_BAD_WEAK_PTR_HPP_INCLUDED
#define BOOST_INTERPROCESS_BAD_WEAK_PTR_HPP_INCLUDED

#ifndef BOOST_CONFIG_HPP
#  include <lslboost/config.hpp>
#endif
#
#if defined(BOOST_HAS_PRAGMA_ONCE)
# pragma once
#endif

#include <lslboost/interprocess/detail/config_begin.hpp>
#include <lslboost/interprocess/detail/workaround.hpp>

#ifndef BOOST_NO_EXCEPTIONS
#include <exception>
#endif

namespace lslboost{
namespace interprocess{

class bad_weak_ptr
   :  public std::exception
{
   public:

   virtual char const * what() const throw()
   {  return "lslboost::interprocess::bad_weak_ptr"; }
};

} // namespace interprocess
} // namespace lslboost

#include <lslboost/interprocess/detail/config_end.hpp>

#endif  // #ifndef BOOST_INTERPROCESS_BAD_WEAK_PTR_HPP_INCLUDED