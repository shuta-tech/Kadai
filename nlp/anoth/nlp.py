# -*- coding: utf-8 -*-

import collections


# 処理する元の単語
words = ['word1', 'word2', 'word3', 'word1', 'word3', 'word4', 'word1' ]
print(words)


# 単語ごとに出現頻度を求める
freq = collections.Counter(words)
print("--------------")
print(freq)
print(type(freq))


# 単語ごとに回数を列挙する
print("--------------")
for key, count in freq.items():
    print(key, count)


# 出現頻度が高いトップNを出力する
print("--------------")
for key, count in freq.most_common(2):
    print(key, count)


# word3を削除して、もう一回列挙する
del freq['word3']
print("--------------")
for key, count in freq.items():
    print(key, count)