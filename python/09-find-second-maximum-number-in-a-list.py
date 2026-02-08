if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))

    arr = list(set(arr))     # remove duplicates
    arr.sort()               # sort list

    print(arr[-2])           # second maximum