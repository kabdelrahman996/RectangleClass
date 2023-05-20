#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle() :length(0), width(0) {}
Rectangle::Rectangle(int l, int w)
{
	length = l;
	width = w;
}

void Rectangle::set_length(int l)
{
	length = l;
}

void Rectangle::set_width(int w)
{
	width = w;
}

int Rectangle::get_length()
{
	return length;
}

int Rectangle::get_width()
{
	return width;
}

int Rectangle::get_area()
{
	return length * width;
}

int Rectangle::get_perimeter()
{
	return 2 * (length * width);
}

Rectangle::~Rectangle()
{
	cout << "End of the program." << endl;
}