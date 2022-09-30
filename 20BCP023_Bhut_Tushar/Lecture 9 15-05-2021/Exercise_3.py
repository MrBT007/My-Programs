# Name: Bhut Tushar

# Assignment 3
import numpy as np
import matplotlib.pyplot as plt

plt.title("Sine wave")
plt.xlabel("Radian")
plt.ylabel("Value of sine function")
x = np.arange(0, 5*(np.pi), 0.001)
y = np.sin(x)
plt.plot(x, y)
plt.show()
