# -*- coding: utf-8 -*-
#! /usr/bin/env python
#!/usr/bin/python
import collections
import itertools
import math

f = open("file.txt")
data = f.read()

sp = [data[i: i+3] for i in range(0, len(data), 1)]


print(sp)
words = {}
for word in list(sp):
    words[word] = words.get(word, 0) + 1
    
d = [(v,k) for k,v in words.items()]
d.sort()
d.reverse()

freq = collections.Counter(d)
n = 0
for count, word in d:
    print (count, word)
    a = count / len(sp)
    n += -(a * math.log(a))
    print(n)
    

print("--------------")
for count, word in freq.most_common(3):
    print(count)

#6.81974445004929