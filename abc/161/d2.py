from collections import deque

K = int(input())
queue = deque(["1", "2", "3", "4", "5", "6", "7", "8", "9"])
lunlun = ["1", "2", "3", "4", "5", "6", "7", "8", "9"]

while len(queue) < 10 ** 5:
    n_str = queue.popleft()
    last_c = n_str[len(n_str) - 1]
    if last_c == "0":
        queue.append(n_str + "0")
        queue.append(n_str + "1")

        lunlun.append(n_str + "0")
        lunlun.append(n_str + "1")
    elif last_c == "1":
        queue.append(n_str + "0")
        queue.append(n_str + "1")
        queue.append(n_str + "2")

        lunlun.append(n_str + "0")
        lunlun.append(n_str + "1")
        lunlun.append(n_str + "2")
    elif last_c == "2":
        queue.append(n_str + "1")
        queue.append(n_str + "2")
        queue.append(n_str + "3")

        lunlun.append(n_str + "1")
        lunlun.append(n_str + "2")
        lunlun.append(n_str + "3")
    elif last_c == "3":
        queue.append(n_str + "2")
        queue.append(n_str + "3")
        queue.append(n_str + "4")

        lunlun.append(n_str + "2")
        lunlun.append(n_str + "3")
        lunlun.append(n_str + "4")
    elif last_c == "4":
        queue.append(n_str + "3")
        queue.append(n_str + "4")
        queue.append(n_str + "5")

        lunlun.append(n_str + "3")
        lunlun.append(n_str + "4")
        lunlun.append(n_str + "5")
    elif last_c == "5":
        queue.append(n_str + "4")
        queue.append(n_str + "5")
        queue.append(n_str + "6")

        lunlun.append(n_str + "4")
        lunlun.append(n_str + "5")
        lunlun.append(n_str + "6")
    elif last_c == "6":
        queue.append(n_str + "5")
        queue.append(n_str + "6")
        queue.append(n_str + "7")

        lunlun.append(n_str + "5")
        lunlun.append(n_str + "6")
        lunlun.append(n_str + "7")
    elif last_c == "7":
        queue.append(n_str + "6")
        queue.append(n_str + "7")
        queue.append(n_str + "8")

        lunlun.append(n_str + "6")
        lunlun.append(n_str + "7")
        lunlun.append(n_str + "8")
    elif last_c == "8":
        queue.append(n_str + "7")
        queue.append(n_str + "8")
        queue.append(n_str + "9")

        lunlun.append(n_str + "7")
        lunlun.append(n_str + "8")
        lunlun.append(n_str + "9")
    elif last_c == "9":
        queue.append(n_str + "8")
        queue.append(n_str + "9")

        lunlun.append(n_str + "8")
        lunlun.append(n_str + "9")

print(lunlun[K-1])
