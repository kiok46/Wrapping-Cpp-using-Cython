from distutils.core import setup
from Cython.Build import cythonize

setup(ext_modules = cythonize(
           "cFoo.pyx",                 # our Cython source
           sources=["Foo.cpp"],        # additional source file(s)
           language="c++",             # generate C++ code
      ))