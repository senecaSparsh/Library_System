
#pragma once
#ifndef MOVIE_H
#define MOVIE_H

namespace sdds {
	class Movie {
		std::string m_movTitle{};
		size_t m_releaseYear{ 0 };
		std::string m_movDescription{};
		std::string clrSpace(const std::string strin);
	public:
		Movie() {};
		const std::string& title()const;
		Movie(const std::string& strMovie);
		template<typename T>
		void fixSpelling(T& spellChecker) {
			spellChecker(m_movTitle);
			spellChecker(m_movDescription);
		}
		friend std::ostream& operator<<(std::ostream& os, const Movie& movie);
	};

}
#endif // !MOVIE_H
