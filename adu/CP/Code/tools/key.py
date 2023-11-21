import random
output = open("output.txt","w")
possibilityList = [0,1,2,3,4,5,6,7,8,9,'A','B','C','D','E','F','G','H','I','K','L','M','N','O','P','Q','J','R','S','T','U','V','W','X','Y','Z']
runtimes = int(input("Time? "))
for i in range(runtimes):
    userid = ""
    key = ""
    for j in range(5):
        userid += str(random.choice(possibilityList))
    counter = 0
    for j in range(4):
        for z in range(4):
            key+=str(random.choice(possibilityList))
        counter+=1
        key+="-"
        if counter == 4:
            continue
    key = key[:-1]
    print(userid+":"+key)
    output.write(userid+":"+key+"\n")
