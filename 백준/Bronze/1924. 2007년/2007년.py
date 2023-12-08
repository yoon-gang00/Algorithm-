import sys

x,y = map(int,sys.stdin.readline().split())

week = ['SUN','MON','TUE','WED','THU','FRI','SAT']
ans = 0;
month = [31,28,31,30,31,30,31,31,30,31,30,31]

for i in range(x-1):
    ans+=month[i]
    
ans += y
print(week[ans%7])
