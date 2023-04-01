#include <iostream>
#include <string>
#include <vector>
#include <regex>
#include <algorithm>
#include <cctype>
#include <map>
#include <iterator>

bool has_any_digits(const std::string& s){
		return std::any_of(s.begin(), s.end(), ::isdigit);
	}

bool has_any_special_character(const std::string& str){
		return std::any_of(str.begin(), str.end(), [](char c) {
		return !std::isalnum(c);
	});
	}

std::string ValPass(const std::string& pword){
	if (pword.length() != 8)
		return "The password must have 8 characters long";
	else if (!has_any_digits(pword))
		return "The password must have at least one digit";
	else if (!std::any_of(pword.begin(), pword.end(), ::isupper))
		return "The password must have at least one upper-case letter";
	else if (!std::any_of(pword.begin(), pword.end(), ::islower))
		return "The password must have at least one lower-case letter";
	else if (!has_any_special_character(pword))
		return "The password must have at least one special character";
	else
		return "The password has been validated";
	}

int main(){
std::cout << "Enter the password: ";
std::string pword;
getline(std::cin, pword);
std::string valRes = ValPass(pword);
std::cout << valRes;

return 0;
}