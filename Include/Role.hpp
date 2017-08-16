#pragma once

enum class Role
{
	AUTHOR,
	READER
};

struct User
{
	int m_userId;
	Role m_userRole;
};