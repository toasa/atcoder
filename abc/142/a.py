N = int(input())

ALL = [ i for i in range(1, N+1) ]
ODDS = list(filter(lambda x: x%2==1, ALL))

print(len(ODDS) / len(ALL))
