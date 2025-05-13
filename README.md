# 🌺 Devbhasha: The Divine Programming Language

## 📜 Project Description

**Devbhasha** (meaning **"Language of the Gods"** in Sanskrit) is a programming language deeply inspired by the grandeur of Indian mythology, rich cultural traditions, and historical philosophies.

Designed with the intent to make programming both accessible and culturally resonant, **Devbhasha** blends modern computational concepts with ancient Indian wisdom. This language celebrates the **spiritual elegance of Sanskrit and Hindi**, turning code into an artistic and philosophical experience.

It adheres to principles derived from Indian scriptures and thought:

- **Spashta (Clarity)** — Code should be lucid and easily understandable  
- **Lakshya (Purpose)** — Every component must have a clear intent and goal  
- **Sanyoga (Harmony)** — All parts of the program should work in unison  
- **Soundarya (Elegance)** — Code should be pleasing to read and write  

---

## 👤 Student Information

- **Student Name:** Om Pandit
- **Enrollment ID:** 22000658

---

## 📦 Project Components

- `devbhasha_keywords.pdf` — A comprehensive reference document listing all Devbhasha language keywords  
- `devbhasha_manual.pdf` — The language specification guide and user manual containing syntax rules and usage examples  

---

## ⚙️ How to Run Devbhasha Programs

### 🧱 Compilation Instructions

To compile and execute Devbhasha programs, follow these steps:

1. **Generate the parser using Bison:**

   ```bash
   bison -d devbhasha.y

2. **Generate the lexer using Flex:**
    ```bash
    flex devbhasha.l

3. **Compile the generated files using GCC:**
    ```bash
    gcc lex.yy.c devbhasha.tab.c -o devbhasha

4. **Run a sample Devbhasha program:**
    ```bash
    ./devbhasha Sample/hello_world.db

### Example Program
A simple Hello World program in Devbhasha:

dharma HelloWorld {
    lekha("Namaste, World!");
}
samapti

### 💻 System Requirements
- GCC Compiler
- Flex (Fast Lexical Analyzer)
- Bison (GNU Parser Generator)
- Unix/Linux environment (recommended)

### Features
- Sanskrit/Hindi-inspired keywords for all programming constructs
- Support for variables, constants, data types, loops, conditionals, and functions
- Object-Oriented Programming (OOP) support with classes, inheritance, and methods
- Standard Library with math, string manipulation, and system utilities
- Built-in error handling and diagnostics
- Focus on readability, structure, and cultural aesthetics
- Programs written in Devbhasha feel native to Indian philosophy and tradition

### Acknowledgments
- Special thanks to Prof. Vaibhavi Patel for her mentorship, encouragement, and guidance throughout this project
- Heartfelt gratitude to my collaborator Vaidik Patel for his continuous support and contributions during development

### 📚 Inspiration
Devbhasha is not just a programming language — it's a cultural and philosophical homage to India's intellectual legacy. It strives to empower future technologists with a language that speaks their roots while embracing global programming standards.
