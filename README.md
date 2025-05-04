# VSMS - Vehicle Sales Management System

**VSMS** is a terminal-based vehicle sales management system developed in C. It is designed as a course project for practicing data structures and procedural programming. The system features a user login/registration module, vehicle inventory management, purchase tracking, and admin controls.

## 🧩 Features

### 👤 User Side
- Register and input personal information (username, password, birthday, email)
- Log in with input validation
- View available vehicles and purchase by ID
- Track personal purchase records
- View and update personal profile

### 🔐 Admin Side
- View all users' information
- View or search all purchase records
- Delete specific users
- Add or update vehicle inventory

## 🧠 Technical Highlights
- Implemented with three core structs: `vehicle`, `user`, `admin`
- Used two sequential lists to store vehicle and user data
- File I/O with CSV for reading/writing vehicle information
- UI navigation via nested menus with `switch-case` logic
- Used custom list operations: `Insert`, `Delete`, `Locate`, `Display`
- Modular code with reusable functions and structure pointer parameters

## 🛠️ Build & Run

### Prerequisites
- GCC (or any standard C compiler)
- Make

### Compile and Run

```bash
make
./build/VSMS      # on Linux/macOS
VSMS.exe          # on Windows
```

### Clean build files
```bash
make clean
```

## 📂 Project Structure

```
VSMS/
├── src/              # Source code (.c files)
├── include/          # Header files
├── data/             # CSV input files
│   └── vehicle_info.csv
├── docs/             # Project report (in Chinese)
│   └── project-report.docx
├── build/            # Build output (.o, executable)
├── Makefile          # Build script
├── .gitignore
└── README.md
```

## 📄 Report

The detailed course project report (written in Chinese) is available in [docs/project-report.docx](docs/project-report.docx).

If you're a reviewer or recruiter, feel free to ask for a brief English summary or walkthrough — I'd be happy to explain the core logic and structure.

## 🎯 Purpose

This project was designed to integrate C programming, data structures, and basic file operations into a real-world scenario. It also reflects my ability to design clean interfaces, use structured programming, and organize code into reusable, maintainable modules.

## 📬 Contact

> Developed by **Chen Yizhu (陈奕竹)**  
> [GitHub Profile](https://github.com/Chen-ipynb)  
> MSc in Artificial Intelligence, Eötvös Loránd University  
> Actively seeking summer internship opportunities in Europe 🇪🇺
