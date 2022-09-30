# Name: Bhut Tushar

nameHandle = open('test.txt', 'w')
for i in range(2):
    name = input('Enter name: ')
    nameHandle.write(name + '\n')
nameHandle.close()

nameHandle = open('test.txt', 'a')
nameHandle.write('PDPU\n')
nameHandle.write('Gandhinagar\n')
nameHandle.writelines(['See you there \n', 'Bye  bye'])
nameHandle.close()

nameHandle = open('test.txt', 'r')
# print('Third line: ', nameHandle.readline(1))
print('Contents of the file: ', nameHandle.name)
for line in nameHandle:
    print(line[:-1])
nameHandle.close()

nameHandle = open('test.txt', 'r')
print('Contents of the file after offset: ', nameHandle.name)
nameHandle.seek(10)
for line in nameHandle:
    print(line[:-1])
nameHandle.close

print('Contents of the file: ', nameHandle.name)
nameHandle = open('test.txt', 'r')
print('readlines() operation: ', nameHandle.readlines())
nameHandle.close

nameHandle = open('test.txt', 'a+')
nameHandle.write('\nGujarat')
print('Current postion: ', nameHandle.tell())
nameHandle.seek(0)
print('Read string of 2 bytes: ', nameHandle.read(2))
nameHandle.seek(0)
print('Contents of the file before truncating: ', nameHandle.name)
for line in nameHandle:
    print(line[:-1])
nameHandle.seek(0)
nameHandle.truncate(3)
print('Contents of the file after truncating to first 2 bytes of: ', nameHandle.name)
for line in nameHandle:
    print(line[:-1])
nameHandle.close
