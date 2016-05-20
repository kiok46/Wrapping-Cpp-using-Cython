#include "test.h"
#include <iostream>
using namespace std;

namespace shapes {
	int length, width;
	/*Rectangle::Rectangle() {
		cout << "Constructor called" << endl;
	}*/

    Rectangle::Rectangle(int l, int w) {
    	cout << "Constructor with values called";
    	length = l;
    	width = w;
    }

    Rectangle::Rectangle(bool i){

    }
    Rectangle::Rectangle(int i){

    }
    Rectangle::Rectangle(int i, bool u){
    	
    }

	Rectangle::~Rectangle() {
		cout << "Destructor called" << endl;
	}

	int Rectangle::Area() {
		return length*width;
	}
	int Rectangle::Circumference() {
		return 2*(length + width);
	}
}