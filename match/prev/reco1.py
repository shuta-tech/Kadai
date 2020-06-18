# -*- coding: utf-8 -*-

str1 = list('tsudanuma')
str2 = list('tsu danuma')
 
if len(str1) < len(str2):
    str1, str2 = str2, str1

print("".join(str1))
print("".join(str2))

res = []
for word in range(len(str1)):
    if str1[word] == str2[word]:
        res.insert(word,"o")
    else:
        str2.insert(word, "\n")
        res.insert(word, "x")
        
print("".join(res))