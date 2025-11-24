# 🏥 Hospital Appointment System — C Programming Project

The **Hospital Appointment System** is a console-based application written in **C**, designed to simplify the process of booking medical appointments.  
The system allows users to **register patients, select doctors, schedule appointments, and view all appointment records**.  
It uses **file handling** for permanent data storage, making it a great project for **first-year programming students**.

---

## 🚩 Objective
To develop a simple and efficient system that automates the appointment-booking process in hospitals using the C programming language.

---

## ✨ Features
✔ Register / add new patient appointment  
✔ Select doctors from different specialties  
✔ Store appointment details in a text file for future use  
✔ Display all booked appointments in a formatted way  
✔ Beginner-friendly, menu-driven interface  

---

## 🧠 Skills Demonstrated
| Topic | Application |
|-------|-------------|
| Structures | Storing data of each appointment |
| File Handling | Saving and retrieving records |
| Switch Case | Menu navigation & doctor selection |
| Loops | Repetition until exit |
| String Handling | Reading names, gender, and date |

This project reflects real-world logic and understanding of data handling without a database.

---

## 📂 Project Structure
Hospital-Appointment-System/
│
├── hospital.c → Main source code
├── appointments.txt → Auto-generated file storing appointment records
└── README.md → Documentation file

yaml
Copy code

---

## 💻 How to Run
### 🔹 Using GCC
```bash
gcc hospital.c -o hospital
./hospital
🔹 Using CodeBlocks / Dev-C++ / Turbo C
Create a new project

Paste the code into the main file

Compile & run

🖥 Sample Output Screenshot (Text)
mathematica
Copy code
======= HOSPITAL APPOINTMENT SYSTEM =======
1. Book Appointment
2. View All Appointments
3. Exit
Enter your choice: 1

Enter patient name: Sophia
Enter age: 29
Enter gender: Female

Available Doctors:
1. Dr. Raj (Cardiologist)
2. Dr. Anita (Dentist)
3. Dr. Vivek (Orthopedic)
Choose doctor (1–3): 2

Enter appointment date (DD/MM/YYYY): 18/01/2025
✔ Appointment booked successfully!
🔮 Possible Enhancements (For Better Grades)
💠 Search appointment by patient name
💠 Edit or delete an appointment
💠 Doctor-wise appointment filtering
💠 Admin login / password security
💠 Export appointments as PDF / CSV

🤝 Contributions
This is an open-source project. Suggestions, improvements and pull requests are always welcome.

📜 License
This project is free to use for educational and academic purposes.

