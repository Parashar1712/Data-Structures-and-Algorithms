import time

TABLE_SIZE = 20


class Employee:
    def __init__(self, emp_id, name):
        self.emp_id = emp_id
        self.name = name

    def __repr__(self):
        return f"({self.emp_id}, {self.name})"


class HashTableLinearProbing:
    def __init__(self):
        self.table = [None] * TABLE_SIZE

    def hash_func(self, key):
        return key % TABLE_SIZE

    def insert(self, emp):
        idx = self.hash_func(emp.emp_id)
        start = idx

        while self.table[idx] is not None:
            if self.table[idx].emp_id == emp.emp_id:
                self.table[idx].name = emp.name
                return
            idx = (idx + 1) % TABLE_SIZE
            if idx == start:
                raise Exception("Hash Table is full!")

        self.table[idx] = emp

    def search(self, emp_id):
        idx = self.hash_func(emp_id)
        start = idx

        while self.table[idx] is not None:
            if self.table[idx].emp_id == emp_id:
                return self.table[idx]
            idx = (idx + 1) % TABLE_SIZE
            if idx == start:
                break
        return None

    def __repr__(self):
        return str(self.table)


class HashTableChaining:
    def __init__(self):
        self.table = [[] for _ in range(TABLE_SIZE)]

    def hash_func(self, key):
        return key % TABLE_SIZE

    def insert(self, emp):
        idx = self.hash_func(emp.emp_id)
        bucket = self.table[idx]

        for item in bucket:
            if item.emp_id == emp.emp_id:
                item.name = emp.name
                return

        bucket.insert(0, emp)

    def search(self, emp_id):
        idx = self.hash_func(emp_id)
        bucket = self.table[idx]

        for item in bucket:
            if item.emp_id == emp_id:
                return item
        return None

    def __repr__(self):
        return str(self.table)


def main():
    employees = [Employee(i, f"Emp{i}") for i in range(30)]

    linear_table = HashTableLinearProbing()
    start = time.time()
    for emp in employees:
        try:
            linear_table.insert(emp)
        except Exception as e:
            print(f"Linear Probing: {e}")
            break
    linear_insert_time = time.time() - start

    start = time.time()
    for emp in employees:
        linear_table.search(emp.emp_id)
    linear_search_time = time.time() - start

    chaining_table = HashTableChaining()
    start = time.time()
    for emp in employees:
        chaining_table.insert(emp)
    chaining_insert_time = time.time() - start

    start = time.time()
    for emp in employees:
        chaining_table.search(emp.emp_id)
    chaining_search_time = time.time() - start

    print("Linear Probing Hash Table:")
    print(linear_table)
    print(f"Insert Time: {linear_insert_time:.6f} seconds")
    print(f"Search Time: {linear_search_time:.6f} seconds\n")

    print("Chaining Hash Table:")
    print(chaining_table)
    print(f"Insert Time: {chaining_insert_time:.6f} seconds")
    print(f"Search Time: {chaining_search_time:.6f} seconds\n")


if __name__ == "__main__":
    main()
