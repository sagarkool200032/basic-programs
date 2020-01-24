n = int(input("Rows: "))
nc=n
i=-1
print("\n\n\n\n\n")
while(n>0):
	x=n-1
	if(n==1):
		print("{}".format("* "*nc))
		break
	if(i>=0): print("{}{}{}{}".format(" "*x, "*"*1," "*i,"*"*1))
	else: print("{}{}".format(" "*x, "*"*1))
	n-=1
	i+=2

print("\n\n\n\n\n")

ncc=nc
i=0
while(nc>0):
	x=nc-1
	if(i>=0): print("{}{}{}".format(" "*x, "*"*1, " *"*i))
	else: print("{}{}".format(" "*x, "*"*1))
	nc-=1
	i+=1

print("\n\n\n\n\n")
nccc=ncc
i=0
while(ncc>0):
	x=ncc-1
	if(i>=0): print("{}{}{}".format(" "*x, "*"*1, " *"*i))
	else: print("{}{}".format(" "*x, "*"*1))
	ncc-=1
	i+=1
i=0
x=nccc
while(i<nccc):
	print("{}{}".format(" "*i,"* "*x))
	i+=1
	x-=1
print("\n\n\n\n\n")
