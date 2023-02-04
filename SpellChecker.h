#ifndef SPELLCHECKER_H
#define SPELLCHECKER_H
#define constexpr unsigned M_WORDS{ 6 };

namespace sdds {
	class SpellChecker {
		std::string m_badWords[6]{};
		std::string m_goodWords[6]{};
		//constexpr unsigned M_WORDS{ 6 };
		unsigned m_counter[6]{ 0 };
	public:
		SpellChecker() {};
		SpellChecker(const char* filename);
		void operator()(std::string& text);
		void showStatistics(std::ostream& out);
	};
}
#endif // !SPELLCHECKER_H