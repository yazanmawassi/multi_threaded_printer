# Multithreaded Printer in C

This project demonstrates the use of **POSIX threads (`pthreads`)** in C by launching four concurrent functions that each print a message in a loop.

## 🧵 Features

- Creates 4 threads using `pthread_create`
- Each thread runs its own function (`func1`, `func2`, etc.)
- Threads run concurrently and print 10,000 messages each
- Uses `pthread_join` to wait for all threads to finish

## 📂 File Structure

```
multi_threaded_printer/
├── multi_threaded_printer.c  # Main C source file
└── README.md                 # This file
```

## 🧪 How to Compile and Run

### Requirements
- GCC or Clang compiler
- POSIX-compliant system (Linux/macOS)

### Compile

```bash
gcc -pthread -o printer multi_threaded_printer.c
```

### Run

```bash
./printer
```

## ⚠️ Notes

- The output may appear jumbled due to concurrent access to `stdout`.
- For synchronized printing, you can add a `pthread_mutex_t`.

## 📜 License

This project is open source and free to use under the MIT License.
