#include "test.h"
#include <iostream>
using namespace std;

namespace shapes {
	Rectangle::Rectangle() {
		cout << "Constructor called" << endl;
	}
	Rectangle::~Rectangle() {
		cout << "Destructor called" << endl;
	}
}