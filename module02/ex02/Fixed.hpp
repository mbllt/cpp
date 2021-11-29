#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <cstdlib>
#include <iostream>
#include <cmath>

class Fixed {

	public:

		Fixed ();
		Fixed (const int i);
		Fixed (const float f);
		Fixed (Fixed const& cpy);
		~Fixed ();

		Fixed&				operator=(Fixed const & src);
		Fixed				operator+(Fixed const & src) const;
		Fixed				operator-(Fixed const & src) const;
		Fixed				operator*(Fixed const & src) const;
		Fixed				operator/(Fixed const & src) const;
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		Fixed&				min(Fixed const fixed1, Fixed const fixed2) const;
		Fixed&				max(Fixed const fixed1, Fixed const fixed2) const;


	private:

		int					_rawBits;
		static int	const	_nbBits;


};

std::ostream&		operator<<(std::ostream & o, Fixed const & src);
std::ostream&		operator<(std::ostream & o, Fixed const & src);
std::ostream&		operator<=(std::ostream & o, Fixed const & src);
std::ostream&		operator>(std::ostream & o, Fixed const & src);
std::ostream&		operator>=(std::ostream & o, Fixed const & src);
std::ostream&		operator==(std::ostream & o, Fixed const & src);
std::ostream&		operator!=(std::ostream & o, Fixed const & src);

#endif