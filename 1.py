a=100
#print(h,t,o)
while a<1000:
    h=int(a/100)
    o=int(a%10)
    t=int(a/10-h*10)
    if h*h*h+t*t*t+o*o*o==a:
        print(a)
    a=a+1
