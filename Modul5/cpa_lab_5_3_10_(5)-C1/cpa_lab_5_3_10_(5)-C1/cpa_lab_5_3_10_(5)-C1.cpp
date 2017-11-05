// cpa_lab_5_3_10_(5)-C1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
class Fraction {
public:
	Fraction(int numerator, int denominator);
	string toString();
	double toDouble();
private:
	int numerator;
	int denominator;
};
// implement Fraction methods
Fraction::Fraction(int numerator, int denominator) {


	if (denominator == 0)
		this->denominator = 1;
	else if (denominator<0) {
		this->denominator = -denominator;
		this->numerator = -numerator;
	}
	else {
		this->denominator = denominator;
		this->numerator = numerator;
	}

}
string Fraction::toString() {
	if (numerator*denominator<0)
	{
		if (numerator%denominator == 0)
			return to_string(numerator / denominator);
		if (numerator / denominator == 0)
			return to_string(numerator) +(string)"/" + to_string(denominator);
		return to_string(numerator/denominator)+(string)" "+to_string(-(numerator%denominator))+(string) "/" +to_string( denominator);
	}
	if (numerator%denominator == 0)
		return to_string(numerator / denominator);
	if (numerator / denominator == 0)
		return to_string(numerator) + (string)"/" + to_string(denominator);
	return to_string(numerator/denominator) + (string)" " + to_string(numerator%denominator) + (string) "/" + to_string(denominator);


}
double Fraction::toDouble() {
	return float(numerator) / denominator;
}
int main(void) {
	int num, den;
	std::string input = "";
	getline(cin, input);
	// parse input and get numerator and denominator
	num = atoi((input.substr(0, input.find("/"))).c_str());
	int q = input.find("/");
	string w = input.substr(q+1);
	den = atoi(w.c_str());
	Fraction fraction(num, den);
	cout << fraction.toString() << " is " << fraction.toDouble() << " in decimal" << endl;
	return 0;
}
