def readList(mList, leng):

	x = int(input("new element..."))
	mList[0] = x

	for i in range(1, leng):
		x = int(input("new element..."))
		mList.append(x)

def isPrime(x):
	if x == 2:
		return True
	if x < 2 or x % 2 == 0:
		return False

	d = 3
	while d * d <= x:
		if x % d == 0:
			return False
		d += 2

	return True

def prntIfPrime(mList):
	for i in range(0, len(mList)):
		print mList[i]
		if isPrime(mList[i]):
			print "is prime"
		else:
			print "is not prime"

mList = [0]
leng = int(input("Lenght of list..."))
readList(mList, leng)

print "Read list is:"
print mList

print "The prime elements are:"
prntIfPrime(mList)