from collections import deque

def main():
    N, M = map(int, input().split())

    next_rooms = [ [] * (N+1) for i in range(N+1) ]
    for i in range(M):
        a, b = map(int, input().split())
        next_rooms[a].append(b)
        next_rooms[b].append(a)

    labeled = [False] * (N+1)
    # 部屋1は道しるべを付与済み
    labeled[1] = True

    labels = [-1] * (N+1)

    queue = deque([1])

    # 部屋1を開始地点とし、幅優先探索を行う
    while len(queue) > 0:
        room = queue.popleft()
        nexts = next_rooms[room]
        for n in nexts:
            if labeled[n]:
                continue
            labels[n] = room
            labeled[n] = True
            queue.append(n)

    for i in range(1, N+1):
        if not labeled[i]:
            print("No")
            return

    print("Yes")
    for i in range(2, N+1):
        print(labels[i])

main()
