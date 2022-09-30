# Name: Bhut Tushar

import pylab as p

fig = p.figure()

ax = p.axes(projection='3d')

z = [1, 2, 3, 4, 5]
x = [30, 4, 5, 6, 7]
y = [0, 2, 4, 6, 8]

ax.plot3D(x, y, z)

ax.set_title('3D line plot')
ax.set_xlabel('X axis')
ax.set_ylabel('Y axis')
ax.set_zlabel('Z axis')

p.show()
