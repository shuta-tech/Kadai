# -*- coding: utf-8 -*-

str1 = list('tsudanuma')
str2 = list('budanuma')
 
if len(str1) < len(str2):
    str1, str2 = str2, str1

res = []
if len(str1) !=len(str2):
    #str1, str2 = str2, str1
    for word in range(len(str1)):
        if str1[word] == str2[word]:
            res.insert(word, "o")
        else:
            str2.insert(word, " ")
            res.insert(word, "x")

elif len(str1) == len(str2):
    for word in range(len(str1)):
        if str1[word] == str2[word]:
            res.insert(word, "o")
        else:
            res.insert(word, "x")

print("".join(str1)+'\n' + "".join(str2) + '\n' + "".join(res))