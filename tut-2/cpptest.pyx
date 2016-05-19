cdef extern from "test.h" namespace "shapes":
    cdef cppclass Rectangle:
        Rectangle() except +


cdef Rectangle *rec = new Rectangle()
try:
    print "rectangle created"
finally:
    del rec # delete heap allocated object
