# Name: Bhut Tushar

# Exercise 4
import matplotlib.pyplot as plt
import numpy as np
x = np.arange(100, 200, 20)

plt.xticks(np.arange(100, 200, 10))

# team 1
y1 = [150, 130, 140, 120, 170]
plt.scatter(x, y1, color='red')
plt.plot(x, y1, color='red')

# team 2
y2 = [110, 100, 160, 130, 140]
plt.scatter(x, y2, color='blue')
plt.plot(x, y2, color='#4169e1')

plt.draw()

plt.title("Comparision between 2 teams")

plt.show()
