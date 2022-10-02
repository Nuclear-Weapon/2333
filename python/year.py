"""
输入年份 如果是闰年输出True 否则输出False
"""

# 如果代码太长写成一行不便于阅读 可以使用\对代码进行折行
#**************begin**************#
year = int(input())

if year % 4 == 0 and year % 100 != 0:
    print('True')
else:
    print('False')




#**************end****************#
