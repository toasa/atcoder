weekdays = ['SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT']
weekdays = weekdays[::-1]

S = input()
i = weekdays.index(S)

print(i+1)

