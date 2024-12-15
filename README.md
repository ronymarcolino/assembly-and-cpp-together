# Integrating Assembly code inside C++

## 📋 Description
This project demonstrates how to integrate Assembly code into programs written in C++. It serves as an example for developers who want to use low-level routines for optimization or specific manipulations that are not easily accessible with C++ alone.

In this case, for example, we can do memory access to fill variables values using MOV mnemonic
and declare a function with assembly code inside

This assembly code is only compatible with the x86 architecture

## ⚞ Prerequisites
- **Operating System**: Windows
- **Compiler**:
  - MSVC (for Windows)
- **CMake**: Version 3.3 or higher (optional but recommended)

## 🛠️ Installation and execution

1. **Clone the Repository**
   ```bash
   git clone https://github.com/ronymarcolino/assembly-and-cpp-together.git
   cd assembly-and-cpp-together
   ```

2. **Compile the Project**
   Using CMake:
   ```bash
   mkdir build
   cd build
   cmake ..
   cmake --build .
   ```

3. **Run the Program**
   After successfully compiling, run the generated file:
   ```bash
   asm_app.exe  # Windows
   ```

## 📂 Folder Structure
```
assembly-and-cpp-together/
├── src/
│   └── main.cpp
├── build/
├── README.md
└── CMakeLists.txt
```

## License
This project is licensed under the MIT License. See the LICENSE file for more details.

---

Feel free to contribute and report issues in the repository!