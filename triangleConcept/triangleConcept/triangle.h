#include <iostream>
#include <string>
using namespace std;

class triangle {
private:
	float sideA, sideB, sideC;

public:
	triangle(float a, float b, float c);
	~triangle();
	triangle(const triangle& oth);
	bool isTriangle(float a, float b, float c);
	float getSideA() const {
		return sideA;
	}
	float getSideB() const {
		return sideB;
	}
	float getSideC() const {
		return sideC;
	}
	void setValue(float a, float b, float c);
	bool isEquilateral();
	bool isScalene();
	bool isIsosceles();
	void triangleType();
	float calculateArea();

};

	

bool triangle::isTriangle(float a, float b, float c) {
	//side A:mutlak deðer(b-c)<a<(b+c)
	if (!(abs(b - c) < a && a < (b + c))) {
		cout << "invalid A" << endl;
		return false;
	}
	
	if (!(abs(a - c) < b && b < (a + c))) {
		cout << "invalid B" << endl;
		return false;
	}

	if (!(abs(a - b) < c && c < (a + b))) {
		cout << "invalid C" << endl;
		return false;
	}

	return true;
}

triangle::triangle(float a, float b, float c) {
	while (!isTriangle(a, b, c)) {
		cout << "please enter the sides(a-b-c)" << endl;
		cin >> a >> b >> c;
	}

	sideA = a;
	sideB = b;
	sideC = c;
	cout << "triangle created" << endl;
}

triangle::~triangle() {
	cout << "triangle destroyed" << endl;
}

triangle::triangle(const triangle& oth) {
	sideA = oth.sideA;
	sideB = oth.sideB;
	sideC = oth.sideC;
	cout << "triangle copied to the target" << endl;
}

void triangle::setValue(float a, float b, float c) {
	while (!isTriangle(a, b, c)) {
		cout << "please enter the sides(a-b-c)" << endl;
		cin >> a >> b >> c;
	}
	sideA = a;
	sideB = b;
	sideC = c;
}

bool triangle::isEquilateral() {
	return sideA == sideB && sideC == sideB;
}

bool triangle::isIsosceles() {
	if (isEquilateral()) {
		return true;
	}
	else {
		return sideA == sideB || sideB == sideC || sideA == sideC;
	}
}

bool triangle::isScalene() {
	return !isEquilateral();
}

void triangle::triangleType() {
	if (isEquilateral()) {
		cout << "equilateral triangle" << endl;
	}
	else if (isIsosceles()) {
		cout << "isosceles triangle" << endl;
	}
	else {
		cout << "scalene triangle" << endl;
	}
}

float triangle::calculateArea() {
	float area;
	if (isEquilateral()) {
		area = (pow(sideA, 2) * sqrt(3)) / 4;
		return area;
	}
	float u, kokici;
	u = (sideA + sideB + sideC) / 2;
	area=sqrt(u * (u - sideA) * (u - sideB) * (u - sideC));
	return area;
	
}
