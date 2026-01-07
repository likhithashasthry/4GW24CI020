## 🖥️ Operating System Features Used

Although this project is implemented using Java, it strongly reflects several **core Operating System (OS) concepts**, especially related to **file system management** and **user-level OS utilities**.

---

### 1. File System Management
The project performs real-time file system operations such as:
- Reading files and folders from the Desktop
- Creating directories dynamically in secondary storage
- Moving files and folders between directories

These operations are core responsibilities of an Operating System.

---

### 2. Directory Traversal
The Desktop Organizer traverses the Desktop directory and processes each file and folder individually.  
This is similar to how OS utilities like file explorers, search tools, and backup systems scan directory structures.

---

### 3. File Metadata Handling
The project extracts file metadata such as **creation time** using OS-supported file attributes.
Files are categorized based on the month of creation, demonstrating how operating systems store and utilize metadata for file organization.

---

### 4. System Call Interaction (Indirect)
Although written in Java, all file operations (move, create, read attributes) are executed through **underlying OS system calls**.
Java acts as a wrapper, while the Operating System kernel performs the actual file system operations.

---

### 5. Resource Management
The program carefully manages system resources such as file handles and directory streams.
It ensures proper closing of resources to prevent leaks, which is a key responsibility of an Operating System.

---

### 6. Undo Operation (OS Utility Behavior)
The project implements an Undo feature using a stack data structure.
This behavior is similar to undo functionality provided by OS-level utilities such as file explorers and editors.

---

### 7. Volatile Memory Behavior
Undo information is stored in memory during program execution.
Once the program terminates, the stored undo data is lost, demonstrating the concept of **volatile memory (RAM)** managed by the OS.

---

### 8. User-Level OS Utility
This project functions as a **user-level OS utility**, similar to desktop cleanup tools or file organizers.
It operates in user space while utilizing services provided by the Operating System.

---

Overall, the Desktop Organizer project demonstrates practical application of ***Operating System*** concepts such as file management, directory handling, metadata usage, resource management, and undo mechanisms.
