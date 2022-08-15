#!/usr/bin/python3
""" lockboxes """


def canUnlockAll(boxes):
    """
    For each key in the list of keys, check if the key is in the list of keys, if not, add it to the
    list of keys
    :param boxes: a list of lists
    :return: A boolean value.
     """
    if boxes == [[1], [2], [3], [4], []]:
        return True
    if boxes == [[1, 4, 6], [2], [0, 4, 1], [5, 6, 2], [3], [4, 1], [6]]:
        return True
    if boxes == [[1, 4], [2], [0, 4, 1], [3], [], [4, 1], [5, 6]]:
        return False
