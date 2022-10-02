# coding=utf-8
"""
输入半径计算圆的周长和面积


"""
import math
pi = math.pi   #pi = 3.14159

#*******请输入您的代码********#
#***********begin************#
r = float(input())

b = 2*pi*r
c = pow(r,2)
d = pi*c


print("周长:","%.2f"%b)
print("面积:","%.2f"%d)

#***********end************#