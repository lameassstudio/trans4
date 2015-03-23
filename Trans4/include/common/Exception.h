#pragma once

#include <exception>
#include <string>

namespace tk4 {
	class Exception : public std::exception {
	public:
		Exception(std::string message) throw();
		virtual ~Exception() throw();

		inline virtual const char *what() const throw()	{
			return m_message.c_str();
		}

	private:
		std::string m_message;
	};
}