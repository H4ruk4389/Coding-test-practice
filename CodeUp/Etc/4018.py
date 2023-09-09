def int_reverse(n):
    s = str(n)
    reversed_str = s[::-1]
    return int(reversed_str)

def main():
    n = int(input())
    cnt = 0
    i = j = rev = re = 0

    if n < 10:
        re = n
    else:
        while True:
            cnt += 1
            rev = int_reverse(n)
            re = rev + n
            if re == int_reverse(re):
                break
            else:
                n = re

    print(cnt, re)

if __name__ == "__main__":
    main()
