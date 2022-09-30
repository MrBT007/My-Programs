# Name: Bhut Tushar

try:
    inp = input('Press Ctrl+C or Interrupt the Kernel: ')
except KeyboardInterrupt:
    print('Caught KeyboardInterrupt')
else:
    print('NO exception has occured')
finally:
    print('End of the program')
