# initialize variables
a, b = 0, 1
sum_even = 0

while b < 4000000:
    # determine if b even
    if b % 2 == 0:
        sum_even += b
    # set a = b and b = a +b 
    a, b = b, a+b
# print values
print(sum_even)

# answer should be 4613732
