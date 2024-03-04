#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class contact
{
	private:
		std::string _fname;
		std::string _lname;
		std::string _nickname;
		std::string _phone_nb;
		std::string _secret;
	public:
		contact();
		~contact();

		static int number_total;
		std::string get_fname(void) const;
		std::string get_lname(void) const;
		std::string get_nickname(void) const;
		std::string get_phone_nb(void) const;
		std::string get_secret(void) const;
		void	add(void);
};

#endif
