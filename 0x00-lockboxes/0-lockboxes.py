#!/usr/bin/python3
""" lockboxes """

def canUnlockAll(boxes):
    """
    For each key in the list of keys, check if the key is in the list of keys, if not, add it to the
    list of keys
    :param boxes: a list of lists
    :return: A boolean value.
     """
    Lkey = [0]
    for key in Lkey:
        for boxKey in boxes[key]:
            if boxKey not in Lkey and boxKey < len(boxes):
                Lkey.append(boxKey)
    if len(Lkey) == len(boxes):
        return True
    else:
        return False
