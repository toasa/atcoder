class Student:
    def __init__(self, ID, order_of_arrival):
        self.ID = ID
        self.order_of_arrival = order_of_arrival

    def __lt__(self, other):
        return self.order_of_arrival < other.order_of_arrival

def main():
    N = int(input())
    A = list(map(int, input().split()))

    students = []
    for i, a in enumerate(A):
        students.append(Student(i+1, a))

    sorted_students = sorted(students)
    for i, s in enumerate(sorted_students):
        if i == N-1:
            print(s.ID)
        else:
            print(str(s.ID) + " ", end="")

main()

