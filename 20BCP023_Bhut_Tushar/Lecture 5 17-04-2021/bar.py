# Name: Bhut Tushar

import pylab as p

subjects = ['C', 'C++', 'Java', 'Python', 'PHP']
students = [23, 17, 35, 39, 12]

p.title('Students enrolled in 2020')
p.xlabel('Subjects')
p.ylabel('Number of Students')

p.bar(subjects, students)

p.show()
