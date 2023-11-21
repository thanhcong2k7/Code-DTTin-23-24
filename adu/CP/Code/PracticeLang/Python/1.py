#Output example
print('Hello World!')
#Input example
a = input()
print(a) #Output var
#Function define
def func():
    global x
    x = 'hhh'
    print('hehe')
func()
print(x)
#Array
b = [1,'2']
print(b[1])
#Numeric types
c = 1j #Complex
print(c)
#Loop in string
for d in "test":
    print(d)
#String type
e = "Lua chua dbrr :)) "
print(len(e))
print("Lua" in e) #"somthing" in string returns bool
print("Lua" not in e)
if "Lua" in e:
    print("Yes")
print(e[2:5]) #Print char from 2-5 in e
print(e[:5])  #_______________ start in e
print(e[2:])  #_______________ 2 to end in e
print(e.lower()) #Lowercase all
print(e.upper()) #Uppercase all
a = "Hello, World!"
print(a.split(",")) # returns ['Hello', ' World!']
a = "Hello, World!"
print(a.replace("H", "J"))
#Concat string
a = "Hello"
b = "World"
c = a + b
print(c)
#Concat string + int
age = 36
txt = "Test {}"
print(txt.format(age))