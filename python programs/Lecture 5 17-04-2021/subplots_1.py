# Name: Bhut Tushar

import pylab as p

p.suptitle('Vertically Stacked Subplots')

x = [0, 1, 2, 3]
y = [3, 8, 1, 10]

p.subplot(2, 1, 1)
p.plot(x, y)
p.title('figure-1')

x = [0, 1, 2, 3]
y = [10, 20, 30, 40]

p.subplot(2, 1, 1)
p.plot(x, y)
p.title('figure-2')

p.show()
