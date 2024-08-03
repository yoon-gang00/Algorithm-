#071~081 파이썬 튜플
# my_variable = ()
# print(type(my_variable))
#---------------------------
movie_rank = ('닥터 스트레인지','스플릿','럭키')
print(movie_rank)
#---------------------------
one = (1, )
print(one)
#---------------------------
t = 1,2,3,4
print(type(t))
#---------------------------
t=('A','b','c')

#---------------------------
interest = ('삼성전자', 'LG전자', 'SK Hynix')
data = list(interest)
print(type(data))
#---------------------------
interest = ['삼성전자', 'LG전자', 'SK Hynix']
data = tuple(interest)
print(type(data))
#---------------------------
temp = ('apple', 'banana', 'cake')
a, b, c = temp
print(a, b, c,type(a))
#---------------------------
x = tuple(range(2,100,2)) #시작점, 끝점(포함X), 증가분
print(x)
#---------------------------
