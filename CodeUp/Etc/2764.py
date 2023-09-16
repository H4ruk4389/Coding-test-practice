str = input()
re_str = ['|'] * (len(str) * 2 + 1)
j = 0

for i in range(len(str) * 2 + 1):
    if i % 2 != 0:
        re_str[i] = str[j]
        j += 1

for i in range(len(str) * 2 + 1):
    if i % 2 == 0:
        print("+", end="")
    else:
        print("-", end="")

print("\n" + "".join(re_str))

for i in range(len(str) * 2 + 1):
    if i % 2 == 0:
        print("+", end="")
    else:
        print("-", end="")

print()
