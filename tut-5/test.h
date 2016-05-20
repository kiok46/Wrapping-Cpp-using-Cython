#ifndef TEST_H
#define TEST_H

namespace shapes {
    class Rectangle {
        public:
        	int l, w;
            //Rectangle();
            ~Rectangle();
            Rectangle(int l, int w);
            Rectangle(int i);
            Rectangle(bool i);
            Rectangle(int i, bool u);

            int Area();
            int Circumference();
    };
}

#endif