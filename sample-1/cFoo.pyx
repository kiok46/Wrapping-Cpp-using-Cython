cdef extern from "Foo.h":
    cdef cppclass Foo:
        double alfa
    Foo *new_Foo "new_Foo" ()
    void del_Foo "delete" (Foo *myfoo)

cdef class cFoo:
    cdef Foo *thisptr      # hold a C++ instance which we're wrapping
    def __cinit__(self):
         self.thisptr = new_Foo()
    def __dealloc__(self):
         del_Foo(self.thisptr)