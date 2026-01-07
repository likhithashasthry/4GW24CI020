## ☕ Java Features Used

This project leverages several important **Java language and Java standard library features** to implement a reliable and efficient Desktop Organizer.

---

### 1. Java NIO (New I/O) API
The project uses Java NIO (`java.nio.file`) for modern and efficient file system operations such as:
- Reading directories
- Creating files and folders
- Moving files and folders
- Accessing file paths in a platform-independent way

Java NIO provides better performance and flexibility compared to traditional file handling.

---

### 2. File Attribute API
The project uses `java.nio.file.attribute.BasicFileAttributes` to access file metadata such as:
- Creation time
- Last modified time
- File type

This allows the program to organize files based on their creation month.

---

### 3. Exception Handling
Robust exception handling is implemented using:
- `try-catch` blocks
- `throws IOException`

This ensures that the program handles unexpected I/O errors gracefully without crashing.

---

### 4. Collections Framework (Stack)
The project uses the `Stack` class from `java.util` to implement the Undo functionality.
This follows the **Last In First Out (LIFO)** principle, which is ideal for undo operations.

---

### 5. Recursion
Recursive methods are used to move folders containing nested files and subfolders.
This allows the program to handle directory trees of any depth.

---

### 6. Date and Time API
The project uses the Java Time API (`java.time`) to:
- Convert file creation timestamps
- Extract month information

This makes date handling clean, readable, and reliable.

---

### 7. Path and Files Abstraction
The project uses `Path` and `Files` classes to:
- Represent file system paths
- Perform file operations safely

This abstraction improves portability and reduces OS-specific dependencies.

---

### 8. Try-with-Resources
The project uses try-with-resources for directory streams to ensure:
- Automatic resource closure
- Prevention of resource leakage

---

### 9. Object-Oriented Programming Concepts
The project follows core OOP principles such as:
- Classes and objects
- Encapsulation of file operations into methods
- Modular and reusable code design

---

Overall, this project demonstrates effective use of ***Java’s*** modern APIs, exception handling mechanisms, and object-oriented design to build a real-world system utility.


