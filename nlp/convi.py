# -*- coding: utf-8 -*-
#! /usr/bin/env python
#!/usr/bin/python
import random

f = open("file.txt")
data = f.read()

k = [data[i: i+2] for i in range(0, len(data), 1)]
v = [data[i: i+3] for i in range(0, len(data), 1)]
s = k + v

random.shuffle(s)
l = random.sample(s, 100)

with open("mix.txt", "w") as f:
    f.writelines(l)

