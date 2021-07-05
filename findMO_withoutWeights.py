# author: eimon

def main():
    try:
        fp = open('meta.txt', 'r', encoding='utf-8')
        grades = getGrades(fp)
        mo = getMO(grades)
        print("Mesos Oros: {:4.3}".format(mo))
        fp.close()
    except FileNotFoundError:
        print("File Not Found.")
    except:
        print("An error occurred")



def getGrades(myFile):
    elements = []
    grades = []

    for line in myFile:
        elements.append(line.split())

    for element in elements:
        for e in element:
            try:
                e = float(e)
                grades.append(e)
            except:
                continue

    return grades



def getMO(grades):
    arithmitis = 0
    for grade in grades:
        arithmitis += float(grade)

    return (arithmitis/len(grades))



main()
