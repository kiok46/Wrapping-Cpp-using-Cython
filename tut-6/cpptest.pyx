cdef extern from "test.h" namespace "shapes":
    cdef cppclass Box:
        double _getVolume "getVolume"()
        void _setLength "setLength"(double l)
        void _setBredth "setBredth"(double b)
        void _setHeight "setHeight"(double h)
        Box* operator+(Box*)
        

# Let's make this C++ wrapped class accessable via python class.

cdef class pyBox:
    cdef Box *c_box
    def __cinit__(self):
        self.c_box = new Box()

    def setLength(self, l):
        return self.c_box._setLength(l)
    
    def setBredth(self, b):
        return self.c_box._setBredth(b)

    def setHeight(self, h):
        return self.c_box._setHeight(h)

    def getVolume(self):
        return self.c_box._getVolume()

    def __dealloc__(self):
        #pass
        del self.c_box
