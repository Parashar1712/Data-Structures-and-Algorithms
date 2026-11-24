class Book:
    def __init__(self, book_id, title, author):
        self.book_id = book_id
        self.title = title
        self.author = author

    def display(self):
        print(f"ID: {self.book_id}, Title: {self.title}, Author: {self.author}")


# Library class to manage the collection and search functions
class Library:
    def __init__(self):
        self.books = []

    def add_book(self, book):
        self.books.append(book)

    def display_books(self):
        if not self.books:
            print("No books in the library.")
            return
        print("Library Books:")
        for book in self.books:
            book.display()

    def linear_search(self, target_id):
        print("\nPerforming Linear Search...")
        for book in self.books:
            if book.book_id == target_id:
                print("Book found using Linear Search:")
                book.display()
                return book
        print("Book not found using Linear Search.")
        return None

    def binary_search(self, target_id):
        print("\nPerforming Binary Search (after sorting)...")
        # Sort books by ID (binary search requires sorted data)
        sorted_books = sorted(self.books, key=lambda x: x.book_id)
        low = 0
        high = len(sorted_books) - 1

        while low <= high:
            mid = (low + high) // 2
            if sorted_books[mid].book_id == target_id:
                print("Book found using Binary Search:")
                sorted_books[mid].display()
                return sorted_books[mid]
            elif sorted_books[mid].book_id < target_id:
                low = mid + 1
            else:
                high = mid - 1
        print("Book not found using Binary Search.")
        return None


# Main Program
def main():
    # Create Library instance
    my_library = Library()

    # Add some books (unsorted order)
    my_library.add_book(Book(102, "The Alchemist", "Paulo Coelho"))
    my_library.add_book(Book(110, "Clean Code", "Robert C. Martin"))
    my_library.add_book(Book(105, "1984", "George Orwell"))
    my_library.add_book(Book(108, "Sapiens", "Yuval Noah Harari"))
    my_library.add_book(Book(103, "To Kill a Mockingbird", "Harper Lee"))

    # Display all books
    my_library.display_books()

    # Search for a book using Linear Search
    search_id = int(input("\nEnter Book ID to search (Linear Search): "))
    my_library.linear_search(search_id)

    # Search for a book using Binary Search
    search_id = int(input("\nEnter Book ID to search (Binary Search): "))
    my_library.binary_search(search_id)


if __name__ == "__main__":
    main()
