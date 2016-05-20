import test
print dir(test)
from test import pyBox, pyTriangle
print dir(pyBox)

box_instance = pyBox()

box_instance.setLength(10)
box_instance.setBredth(10)
box_instance.setHeight(10)
print "Box volume is :{}".format(box_instance.getVolume())
print

triangle_instance = pyTriangle()

triangle_instance.setSide(10)
print "Triangle parameter is :{}".format(triangle_instance.getParameter())
print

test.independent()
