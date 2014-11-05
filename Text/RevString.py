#Reverse a String 
#– Enter a string and the program will reverse it and print it out.

temp = input('String to reverse')
result = ''
for i in range(len(temp)):
	result += temp[len(temp)-1-i]
print ("%s" % result)