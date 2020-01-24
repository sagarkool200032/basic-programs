name = input("Enter Your Name:").split()
new = []
last=name[len(name)-1]
for n in name:
    if(n==last):
        new.append(n)
        break
    new.append(n[0]+".")
newname = "".join(new)
print(newname)
