cdef extern from "test.h" namespace "shapes":
    cdef cppclass Rectangle:
        #Rectangle() except +
        Rectangle(int, int) except +
        int l, w
        int _Area "Area"()
        int Circumference()

# Let's make this C++ wrapped class accessable via python class.

cdef class pyRectangle:
    cdef Rectangle *c_rect
    def __cinit__(self, int l, int w):
        self.c_rect = new Rectangle(l, w)
    def Area(self):
        return self.c_rect._Area()
    def get_circumference(self):
        return self.c_rect.Circumference()
    def __dealloc__(self):
        #pass
        del self.c_rect
