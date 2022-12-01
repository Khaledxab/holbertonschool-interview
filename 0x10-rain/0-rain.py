#!/usr/bin/python3
"""
calculate how many square units of water
will be retained after 
it rains / not allowed to import any module
"""
def rain(walls) -> int:
    """Rain"""
    if not walls:
        return 0
    water = 0
    left = 0
    right = len(walls) - 1
    left_max = walls[left]
    right_max = walls[right]
    while left < right:
        if walls[left] < walls[right]:
            left += 1
            if walls[left] > left_max:
                left_max = walls[left]
            else:
                water += left_max - walls[left]
        else:
            right -= 1
            if walls[right] > right_max:
                right_max = walls[right]
            else:
                water += right_max - walls[right]
    return water
