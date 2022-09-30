# Name: Bhut Tushar

# Assignment 6
import numpy as np
import matplotlib.pyplot as plt

fig = plt.figure()
ax = plt.axes(projection="3d")

z = np.linspace(0, 15, 1000)
x = np.cos(z)
y = np.sin(z)
ax.plot3D(x, y, z, 'red')

plt.show()
