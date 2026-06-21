# 📌 Process Memory Inspector (C++)

## About
This project is a simple C++ console application that demonstrates how process memory works in Windows. It prints variable values, memory addresses, pointer chains, and the current process ID to help visualize how data is stored in memory.

## Features
- Displays current process ID using Windows API
- Prints variable values alongside their memory addresses
- Demonstrates pointer usage:
  - Pointer to int
  - Pointer to pointer
  - Pointer to pointer to pointer
- Shows stack memory layout of variables
- Continuously refreshes output in a loop for observation
- 
## 🖥️ Build & Run

### 1. Compile (MinGW)
```bash
g++ main.cpp -o MemoryInspector.exe
```
### Run
./MemoryInspector.exe
## Requirements
Windows OS
C++ compiler (MSVC or MinGW)
Windows.h support
