#pragma once
#include <iostream>

class User;
class ILogin
{
public:
		virtual User login(const std::string&, const std::string&)=0;
};