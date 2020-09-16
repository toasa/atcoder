X = int(input())

n = 100
year_count = 0

while n < X:
    n += n // 100
    year_count += 1

print(year_count)
