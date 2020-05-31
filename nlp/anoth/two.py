# -*- coding: utf-8 -*-
#! /usr/bin/env python
#!/usr/bin/python
import collections
import itertools

f = open("file.txt")
data = f.read()
char_list = list(data)


a = []

for n in range(0, len(data)-1):
    tmp1 = char_list[n]
    tmp2 = char_list[n + 1]
    amn = tmp1 + tmp2
    tmp1 = tmp2
    a.insert(n, amn)


print(a)
words = {}
for word in list(a):
    words[word] = words.get(word, 0) + 1
    

d = [(v,k) for k,v in words.items()]
d.sort()
d.reverse()


freq = collections.Counter(d)


for count, word in d:
    print (count, word)

print("--------------")
for count, word in freq.most_common(5):
    print(count)

