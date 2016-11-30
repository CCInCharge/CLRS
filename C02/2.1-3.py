# Problem 2.1-3 - Linear Search

def linearSearch(nums, search):
    for i, num in enumerate(nums):
        if num == search:
            return i
    return None
