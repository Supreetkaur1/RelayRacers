# Relay Racers  



[![C++14](https://img.shields.io/badge/C%2B%2B-14-blue.svg)](https://isocpp.org/)  
[![Build](https://img.shields.io/badge/build-passing-brightgreen.svg)](#)  

---

## 🏁 Overview  
**Relay Racers** is a competitive programming inspired project that determines the **minimum number of racers** needed to pass a baton across a track.  
It uses **graph traversal** and **greedy optimizations** to solve the problem efficiently.  

---

## 📂 Project Structure  
```
max_racers/
│── CMakeLists.txt # Build system (CMake)
│── include/
│ └── racers.h # Header file (declarations)
│── src/
│ ├── main.cpp # Entry point
│ └── racers.cpp # Implementation
│── tests/
│ └── sample_tests.cpp # Unit tests
│── README.md # Documentation
```


---

## ⚡ Quick Start  

### 🔨 Build with CMake  
```bash
mkdir build && cd build
cmake ..
make
```

▶️ Run
```bash
Copy code
./relay_racers
🧪 Run Tests
bash
Copy code
./tests/sample_tests
```
📸 Sample I/O
```
Input:

5 3
0 2
2 4
0 4

Output:
2

```
🌟 Features
✅ Clean modular codebase (headers + src + tests)

✅ Optimized for C++14

✅ Ready for unit testing

✅ Easy build with CMake


