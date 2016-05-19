from distutils.core import setup
from Cython.Build import cythonize
from distutils.extension import Extension
from Cython.Distutils import build_ext


ext_modules = [Extension("test",
               ["cpptest.pyx", "test.cpp"],
               language = "c++",
               )]

setup(
    name = "test_",
    cmdclass = {'build_ext': build_ext},
    ext_modules = ext_modules
    )
