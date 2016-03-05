# encoding: utf-8

# 写一个单例模式
def singleton(func):
	instances = {}
	def wrapper(func, *args, **kw):
		if func not in instances:
			instances[func] = func(*args, **kw)
		return instances[func]
	return wrapper

class Singleton():
	def __new__(cls, *args, **kw):
		if not hasattr(cls, '_instance'):
			cls._instance = super(Singleton, cls).__new__(cls, *args, **kw)
		return cls._instance

#二分查找

def binarySearch(seq, target):
	low = 0
	high = len(seq) - 1
	while low < high:
		mid = (low + high) / 2
		if target > seq[mid]:
			low = mid + 1
		elif target < seq[mid]:
			high = mid
		else:
			return mid
	return False

