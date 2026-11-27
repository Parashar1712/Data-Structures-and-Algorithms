# Data Structures and Algorithms Lab (`CSE01202`)

**Author:** Parashar Ashutosh Bam | **Roll No:** 22003 | **Class:** S.Y. B.Tech. (Batch A1)  
**Department of Computer Engineering**, PES's Modern College of Engineering, Pune *(2024 Pattern — Affiliated to SPPU)*

A complete repository of laboratory assignments and mini-projects for **Data Structures and Algorithms (`CSE01202`)**, implemented in **Python** and **C++**. Each program demonstrates core algorithmic design, memory management, and asymptotic time/space complexity analysis.

---

## 📂 Repository Structure

```text
├── Assignments/
│   ├── Assignment-01A-Insertion-Sort/
│   │   └── student_database_insertion_sort.py
│   ├── Assignment-01B-Quick-and-Merge-Sort/
│   │   └── employee_database_sorting.py
│   ├── Assignment-02-Linear-and-Binary-Search/
│   │   └── smart_library_search.py
│   ├── Assignment-03-Hashing-Collision-Resolution/
│   │   └── employee_hash_table.py
│   ├── Assignment-04-Singly-Linked-List/
│   │   └── student_records_sll.cpp
│   ├── Assignment-05-Doubly-Linked-List/
│   │   └── doubly_linked_list_ops.cpp
│   ├── Assignment-06-Circular-Linked-List/
│   │   └── music_playlist_cll.cpp
│   ├── Assignment-07-Linked-List-Stack/
│   │   └── infix_to_postfix_eval.cpp
│   ├── Assignment-08-Linked-List-Queue/
│   │   └── ticket_booking_fifo_queue.cpp
│   └── Assignment-09-Binary-Search-Tree/
│       └── dictionary_bst.cpp
└── Mini-Projects/
    ├── 01-PES-Campus-Navigation-System/
    ├── 02-Student-Record-and-Support-Portal/
    └── 03-BST-Library-Catalog-System/
```

---

## 🧪 Laboratory Assignments

| # | Problem Statement & Implementation | Data Structure / Algorithm | Language |
| :-: | :--- | :--- | :---: |
| **1A** | **Student Database Sorter:** Sorts ≥10 SY student records by Roll No (ascending), Name (alphabetical), and SGPA (descending) to identify the top 5 toppers. | Insertion Sort | Python |
| **1B** | **Employee Database Sorter:** Sorts ≥10 employee records by `EMP-ID` (ascending) and `EMP-NAME` (alphabetical) with divide-and-conquer partitioning. | Quick Sort & Merge Sort | Python |
| **2** | **Smart Library Management System:** Locates books in an unsorted database by comparing sequential scanning against sorted binary partitioning. | Linear Search & Binary Search | Python |
| **3** | **Employee Hash Table Benchmark:** Stores employee `(ID, Name)` pairs and benchmarks insertion and lookup speeds under collisions. | Hashing (Linear Probing & Chaining) | Python |
| **4** | **Student Record Manager:** Menu-driven CRUD system supporting insertion, deletion, search by roll number, and traversal. | Singly Linked List | C++ |
| **5** | **Bidirectional List Manager:** Menu-driven list supporting insertion, deletion, positional search, and forward/backward traversal. | Doubly Linked List | C++ |
| **6** | **Music Playlist Manager:** Dynamic loop-based media queue supporting song insertion, deletion, display, and multi-loop playback. | Circular Linked List | C++ |
| **7** | **Expression Converter & Evaluator:** Converts multi-digit infix expressions (including `^` right-associativity) to postfix and evaluates the result. | Generic Stack (Linked List) | C++ |
| **8** | **FIFO Ticket Booking System:** Simulates customer arrivals (`Enqueue`), service (`Dequeue`), and waiting queue visualization. | Queue (Linked List) | C++ |
| **9** | **BST Dictionary:** Supports keyword insertion, deletion, meaning updates, ascending/descending traversal, and worst-case comparison analysis (tree height). | Binary Search Tree (BST) | C++ |

---

## 🚀 Mini-Projects

### 1. PES Modern College Campus Navigation System
* **Objective:** Models the PES Modern College campus as a weighted graph where landmarks (classrooms, labs, library, canteen, parking) are vertices and pathways are weighted edges (distance/time).
* **Core Concepts & Features:**
  * **Graphs (Adjacency List / Matrix):** Stores campus topology and edge weights.
  * **Dijkstra's Algorithm:** Computes and displays the shortest route between any two selected landmarks.
  * **BFS / DFS:** Verifies graph connectivity across campus zones.
  * **Hashing:** Maps landmark names to graph vertex keys for $O(1)$ lookup.
  * **Searching & Sorting:** Powers a user-friendly landmark search and sorted route display.

### 2. Student Record & Support Ticket Management System
* **Objective:** Combines dynamic student record management with a FIFO customer support workflow.
* **Core Concepts & Features:**
  * **Singly / Doubly Linked List:** Stores student records (`Roll No`, `Name`, `Marks`, `Course`) with dynamic insertion, deletion, and search by roll number.
  * **Linear / Circular Queue:** Manages incoming student support queries in arrival order.
  * **Sorting Algorithms (Insertion / Merge / Quick Sort):** Organizes student records dynamically by marks or alphabetical name.

### 3. BST-Based Library Catalog System
* **Objective:** Efficiently indexes, manages, and retrieves library book records using hierarchical key ordering.
* **Core Concepts & Features:**
  * **Binary Search Tree (BST):** Represents each book (`Book ID`, `Title`, `Author`, `ISBN`) as a tree node for logarithmic average-case search and insertion.
  * **Core Operations:** Add new books, remove outdated records, search by key (`Book ID` / `Title`), display the catalog in sorted order via **Inorder Traversal**, and count total books in the system.

---

## 🛠️ How to Run Locally

1. **Clone the repository:**
   ```bash
   git clone [https://github.com/](https://github.com/)<your-username>/<repo-name>.git
   cd <repo-name>
   ```

2. **Run Python Assignments (Assignments 1A – 3):**
   ```bash
   python3 Assignments/Assignment-01A-Insertion-Sort/student_database_insertion_sort.py
   ```

3. **Compile & Run C++ Assignments (Assignments 4 – 9):**
   ```bash
   g++ -std=c++17 -O2 Assignments/Assignment-07-Linked-List-Stack/infix_to_postfix_eval.cpp -o stack_eval
   ./stack_eval
   ```

---

## 🎯 Course Outcomes & Syllabus Alignment

This lab work maps directly to the six course outcomes of **`CSE01202`**:
* **CO202.1:** Searching & Sorting Algorithms *(Unit I — Assignments 1A, 1B, 2)*
* **CO202.2:** Linked Lists & Dynamic Memory *(Unit II — Assignments 4, 5, 6; Mini-Project 2)*
* **CO202.3:** Stacks & Queues *(Unit III — Assignments 7, 8; Mini-Project 2)*
* **CO202.4:** Non-Linear Data Structures: Trees *(Unit IV — Assignment 9; Mini-Project 3)*
* **CO202.5:** Non-Linear Data Structures: Graphs *(Unit V — Mini-Project 1)*
* **CO202.6:** Hashing & File Structures *(Unit VI — Assignment 3; Mini-Project 1)*

---

## 📝 Academic Integrity

This repository is maintained as an academic portfolio for Second Year B.Tech Computer Engineering (`2024 Pattern`) at PES's Modern College of Engineering, Pune. Please use these implementations solely as a learning reference.
