# 🏦 Simple Bank System (C++)

## 📋 Overview
This project is a **basic banking system** written in **C++**.  
It allows users to perform simple banking operations directly from the console:
- 💰 View balance  
- 💵 Deposit money  
- 💸 Withdraw money  
- 🚪 Exit the system  

---

## ⚙️ How It Works
When the program runs, it displays a simple text menu:
```

----BANK----

1. See balance
2. Deposit
3. Withdraw
4. Exit

````

**User options:**
- **1. See balance** → Displays your current balance.  
- **2. Deposit** → Prompts you to enter an amount to deposit; adds it to your balance.  
- **3. Withdraw** → Prompts you to enter an amount to withdraw; checks if balance is sufficient.  
- **4. Exit** → Ends the program with a thank-you message.  

---

## 💻 Code Structure
| Function | Description |
|-----------|--------------|
| `deposit()` | Asks the user for a deposit amount and returns it. |
| `withdraw(double balance)` | Handles withdrawal, checking if there is enough balance. |
| `main()` | Displays the menu and controls program flow. |

---

## 🚀 How to Run
To compile and run the program:

```bash
g++ 30_Bank.cpp -o Bank
./Bank
````

---

## 🧠 Future Improvements

* 🔐 Add user authentication (username/password)
* 💾 Save account balance to a file instead of memory
* 🧾 Implement transaction history
* 🧮 Add interest or account types

---

## 📄 License

This project is open-source and free to use for learning or practice purposes.
