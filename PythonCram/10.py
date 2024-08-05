#091~100
inventory = {
    "메로나":[300,20],
    "비비빅":[400,3],
    "죠스바":[250,100]
}
print (inventory)
#------------------------
print(inventory["메로나"][0],"원")
#------------------------
print(inventory["메로나"][1],"개")
#------------------------
inventory["월드콘"] = [500,7]
print(inventory)
#------------------------
icecream = {'탱크보이': 1200, '폴라포': 1200, '빵빠레': 1800, '월드콘': 1500, '메로나': 1000}
ice = list(icecream.keys())
print(ice)
#------------------------
price = list(icecream.values())
print(price)
#------------------------
print(sum(price))
#------------------------
new_product = {'팥빙수':2700,'아맛나':1000}
icecream.update(new_product)
print(icecream)
#------------------------
keys = ("apple", "pear", "peach")
vals = (300, 250, 400)
result = dict(zip(keys,vals))
print(result)
#------------------------
date = ['09/05','09/06','09/07','09/08','09/09']
close_price = [10500,10300,10100,10800,11000]
close_table = dict(zip(date,close_price))
print(close_table)