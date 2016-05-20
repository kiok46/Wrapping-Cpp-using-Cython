#include "test.h"
#include <iostream>
using namespace std;

void independent(){
    cout << "I am a independent function" << endl;
}

namespace shapes{

        double Box::getVolume(){
            return length * breadth * height;
        }

        void Box::setLength(double l){
            length = l;
        }

        void Box::setBredth(double b){
            breadth = b;
        }
        void Box::setHeight(double h){
            height = h;
        }

        Box Box::operator+(const Box& b){
            Box box;
            box.length = this->length + b.length;
            box.breadth = this->breadth + box.breadth;
            box.height = this->height + b.height;
            return box;
        }

  
        double Triangle::getParameter() {
            return side*3;
        }

        void Triangle::setSide(double s) {
            side = s;
        }

};

int main(){
    shapes::Box Box1;
    shapes::Box Box2;
    shapes::Box Box3;

    double volume = 0.0;

    Box1.setLength(6.0);
    Box1.setBredth(7.0);
    Box1.setHeight(5.0);


    Box2.setLength(12.0);
    Box2.setBredth(13.0);
    Box2.setHeight(10.0);

    volume = Box1.getVolume();

    cout << "Volume of Box1 :" << volume << endl;

    volume = Box2.getVolume();

    cout << "Volume of Box2 :" << volume << endl; 

    Box3 = Box1 + Box2;
    volume = Box3.getVolume();

    cout << "Volume of Box3 : "<< volume << endl;

    return 0;

}