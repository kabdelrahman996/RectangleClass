#pragma once
class Rectangle
{
private:
	int length;
	int width;

public:
	// Default Constructor
	Rectangle();
	
	// Constructor to initialize length and width
	Rectangle(int, int);

	// Setter
	void set_length(int);
	void set_width(int);

	// Getter
	int get_length();
	int get_width();
	int get_area();
	int get_perimeter();

	// Distructor
	~Rectangle();
};

