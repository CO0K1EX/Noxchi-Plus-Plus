## 🌐 Language

- 🇬🇧 English [README.en.md](README.en.md)
- 🇷🇺 Русский (default)

# Nohchi++ (Нохчи Плюс Плюс)

> An experimental layer on top of C++ that allows writing code using Chechen keywords.

---

## 📌 About the Project

**Nohchi++** is an experimental project that rethinks the syntax of C++, making it closer to a natural language (Chechen).

The project is implemented using macros and type aliases that replace standard language constructs.

---

## 💡 Idea

The goal of the project is to explore:

* whether a programming language can be adapted to a natural language
* how code readability changes
* how flexible C++ is as a foundation for building DSLs

---

## 🔧 Example

```cpp
#include "noxchi_plus_plus.h"

БОЛХ_БОЛО

    доллутерахь x = 5;

    нагахьсанна (x > 0)
    {
        хаам(L"Positive number");
    }
    кхечутайпана
    {
        хаам(L"Negative number");
    }

БОЛХ_ЧЕКХБЕЛИ
```

---

## ⚙️ How It Works

The project uses:

* `#define` — to replace keywords (`if`, `while`, `return`)
* `using` — to define type aliases
* the standard C++ library

---

## 🧠 Features

* custom type names (`доллутерахь`, `сиз`)
* localized control structures (`нагахьсанна`, `цкъачунна`)
* simplified input/output (`хаам`, `лаха`)
* automatic Unicode console setup (Windows)

---

## ⚠️ Limitations

* macros make debugging harder
* not intended for production use
* limited IDE support

---

## 🚀 Usage

1. Include the header file:

```cpp
#include "noxchi_plus_plus.h"
```

2. Use the provided macros instead of standard syntax

---

## 🎯 Purpose

* exploring DSL design in C++
* experimenting with localization of programming languages
* improving understanding of the C++ preprocessor

---

## 👤 Author

CO0K1E

---

## 📄 License

Not specified yet
