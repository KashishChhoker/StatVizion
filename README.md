# 📊 Smart Student Report Card System (StatVizion)

A clean and interactive C++ command-line application designed to dynamically record, calculate, and visualize multi-subject student grades, percentages, and performance analytics.

## ✨ Key Features
- **Dynamic Subject Input**: Uses `std::vector` to let users input an arbitrary number of subjects and marks interactively until they type `-1`.
- **Comprehensive Calculations**: Automatically computes total marks obtained, subject-wise percentages, overall aggregate percentage, and CGPA on a 10-point scale.
- **Performance Analytics**: Scans the dataset to instantly identify and display the highest score (Best Subject) and lowest score (Weakest Subject).
- **Star Performance Rating**: Translates the final CGPA into a visual 0-to-10 star rating system (`⭐`).
- **Terminal Bar Charts**: Renders custom ASCII/asterisk (`*`) bar charts directly in the terminal to visualize score distributions across subjects.

## 🛠️ Tech Stack & C++ Concepts
- **Language**: C++
- **Data Structures**: `std::vector`, `std::string`
- **Logic & Control Flow**: `while` loops, `for` loops, co
- nditional logic (`if-else`), and limits (`INT_MIN`, `INT_MAX`).

## 🚀 How to Run
1. Clone or download this repository.
2. Compile the source code using a C++ compiler (like MinGW):
   ```bash
   g++ StatVizion.cpp -o StatVizion
