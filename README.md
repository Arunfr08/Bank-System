# 🏦 Bank Management System in C

A simple, menu-driven **Bank Management System** developed in C that allows users to check their account balance, deposit money, and withdraw money through a console-based interface. This project demonstrates fundamental C programming concepts, including functions, loops, conditional statements, input validation, and basic banking operations.

## ✨ Features

- **Check Balance:** Display the current account balance.
- **Deposit Money:** Add money to the account with input validation.
- **Withdraw Money:** Withdraw money if sufficient funds are available.
- **Input Validation:** Handle invalid inputs and non-numeric values.
- **Transaction Validation:** Prevent zero or negative deposits and withdrawals.
- **Insufficient Funds Check:** Prevent withdrawals exceeding the available balance.
- **Menu-Driven Interface:** Navigate through banking operations using a simple menu.
- **Safe Input Handling:** Clear leftover input using `getchar()` and handle end-of-input conditions.
- **Exit Option:** Close the program gracefully.

## 🛠️ Technologies Used

- **Programming Language:** C
- **Header File:** `stdio.h`
- **Compiler:** GCC
- **Interface:** Command-Line Interface (CLI)

## 📋 Available Operations

| Option | Operation | Description |
|---|---|---|
| 1 | Check Balance | Displays the current balance |
| 2 | Deposit | Adds money to the account |
| 3 | Withdraw | Deducts money from the account |
| 4 | Exit | Terminates the program |

## 🚀 Getting Started

### Prerequisites

Install a C compiler, such as GCC. On Windows, you can use GCC through MinGW-w64 or MSYS2.

### Compilation

Open a terminal in the project directory and run:

```bash
gcc BankProgram.c -o BankProgram
```

Replace `BankProgram.c` with your actual source filename if it differs.

### Run the Program

**Windows (PowerShell):**

```powershell
.\BankProgram.exe
```

**Linux/macOS:**

```bash
./BankProgram
```

## 💻 Example Output

```text
*** Welcome to Bank ***

Choose one of the options below =>
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
Enter your Choice : 2

Enter amount to deposit : 5000
Successfully Deposited Rs.5000.00

Choose one of the options below =>
1. Check Balance
2. Deposit
3. Withdraw
4. Exit
Enter your Choice : 1

Your current balance is : Rs.5000.00
```

## 📚 Concepts Practiced

- Functions and function parameters
- Return values and `void` functions
- Variables and data types
- `do-while` loops
- `switch-case` statements
- Conditional logic using `if-else`
- User input with `scanf()`
- Input validation and buffer clearing
- Floating-point arithmetic
- Basic transaction logic

## ⚠️ Limitations

- Account balance is stored in memory and resets to zero when the program restarts.
- The program supports only one account.
- Transaction history is not stored.
- This is an educational project, not a production-ready banking application.

## 🔮 Future Improvements

- Add account creation and account numbers.
- Implement multiple user accounts.
- Store account information in files or a database.
- Add transaction history.
- Introduce PIN-based authentication.
- Improve monetary calculations using integer-based currency units to avoid floating-point precision issues.

## 🎯 Project Objective

The goal of this project is to strengthen fundamental C programming skills by implementing a basic banking workflow with modular functions, input validation, and transaction checks.

## 👨‍💻 Author

**Arun Saini**

This project is part of my programming practice and GitHub portfolio, showcasing my progress in C programming and problem-solving.

---

*If you find this project useful, consider giving the repository a star!* ⭐
