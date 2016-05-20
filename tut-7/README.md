# Creating a cython wrapper class winthout nully constructor


"except +" : If the C++ code or the initial memory allocation raises an exception due to failure, this
will let cython safely raise an appropriate Python exception instad.

"int _Area 'Area'()": is another way other than "int Area()"

Command used is : `python setup.py build_ext --inplace`

Note:

Cython initializes C++ attributes of a cdef class using the nullary constructor.
If the class you're wrapping does not have a nully constructor, you must store a pointer 
to the wrapped class and manually allocate and deallocate it.
A convenient and safe place to do so is in the __cinit__ and __dealloc__ methods
which are guranteed to be called exactly one upon creation and deletion if the 
python instance.