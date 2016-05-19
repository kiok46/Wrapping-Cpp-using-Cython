cdef extern from "test.h":
    int _add "add"(int a, int b)
    int _multiply "multiply"(int a, int b)

def add(a, b):
    return _add(a, b)

def multiply(a, b):
    return _multiply(a, b)
