#pragma once
#include "gmock/gmock.h"
#include "IAcounting.hpp"
using namespace ::testing;

class IAcountingMock: public IAcounting
{
public:
	  MOCK_METHOD1(IsVIPMember, bool(const int));
	  MOCK_METHOD0(recordBill, void());    
};