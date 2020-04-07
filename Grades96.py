
snt1 = input("Dwse tous suntelestes varuthtas diaxwrismenous me keno: ")
list = snt1.split()
snt = list
snt = [float(i) for i in snt]

arithmitis = 0
paronomastis = 0
length = 0

for s in snt:
     suml = 0
     print ()
     grd = input("Dwse vathmous mathimatwn me syntelesth varuthtas {} diaxwrismenous me keno: " .format(s))
     print ()
     list = grd.split()
     grdl = list
     grdl = [float(i) for i in grdl]
     for i in grdl: 
          suml = suml + i*s
     arithmitis = arithmitis + suml
     paronomastis = paronomastis + len(grdl)*s
     length = length + len(grdl)
     
#print (arithmitis)
#print (paronomastis)

grade = arithmitis / paronomastis

print ("O MO sou einai: " ,grade)

print ("Synolo mathimatwn: ",length)

finish = input("Press enter to exit")


