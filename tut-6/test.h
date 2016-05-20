#ifndef TEST_H
#define TEST_H

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
}
#endif