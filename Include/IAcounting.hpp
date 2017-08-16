#pragma once
#include <iostream>
using namespace std;
class IAcounting
{
public:
    virtual bool IsVIPMember(const int) = 0;
    virtual void recordBill() = 0;
    
};