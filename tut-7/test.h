#ifndef TEST_H
#define TEST_H

void independent();

namespace shapes{
    class Box {
        public:
            double getVolume();
            void setLength(double l);
            void setBredth(double b);
            void setHeight(double h);
            Box operator+(const Box& b);
        private:
            double length;
            double breadth;
            double height;
    };
    class Triangle {
        public:
            double getParameter();
            void setSide(double s);
        private:
            double side;
    };

}
#endif