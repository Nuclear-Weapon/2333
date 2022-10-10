'''
将array依次执行以下操作
1.把列表中的元素升序排序。
2.删除列表中的最后一个元素。
3.把列表中第一个元素移动到列表尾部。
4.返回新列表。
'''
array = [85,96,2,5,3,566,0,91,5234,5555,89,62,34]
#*******请输入您的代码********#
#***********begin************#
array.sort()
array.reverse()
array1 = array.pop()
del array[0]
array.reverse()
array.append(array1)
print(array)

#***********end************#