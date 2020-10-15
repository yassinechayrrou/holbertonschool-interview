#!/usr/bin/python3

"""
script that presents a method that determines if a given data set represents
a valid UTF-8 encoding
"""


def validUTF8(data):
    bytesNumber = 0
    for i in range(len(data)):
        number = data[i]
        if number >= 255:
            return False
        elif number & 128 == 0:
            bytesNumber = 1
        elif number & 224 == 192:
            bytesNumber = 2
        elif number & 240 == 224:
            bytesNumber = 3
        elif number & 248 == 240:
            bytesNumber = 4
        else:
            return False
        for c in range(1, bytesNumber):
            if i + c >= len(data):
                return False
            elif data[i + c] & 197 != 128:
                return False
        i = i + bytesNumber - 1
    return True
