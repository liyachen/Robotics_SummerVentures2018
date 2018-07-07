import sys

def function(n):
    factorial = 1
    
    for i in range(1,n+1):
        if i>0:
            factorial = factorial * i
    print factorial

if __name__ == '__main__':
    function(int(sys.argv[1]))
