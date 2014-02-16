// CPPRegexCode.cpp : Defines the entry point for the console application.
//
//http://msdn.microsoft.com/en-us/library/bb982334.aspx
//regex_search Function

#include "stdafx.h"
#include <regex> 
#include <iostream> 

int _tmain(int argc, _TCHAR* argv[])
{
	const char *first = "abcd"; 
    const char *last = first + strlen(first); 
    std::cmatch mr; 
    std::regex rx("abc"); 
    std::regex_constants::match_flag_type fl = std::regex_constants::match_default; 

	std::cout << std::endl << "first:" << first << " rx:" <<  "abc   fl:" << fl << std::endl;

	std::cout << "search(f, f+1, \"abc\") == " << std::boolalpha 
        << regex_search(first, first + 1, rx, fl) << std::endl; 
 
	std::cout << std::endl << "end of regex_search first search" << std::endl;

	std::cout << std::endl << "first:" << first << " *first + 1:" << *first + 1 << " " << "" << char(*first + 1) << std::endl;

	std::cout << "test 10   search(f, f+1, \"abc\") == " << std::boolalpha 
        << 
		/*regex_search(test10, test10+ 1, rx, fl)*/
		regex_search("abxcabc", rx, fl)
		<< std::endl; 
	std::cout << "\nend of test10 \n";

	std::cout << "test 11:size is + 2 == " << std::boolalpha 
        << 
		/*regex_search(test10, test10+ 1, rx, fl)*/
		regex_search(first,first + 2, rx, fl)
		<< std::endl; 

	std::cout << "test 11:size is + 3 == " << std::boolalpha 
        << 
		/*regex_search(test10, test10+ 1, rx, fl)*/
		regex_search(first,first + 3, rx, fl)
		<< std::endl; 

	std::cout << "test 11:size is + 4 == " << std::boolalpha 
        << 
		/*regex_search(test10, test10+ 1, rx, fl)*/
		regex_search(first,first + 4, rx, fl)
		<< std::endl; 
	int firstSize = sizeof(first);
	std::cout << "test 11:size is + 14 (string length is " << sizeof(firstSize) << ") == " << std::boolalpha 
        << 
		/*regex_search(test10, test10+ 1, rx, fl)*/
		regex_search(first, first + 14, rx, fl)
		<< std::endl; 

	std::cout << "\nend of test11 \n";

    std::cout << "search(f, l, \"abc\") == " << std::boolalpha 
        << regex_search(first, last, mr, rx) << std::endl; 
    std::cout << "  matched: \"" << mr.str() << "\"" << std::endl; 
 
    std::cout << "search(\"a\", \"abc\") == " << std::boolalpha 
        << regex_search("a", rx) << std::endl; 
 
    std::cout << "search(\"xabcd\", \"abc\") == " << std::boolalpha 
        << regex_search("xabcd", mr, rx) << std::endl; 
    std::cout << "  matched: \"" << mr.str() << "\"" << std::endl; 
 
    std::cout << "search(string, \"abc\") == " << std::boolalpha 
        << regex_search(std::string("a"), rx) << std::endl; 
 
    std::string str("abcabc"); 
    std::match_results<std::string::const_iterator> mr2; 
    std::cout << "search(string, \"abc\") == " << std::boolalpha 
        << regex_search(str, mr2, rx) << std::endl; 
    std::cout << "  matched: \"" << mr2.str() << "\"" << std::endl; 
	
	int x = std::cin.get();

	return 0;
}

