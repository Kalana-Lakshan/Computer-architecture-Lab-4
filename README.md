# Lab 4: C Programming in RISC-V

## Overview
This lab introduces **C programming for the RISC-V architecture** using the Ripes simulator and RISC-V GCC toolchain.  
By completing this lab, you will:
- Compile and run C programs in the Ripes simulator.  
- Identify RISC-V base instruction sets and extensions.  
- Compare multiplication/division operators with and without the Integer Multiplication/Division extension (`M`).  
- Explore compiler behavior using **Godbolt Compiler Explorer**.

---

## Prerequisites
- **Ripes Simulator** installed and configured with the RISC-V GCC toolchain (PlatformIO).  
- Basic knowledge of C programming.  
- Familiarity with compiling programs using `gcc`.  

---

## Instructions

### 1. Compiling in Ripes
1. Open Ripes and select the **RV32I base instruction set** with the **M extension**.  
2. Load your C file in the editor.  
3. Change input type to **C** and press **Compile**.  
4. Observe disassembled machine code.  

- With `M` extension enabled: multiplication/division use `mul` and `div` instructions.  
- Without `M` extension: compiler generates helper functions (`__mulsi3`, `__divsi3`).  

### 2. Exercises
#### Exercise 1: Iterative Factorial
Write a program `factorial.c` that computes `factorial(7)` using iterative multiplication.

#### Exercise 2: Recursive Factorial
Write a program `factorial_rec.c` that computes `factorial(7)` using recursion.

### 3. Exploring Godbolt
1. Go to [Godbolt Compiler Explorer](https://godbolt.org/).  
2. Paste a sample C program.  
3. Use compiler options like `-march=rv32imd` and compare assembly output.  
4. Switch between RISC-V and x86 compilers to observe differences.  

---

## Notes
- Use `printf` for printing integers.  
- Custom functions (like `print_int`) reduce complexity but are architecture-specific.  
- Execution begins at `_start`, which calls `main`.  

---

## References
- [RISC-V Specification](https://riscv.org/wp-content/uploads/2017/05/riscv-spec-v2.2.pdf)  
- [GCC Optimization Options](https://gcc.gnu.org/onlinedocs/gcc/Optimize-Options.html)  
- [SiFive Compiler Args Guide](https://www.sifive.com/blog/all-aboard-part-1-compiler-args)  
