# coding=utf-8
"""
输入你的姓和名，输出首字母大写的姓名

"""
first_name = input()
last_name = input()

#*******请输入您的代码********#
#***********begin************#

a = first_name[0].upper()
b = last_name[0].upper()

c = first_name[1:1000]
d = last_name[1:1000]

print(a+c+" "+b+d)

#***********end************#