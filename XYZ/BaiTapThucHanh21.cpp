#include <iostream>
using namespace std;

class Fraction {
	friend ostream& operator << (ostream& os, const Fraction& f);
	int numerator; 
	int denominator; 
public:
	Fraction(int num = 0, int den = 1) {
		numerator = num;
		if (den == 0) {
			denominator = 1;
		}
		else {
			denominator = den;
		}
	}

	Fraction operator + (const Fraction& other) {
		Fraction sum;
		if (denominator == other.denominator) {
			sum.denominator = denominator;
			sum.numerator = numerator + other.numerator;
		}
		else {
			sum.denominator = denominator * other.denominator;
			sum.numerator = numerator * other.denominator + other.numerator * denominator;
		}
		sum.reduce();
		return sum;
	}
	void reduce() {
		int gValue = gcd(numerator, denominator);
		numerator /= gValue;
		denominator /= gValue;
	}
	int gcd(int a, int b) {
		if (a == 0) {
			return 1;
		}
		if (a < 0) {
			a *= -1;
		}
		if (b < 0) {
			b *= -1;
		}
		while (a != b) {
			if (a > b) {
				a -= b;
			}
			else {
				b -= a;
			}
		}
		return a;
	}
};

ostream& operator << (ostream& os, const Fraction& f) {
	os << f.numerator << " / " << f.denominator;
	return os;
}

int main() {
	Fraction* fractions = new Fraction[5];
	fractions[0] = Fraction(1, 5);
	fractions[1] = Fraction(3, 25);
	fractions[2] = Fraction(4, 25);
	fractions[3] = Fraction(5, 50);
	fractions[4] = Fraction(5, 75);
	Fraction s;
	for (int i = 0; i < 5; i++)
	{
		cout << fractions[i];
		if (i != 4) {
			cout << " + ";
		}
		else {
			cout << " = ";
		}
		s = s + fractions[i];
	}
	cout << s << endl;

	return 0;
}
