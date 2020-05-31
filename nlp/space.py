# -*- coding: utf-8 -*-
#! /usr/bin/env python
#!/usr/bin/python
import re

with open("sample.txt", "r") as f:
    data = f.read()
    
s = re.sub("[^a-zA-Z\n\s]", " ",data)

with open("file.txt", "w") as f:
    f.write(s)