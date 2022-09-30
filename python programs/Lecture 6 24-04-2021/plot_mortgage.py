# Name: Bhut Tushar

import numpy as np
import pylab as plt

Sales_Price = float(input('Enter sales price for house in Rs: '))
Down_Payment = float(
    input('Enter down payment as percentage of Sales Price, eg, 5 for 5%: '))

Loan_Amount = Sales_Price*(1-Down_Payment/100)  # calculate loan amount

Mortgage_Type = float(
    input('Enter mortgage type in years, eg, 15 for 15 years: '))

Loan_Term = int(12*Mortgage_Type)   # calculate loan term in months

Interest_Rate = float(
    input('Enter loan interest rate as a percentage, eg, 5 for 5%: '))

R = 1 + (Interest_Rate)/(12*100)    # calculate R
# monthly payment fot the mortgage
X = Loan_Amount*(R**Loan_Term)*(1-R)/(1-R**Loan_Term)

Monthly_Interest = []
Monthly_Balance = []

for i in range(1, Loan_Term+1):
    Interest = Loan_Amount*(R-1)
    Loan_Amount = Loan_Amount - (X-Interest)
    # Monthly_Interest.append(Interest)
    Monthly_Interest = np.append(Monthly_Interest, Interest)
    Monthly_Balance = np.append(Monthly_Balance, Loan_Amount)

print('The home sales price is: Rs', Sales_Price)
print('The down payment as a percentage of sales price is: ', Down_Payment, '%')
print('The loan amount is: ', Sales_Price*(1-Down_Payment/100))
print('The interest rate on annual percentage basis is: ', Interest_Rate, '%')
print('The duration of this loan, that is the Loan Term is: ', Loan_Term, 'months')
print('Monthly payment for this Mortgage(P & T) is: ', np.round(X, 2), 'Rs')
print('Total interest paid over life cycle of the loan is: ',
      np.round(np.sum(Monthly_Interest), 2))

plt.subplot(2, 1, 1)
plt.plot(range(1, Loan_Term+1), Monthly_Interest, 'r', lw=5)
plt.xlabel('month')
plt.ylabel('monthly interest (Rs)')
plt.subplot(2, 1, 2)
plt.plot(range(1, Loan_Term+1), Monthly_Balance, 'b', lw=2)
plt.xlabel('month')
plt.ylabel('monthly loan balance (Rs.)')
plt.show()
