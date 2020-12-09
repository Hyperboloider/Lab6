

def newton(n, k, a):
    prev_y = a
    
    for i in range(n):
        y = (((a/prev_y**(k-1))) + (k-1)*prev_y)/k
        prev_y = y
        
    return y


n = int(input('n: '))
a = float(input('a: '))

result = (newton(n, 3, a) - newton(n, 6, (a*a+1)))/(1+newton(n, 7, (3+a)))

print(result)