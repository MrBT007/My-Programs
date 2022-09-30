# Name: Bhut Tushar

# Draw a plot showing the growth of an initial investment of Rs 10,000 at an annually compounded interest at rate of 7%
import pylab

principal = 10000   # initial investment
interestRate = 0.07 #7%
years = 10
values = []

for i in range(years+1):
    values.append(principal)
    principal += principal*interestRate

# pylab.rcParams['lines.linewidth'] = 6 # Change the default line width to 6

pylab.plot(values)  # corrseponding x coordinates are range(11) which means 0 to 10

# default format string is 'b-', which produces a solid blue line
#pylab.plot(values,'ro') # To plot the above with red circles

pylab.title('7 percent growth, Compound Annually')

# pylab.title('7 percent growth, Compounded Annually', fontsize = 'xx-large') # Changes the font-size

pylab.xlabel('Years of compounding')
pylab.ylabel('Value of principal(Rs.)')
pylab.show()
