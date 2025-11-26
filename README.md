# 🏥 Hospital Appointment Management System

*A C Project using File Handling & Structures*

## 📖 Overview

The **Hospital Appointment Management System** is a menu-driven C
program that enables users to book and view hospital appointments.\
It demonstrates important C programming concepts such as:

-   Structures\
-   File Handling (reading & writing)\
-   Switch-case\
-   String handling\
-   Menu-driven programming

This project is suitable for beginners and college-level assignments.

## 📂 Project File Structure

    Hospital-Appointment-System/
    │
    ├── appointment.c          # Main source code
    ├── appointments.txt       # Stores all booked appointments (auto-created)
    │
    └── README.md              # Project documentation

## ✨ Features

### 🔹 1. Book an Appointment

Users can enter: - Patient Name\
- Age\
- Gender\
- Choose Doctor (Cardiologist, Dentist, Orthopedic)\
- Appointment Date

All appointment records are saved into **appointments.txt**.

### 🔹 2. View All Appointments

Displays all stored appointments with details:

    Patient Name  
    Age  
    Gender  
    Doctor  
    Date  

### 🔹 3. Persistent Storage

Appointments are saved using file-handling functions:

    fopen(), fprintf(), fgets(), sscanf(), fclose()

## 🗂️ appointments.txt Format

Each appointment is saved in comma-separated format:

    Name,Age,Gender,Doctor,Date

**Example:**

    Riya Sen,29,Female,Dr. Anita (Dentist),10/03/2025

## 🧠 Concepts Demonstrated

-   Structures (`struct appointment`)\
-   File Handling (append, read)\
-   Switch-case for menu\
-   String handling (`strcpy`, `scanf`)\
-   fgets + sscanf for parsing\
-   Loop-based menu system

## ▶️ How to Compile & Run

### Step 1: Save the code as:

    appointment.c

### Step 2: Compile:

    gcc appointment.c -o appointment

### Step 3: Run the program:

    ./appointment

## 🖥️ Program Menu

    ======= HOSPITAL APPOINTMENT SYSTEM =======
    1. Book Appointment
    2. View All Appointments
    3. Exit

## 🚀 Future Enhancements

You can extend this project by adding: - Search appointment by name\
- Update or delete appointments\
- Sort appointments by date\
- Add more specializations\
- Add validation for input\
- Use binary files instead of text\
- Create GUI or web version

## 🏆 Why This Project is Useful

This project teaches how to build real-life systems using simple C
concepts.\
It helps students understand data management through files and
structure-based programming.

## 👤 Author

ANKITA PATRA

## OUTPUT SCREENSHORT

![image alt](https://github.com/anku282007/Ankita/blob/cd0d8b8aa9af4384c3be1dade0c9fc6a305f3fcf/Screenshot%202025-11-26%20124924.png)
![image alt](https://github.com/anku282007/Ankita/blob/a9c9c125f91908a6ace5bcd8f552b12d8c34b80f/Screenshot%202025-11-26%20124939.png)
![image alt](https://github.com/anku282007/Ankita/blob/aee78d4e1f79c99e87ad959289dc7dad79ec13ff/Screenshot%202025-11-26%20124950.png)
