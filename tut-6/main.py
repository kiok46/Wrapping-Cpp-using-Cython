import test
print dir(test)
from test import pyBox
print dir(pyBox)

instance = pyBox()

instance.setLength(10)
instance.setBredth(10)
instance.setHeight(10)
print "Volume is :{}".format(instance.getVolume())
