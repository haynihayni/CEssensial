// cpa_lab_6_4_4_(1)-B.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class StringValidator
{
public:
	virtual ~StringValidator() {};
	virtual bool isValid(string input) {
		return false;
	};
};
// Write your code here
class ExactValidator : public StringValidator {
private:
	string pass;
public:
	ExactValidator() {
		pass = "";
	}
	ExactValidator(string p) {
		pass = p;
	}
	bool isValid(string input) {
		return pass == input;
	}
};
class DummyValidator : public StringValidator {
public:
	virtual bool isValid(std::string input) {
		return true;
	}
};
void printValid(StringValidator *validator, string input)
{
	cout << "The string '" << input << "' is "
		<< (validator->isValid(input) ? "valid" : "invalid") << endl;
}
int main()
{
	DummyValidator dummy;
	printValid(&dummy, "hello");
	cout << endl;
	ExactValidator exact("secret");
	printValid(&exact, "hello");
	printValid(&exact, "secret");
	return 0;
}
