from math import sqrt

def function(n):
    for i in range(1,int(sqrt(n))+1):
        if n%i==0 and n!= sqrt(n):
            print i, n/i
        elif n%i ==0:
            print i

function(100)
