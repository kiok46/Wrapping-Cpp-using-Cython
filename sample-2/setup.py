'''
from distutils.core import setup
from distutils.extension import Extension
from Cython.Distutils import build_ext
 
setup(
  name = 'Demos',
  ext_modules=[ 
    Extension("test", 
              sources=["test.pyx", "cpp_test.cpp"], # Note, you can link against a c++ library instead of including the source
              language="c++"),
    ],
  cmdclass = {'build_ext': build_ext},
 
)
'''

from distutils.core import setup
from Cython.Build import cythonize

setup(ext_modules = cythonize(
           "test.pyx",                 # our Cython source
           sources=["cpp_test.cpp"],        # additional source file(s)
           language="c++",             # generate C++ code
      ))