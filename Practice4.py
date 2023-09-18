arr=[]
arr_new=[]
l=0
print("Hello")
#==============input==============
import random
while 1:
	b=(input("Insert number: "))
	if b[0] in ["+","-"]:
		if b[1:].isdigit():
			arr.append(int(b))
		else:
			break
	elif b.isdigit():
		arr.append(int(b))

	elif b==str("random"):
		l=(int(input("How many: ")))
		#print(l)
		for x in range(l):
			b=random.randrange(10000)
			arr.append(b)
		break
	else:
		break
print("The Array before sorting is: ", arr)
#==============sorting==============
while len(arr)>0:
	Min=arr[0]
	for i in arr:
		if(i<Min): 
			Min=i
	#print(Min)
	#print(arr)
	arr.remove(Min)
	arr_new.append(Min)
#==============output==============
print("The Array after sorting is: ", arr_new)
