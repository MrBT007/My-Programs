# Name: Bhut Tushar

import pylab

x = ['Feb', 'Mar', 'Apr']

y1 = [205, 190, 63]
y2 = [5, 130, 605]

pylab.title(
    'Comparing deaths by accident and by COVID 19 for city Ahmedabad in 2019')

pylab.plot(x, y1)
pylab.plot(x, y2)

pylab.xlabel('Month')
pylab.ylabel('Number of Deaths')
pylab.legend(["Accidents", "COVID 19"])

pylab.show()
