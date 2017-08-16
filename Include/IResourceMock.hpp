#pragma once
#include "gmock/gmock.h"
#include "IResource.hpp"
using namespace ::testing;

class IResourceMock: public IResource
{
public:
	  MOCK_METHOD0(read, void());
	  MOCK_METHOD0(write, void());
};