
def cascade(n):
	if n < 10:
		print n
	else:
		print n
		cascade(n//10)
		print n

cascade(1234)

#Todo inverse_cascade

# def inverse_cascade(n):
# 	if n < 10:
# 		print n
# 	else:
# 		print n % 10
# 		cascade(n)
# 		print n

# inverse_cascade(1234)