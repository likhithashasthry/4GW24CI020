## 📊 Data Structures and Algorithms (DSA) Features Used

This project applies core **Data Structures and Algorithms (DSA)** concepts to solve a real-world file organization problem efficiently.

---

### 1. Stack Data Structure
A stack is used to implement the **Undo functionality** in the project.

- Each file or folder move operation is pushed onto the stack.
- Undo operations follow the **Last In First Out (LIFO)** principle.
- The most recent file movement is reversed first.

This makes the stack an ideal data structure for undo operations.

---

### 2. Recursion
Recursive algorithms are used to handle directory traversal and folder movement.

- If the current item is a directory, the function calls itself for each child item.
- Recursion allows the program to handle nested folders of arbitrary depth.

This approach simplifies directory processing and avoids complex iterative logic.

---

### 3. Linear Traversal Algorithm
The project uses a linear traversal approach to process Desktop items.

- Each file and folder is accessed exactly once.
- The traversal ensures efficient processing of all items.

Time Complexity: **O(n)**, where *n* is the number of files and folders.

---

### 7. Time and Space Complexity Considerations
- **Time Complexity:** O(n)
- **Space Complexity:** O(n) for undo stack storage

These complexities ensure the project scales well with increasing file counts.

---

### 8. Real-World Application of DSA
The project demonstrates how fundamental DSA concepts like stacks and recursion can be applied to practical system-level problems such as file organization and undo mechanisms.

---

Overall, this project showcases effective usage of data structures and algorithms to implement a reliable and efficient desktop organization utility.