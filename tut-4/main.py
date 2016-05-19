import test
print dir(test)
from test import pyRectangle
print dir(pyRectangle)

instance = pyRectangle(3, 4)

print "Area is :{}".format(instance.Area())
print "Circumference is :{}".format(instance.get_circumference())