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
    std::regex_constants::match_flag_type fl = 
    std::regex_constants::match_default; 

	std::cout << "search(f, f+1, \"abc\") == " << std::boolalpha 
        << regex_search(first, first + 1, rx, fl) << std::endl; 
 
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

	int x;
	std::cin >> x;

	return 0;
}

