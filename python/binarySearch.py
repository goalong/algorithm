def binarySearch(l, t):
	low = 0
	high = len(l) - 1
	while low < high:
		mid = (high + low)/2
		if t > l[mid]:
			low = mid + 1
		elif t < l[mid]:
			high = mid
		else:
			return mid
	return False

l = [1, 4, 12, 45, 66, 99, 120, 444]

if __name__ == '__main__':
	print binarySearch(l, 12)
	print binarySearch(l, 1)
	print binarySearch(l, 13)


			