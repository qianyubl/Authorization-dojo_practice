#pragma once
#include "gmock/gmock.h"
#include<iostream>
#include "ILogin.hpp"
#include "Role.hpp"
using namespace ::testing;

class ILoginMock: public ILogin
{
public:
    MOCK_METHOD2(login, User(const std::string&, const std::string&));
};