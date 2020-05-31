# -*- coding: utf-8 -*-
#! /usr/bin/env python
#!/usr/bin/python
import collections
import itertools
import math

f = open("sample.txt")
data = f.read()

sp = [data[i: i+2] for i in range(0, len(data), 1)]

print(sp)

words = {}
for word in list(sp):
    words[word] = words.get(word, 0) + 1
    

# sort by count
d = [(v,k) for k,v in words.items()]
d.sort()
d.reverse()

freq = collections.Counter(d)

n = 0.0
#a = {}
for count, word in d:
    print(count, round((count * 100) / len(sp), 3), word)
    a = count / len(sp)
    n += -(a * math.log(a))
    print(n)
    
    #n += list(a) *  math.log(list(a)),
    #print(list(n))
print("--------------")
for count, word in freq.most_common(5):
    print(count)

#5.375854585907753