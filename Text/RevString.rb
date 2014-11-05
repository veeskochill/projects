#Reverse a String 
#- Enter a string and the program will reverse it and print it out.

input = gets
i=0
n = input.length
for i in (0..n-2)
	input = input[0,i] + input[n-1] + input[i..n-2]
	i+=1
end

puts input