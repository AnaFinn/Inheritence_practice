#include <iostream>
#include <string>
using namespace std;



class Shape {
protected:
	int sides;
	int length;
	int width;
	string name;



public:
	int calculateArea(int len, int wid) {
		int output = wid * len;
		return output;
	}

	virtual void SetSides(int count) {
		sides = count;
		cout << "Number of sides in shape is " << sides;
	}
	virtual void SetSize(int wid, int len) {
		length = len;
		width = wid;
		cout << "\nShape Length = " << len << "\nShape Width = " << wid << "\n\n";
	}
	int GetSides() {
		return sides;
	}
	int GetWidth() {
		return width;
	}
	int GetLength() {
		return length;
	}



	virtual void output() = 0;
};



class Triangle : public Shape {
public:
	Triangle(int wid, int len) {
		width = wid;
		length = len;
	};



	void setName() {
		name = "Triangle";
	}
};



class Rectangle : public Shape {
public:
	Rectangle(int wid, int len) {
		wid = width;
		len = length;
	};
	void SetSides() {



	}



	void output() {
		cout << "This is the Rectangle class of Quad";
	}
};




int main()
{
	Shape* base;
	Rectangle quad{ 3, 8 };
	base = &quad;



	quad.SetSides(4);



	cout << "Quad length = " << quad.GetLength() << endl;
	cout << "Quad width = " << quad.GetWidth() << endl;
	cout << "Quad side count = " << quad.GetSides() << endl;
}

