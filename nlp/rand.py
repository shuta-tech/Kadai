# -*- coding: utf-8 -*-
import random

f = open('file.txt')
data = f.read()

l = random.sample(data, 100)

with open("hop.txt", "w") as f:
    f.writelines(l)