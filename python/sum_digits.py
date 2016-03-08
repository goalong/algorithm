def split(num):
	return num//10, num % 10

def sum_digits(num):
	if num < 10:
		return num
	else:
		not_last, last = split(num)
		return sum_digits(not_last) + last

print sum_digits(1234)
