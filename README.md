# Project-2-TP
# Process Scheduler Simulator (FCFS)

## 📌 Project Overview
This project is a C-based simulation of the **First Come First Served (FCFS)** scheduling algorithm. It demonstrates how an operating system processes tasks in the order they arrive.

## 🛠️ Key Features
- Supports up to 10 tasks.
- Calculates **Completion Time**, **Turnaround Time**, and **Wait Time** for each task.
- Provides **Average Waiting Time** and **Average Turnaround Time** results.
- Displays results in a clean, organized table.

## 📝 Logic & Formulas
The simulator uses these core formulas for processing:
1. **Finish Time**: Time when the previous task ended + Burst Time of current task.
2. **Total Time (Turnaround)**: Finish Time - Arrival Time.
3. **Wait Time**: Total Time - Burst Time.

## 🚀 How to Run
1. Use a C compiler (like GCC) to compile the code:
   ```bash
   gcc main.c -o scheduler

## 📊 Sample Output
| Task | Arrival | Duration | Finishes | Total Time | Wait Time |
|------|---------|----------|----------|------------|-----------|
| 1    | 0       | 5        | 5        | 5          | 0         |
| 2    | 2       | 3        | 8        | 6          | 3         |

**Average Total Time:** 6.67  
**Average Wait Time:** 2.67
## 👤 Authors
- Asnoune Mohamed Dhia Eddine
- Dhia Eddine Bendjazia
