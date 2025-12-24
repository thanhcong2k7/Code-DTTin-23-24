n,a,k,s,c = int(input()),list(map(int,input().split())),int(input()),[],0
for i in a:
  s.append((i,c))
  c+=1
s.sort()
c=0
start=0
end=len(s)-1
res={}
def chk(key,tup):
  try:
    tup[key]
    return True
  except KeyError:
    return False
def bs(z,l,r):
  mid=(l+r)//2
  if mid<=0:
    return -1
  if s[mid][0] == z:
    if not chk(s[mid][0],res):
      res[s[mid][0]]=s[mid][1]
    else:
      c+=1
    return bs(z,l,mid),bs(z,mid,r)
  elif s[mid][0]>z:
    return bs(z,l,mid)
  else:
    return bs(z,mid,r)
def bs2():
  
for i in s:
  bs(k-i[0],start,end)
print(len(res)+c)
