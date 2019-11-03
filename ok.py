import math

t=int(input())
for i in range(t):
    n=int(input())
    if (n==1): 
        print("0")
    p=int(math.log2(n))
    temp=int(pow(2,p))
    final=temp%60
    if(final==2): 
        print("1")
    if(final==4): 
        print("2")
    if(final==8): 
        print("3")
    if(final==16): 
        print ("0")
    if(final==32): 
        print("9")
