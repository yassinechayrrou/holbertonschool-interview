#!/usr/bin/python3

"""script that reads stdin line by line and computes metrics
"""

import sys

if __name__ == "__main__":

    counter, cout = 0, 0
    fileSize = 0
    Dict = {"200": 0,
            "301": 0,
            "400": 0,
            "401": 0,
            "403": 0,
            "404": 0,
            "405": 0,
            "500": 0}

    def setDict(key):
        if key in Dict.keys():
            Dict[key] += 1
        else:
            pass
    try:
        for line in sys.stdin:
            counter += 1
            word = line.split(" ")
            try:
                fileSize += int(word[-1])
                setDict(word[-2])
            except BaseException:
                pass
            if counter % 10 == 0:
                print("File size: {}".format(fileSize))
                for k, v in sorted(Dict.items()):
                    if v:
                        print("{}: {}".format(k, v))
        print("File size: {}".format(fileSize))
        for k, v in sorted(Dict.items()):
            if v:
                print("{}: {}".format(k, v))

    except keyboardInterrupt:
        for k, v in sorted(Dict.items()):
            if v:
                print("{}: {}".format(k, v))
        raise
