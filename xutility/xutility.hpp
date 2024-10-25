/*
    *File is part of xorutility*
       *File: xutility.hpp*
*/
#pragma once

#ifndef XUTILITY
#define XUTILITY

#endif

namespace XUtility{

class UtilityStandard{
public:

 UtilityStandard();
 virtual ~UtilityStandard();

  UtilityStandard * utility_ptr;

  const char * XUtilityString(const XUtility * string)const;

};

};
