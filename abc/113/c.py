class City:
    def __init__(self, estb_year, belng_pref):
        self.estb_year = estb_year
        self.belng_pref = belng_pref
        self.ID = None

    def __lt__(self, other):
        return self.estb_year < other.estb_year

class Pref:
    def __init__(self):
        self.cities = []

N, M = map(int, input().split())
prefs = [None] * N
kekka_cities = [None] * M
for i in range(M):
    p, y = map(int, input().split())
    p = p - 1 
    c = City(y, p)
    kekka_cities[i] = c
    if prefs[p] == None:
        prefs[p] = Pref()
    prefs[p].cities.append(c)

for pref in prefs:
    if pref == None:
        continue
    pref.cities.sort()
    count = 1
    for city in pref.cities:
        first_id = str(city.belng_pref + 1).zfill(6)
        second_id = str(count).zfill(6)
        city.ID = first_id + second_id
        count += 1

for city in kekka_cities:
    print(city.ID)

