# Creating a cython wrapper class


"except +" : If the C++ code or the initial memory allocation raises an exception due to failure, this
will let cython safely raise an appropriate Python exception instad.

"int _Area 'Area'()": is another way other than "int Area()"

Command used is : `python setup.py build_ext --inplace`