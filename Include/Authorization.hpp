#pragma once
#include "ILogin.hpp"
#include "IResource.hpp"
#include "IAcounting.hpp"
#include "Role.hpp"
#include <iostream>
#include <exception>

class NoPermissionException : public std::exception
{};

class NoLoginException : public std::exception
{};

class Authorization
{
public:
    Authorization(ILogin& p_login, IResource& p_resource, IAcounting& p_acouting)
        :m_login(p_login), m_resource(p_resource), m_acouting(p_acouting)
    {}
    void login(const std::string& username, const std::string& password);
    void read();
    void write();
    void account(const std::string& username);
private:
	  ILogin& m_login;
	  IResource& m_resource;
	  IAcounting& m_acouting;
	  User m_user;
};