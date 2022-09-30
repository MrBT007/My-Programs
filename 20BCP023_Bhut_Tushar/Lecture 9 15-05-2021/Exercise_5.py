# Name: Bhut Tushar

# Assignment 5
import matplotlib.pyplot as plt
import numpy as np
party = ['A', 'B', 'C', 'D', 'E']
votes = [230, 170, 350, 290, 120]
plt.title("Number of votes secured by different parties")
plt.xlabel("Parties")
plt.ylabel("Number of votes")
plt.bar(party, votes)
plt.show()
