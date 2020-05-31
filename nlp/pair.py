# -*- coding: utf-8 -*-
#! /usr/bin/env python
#!/usr/bin/python
import collections
import itertools

f = open("sample.txt")
data = f.read()

sp = [data[i: i+2] for i in range(0, len(data), 1)]


print(sp)

words = {}
for word in list(sp):
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

