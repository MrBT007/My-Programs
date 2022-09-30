import pylab

pylab.figure(1)
pylab.plot([1, 2, 3, 4], [1, 2, 3, 4])
pylab.savefig('Figure-1')

pylab.figure(2)
pylab.plot([1, 4, 2, 3], [5, 6, 7, 8])
pylab.savefig('Figure-2')

pylab.figure(1)
pylab.plot([5, 6, 10, 3])
# This updates the y values. Corresponding x values  default to range(len([5,6,10,3])) which is [0,1,2,3]
pylab.savefig('Figure1_2')
