#01
profile={
    'name':'An',
    'major':'CS'
}
profile['year']=3

#02
for i in profile:
    print(i, profile[i])

#03
st = "The quick brown fox jumps over the lazy dog"
def freq(s):
    wrd={}
    for i in st.split():
        tmp = i.lower()
        if tmp in wrd:
            wrd[tmp]+=1
        else:
            wrd[tmp]=1
    return wrd
print(freq(st))