# encoding: utf-8
# 知乎的面试有一题就是让我用两个栈实现一个队列
class Queue():
	def __init__(self):
		self.items = []
	def enqueue(self, item):
		self.items.append(item)
	def dequeue(self):
		return self.items.pop(0)
	def isEmpty(self):
		return self.items == []
	def size(self):
		return len(self.items)

q = Queue()
q.enqueue('hello')
q.enqueue('dog')
q.enqueue(3)
q.dequeue()

print q.items

