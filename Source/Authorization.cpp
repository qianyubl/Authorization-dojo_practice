#include "Authorization.hpp"

using namespace std;

void Authorization::login(const string& username, const string& password)
{
    m_user = m_login.login(username, password);
}

void Authorization::read()
{   
	  if()
	  if(not m_acouting.IsVIPMember(m_user.m_userId))
	  {
	      
	  }
	  	
    if(m_user.m_userRole == Role::AUTHOR || m_user.m_userRole == Role::READER)
    {
        m_resource.read();
        return;
    }
    throw NoPermissionException{};
}

void Authorization::write()
{
    if(m_user.m_userRole == Role::AUTHOR)
    {
        m_resource.write();
        return;
    }
    throw NoPermissionException{};
}

