from collections import deque

N, M = map(int, input().split())

jobs_in_ndays = [ [] for _ in range(100010) ] 
for _ in range(N):
    a, b = map(int, input().split())
    jobs_in_ndays[a].append(b)

for i in range(100010):
    if len(jobs_in_ndays[i]) <= 1:
        continue
    jobs_in_ndays[i].sort()

queue = deque([])
for n, job in enumerate(jobs_in_ndays):
    if len(job) == 0:
        continue
    for j in job:
        queue.appendleft((n, j))

res = 0
for d in range(M, 0, -1):
    if len(queue) > 0:
        job = queue.popleft()
        if job[0] > d:
            while 
