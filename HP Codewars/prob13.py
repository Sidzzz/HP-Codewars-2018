min = 1000
a={}
t = int(input())
n = int(input())
for i in range(0,n):
    sum = 0
    a[i] = input()
    k = int(input())
    for j in range(0,k):
        sum = sum + int(input())
    if(min > t-sum and t > sum):
        v = i
        min = (t - sum)
if min != 1000:
    print (a[v])
else:
    print("No Bus Route Found")
