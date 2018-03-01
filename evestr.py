ip=input("Enter any String:")
e=''
o=''
for x in range(1,len(ip)+1):
	if(x%2==0):
		e=e+ip[x-1]
	else:
		o=o+ip[x-1]
print(o," ",e)
