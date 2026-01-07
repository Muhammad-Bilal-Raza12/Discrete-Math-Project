# Discrete-Math-Project
# Probability Simulator for Discrete Events.
# 🎲 Probability Simulator for Discrete Events

An interactive C++ console application designed to help students and enthusiasts understand probability theory through practical simulations. This project was developed as part of a Discrete Mathematics course to demonstrate key probabilistic concepts in an engaging, hands-on manner.

## 📋 Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Experiments Included](#experiments-included)
- [Learning Outcomes](#learning-outcomes)
- [Technical Details](#technical-details)
- [Contributing](#contributing)
- [License](#license)

## 🎯 Overview

This simulator provides an interactive environment for exploring probability concepts through four main categories of experiments:

1. **Dice Rolling Experiments** - Explore outcomes of rolling fair six-sided dice
2. **Coin Toss Experiments** - Understand probability through coin flips
3. **Card Drawing Simulations** - Learn probability with a standard 52-card deck
4. **Birthday Paradox Demonstration** - Discover the counterintuitive Birthday Paradox

## ✨ Features

- **Interactive Console Interface** - User-friendly menu-driven navigation
- **Comprehensive Theory** - Each section includes detailed explanations of probability concepts
- **Multiple Experiments** - Over 30 different probability scenarios to explore
- **Real-time Calculations** - Instant probability computations with both fractional and decimal results
- **Educational Content** - Clear explanations of sample spaces, events, and probability formulas
- **Visual Formatting** - Clean, organized output for better understanding

## 🚀 Installation

### Prerequisites

- C++ compiler (GCC, MinGW, or Visual Studio)
- Windows OS (due to `windows.h` and `conio.h` dependencies)

### Steps

1. Clone the repository:
```bash
git clone https://github.com/yourusername/probability-simulator.git
cd probability-simulator
```

2. Compile the program:
```bash
g++ "Probability Simulator in Discrete Events.cpp" -o probability_simulator
```

3. Run the executable:
```bash
./probability_simulator
```

## 💻 Usage

1. Launch the program
2. Navigate through the main menu using number keys
3. Select a category of experiments (Dice, Coins, Cards, or Birthday Paradox)
4. Choose specific experiments from the submenu
5. View probability calculations and explanations
6. Press Enter to return to the menu and continue exploring

### Example Usage Flow

```
Main Menu → Dice Rolling Experiments → Probability of Even Number → View Results → Continue
```

## 📁 Project Structure

```
probability-simulator/
│
├── Probability Simulator in Discrete Events.cpp  # Main source code
├── README.md                                      # This file
└── LICENSE                                        # License information
```

## 🎲 Experiments Included

### Dice Rolling Experiments (11 experiments)
- Probability of specific numbers
- Even and odd numbers
- Numbers greater/less than a value
- Prime and composite numbers
- Divisibility tests
- Custom number sets
- Complement events

### Coin Toss Experiments (10 experiments)
- Single and multiple tosses
- Exactly n heads
- At least n heads
- No heads (all tails)
- Equal heads and tails
- Complement events

### Card Drawing Simulations (11 experiments)
- Drawing by color (red/black)
- Face cards and aces
- Specific suits
- Numbered cards
- Red face cards
- Cards greater than 10
- Multiple card probabilities

### Birthday Paradox (6 experiments)
- Two people sharing birthdays
- All different birthdays
- At least one match
- Classic 23-person problem
- Custom group sizes
- Probability visualization

## 📚 Learning Outcomes

By using this simulator, you will:

- Understand the difference between **theoretical** and **experimental** probability
- Learn to calculate probabilities using the fundamental formula
- Grasp the concept of **sample spaces** and **events**
- Explore the counterintuitive **Birthday Paradox**
- Apply probability concepts to real-world scenarios
- Develop intuition for discrete probability distributions

## 🔧 Technical Details

### Key Functions

- `printHeader()` - Displays the application banner
- `printMainMenu()` - Shows main navigation options
- `calculate_probability()` - Computes probabilities for coin tosses
- `gcd()` - Finds greatest common divisor for fraction simplification
- `decimalToFractionConverter()` - Converts decimal probabilities to fractions

### Dependencies

- `<iostream>` - Input/output operations
- `<windows.h>` - Console manipulation (Windows-specific)
- `<conio.h>` - Keyboard input handling
- `<string>` - String operations
- `<cmath>` - Mathematical functions

### Platform Compatibility

**Currently supported:** Windows

**Note:** This program uses Windows-specific libraries. To run on Linux/Mac, you would need to replace:
- `windows.h` functions with cross-platform alternatives
- `conio.h` functions with standard C++ input methods
- `system("cls")` with appropriate screen clearing commands

## 🤝 Contributing

Contributions are welcome! Here are some ways you can help:

1. **Port to cross-platform** - Remove Windows dependencies
2. **Add more experiments** - Expand the simulation library
3. **Improve UI** - Enhance the console interface
4. **Add visualizations** - Include graphical probability displays
5. **Bug fixes** - Report and fix any issues



## 📝 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 👥 Authors

- **Muhammad Bilal Raza** - *Initial work* - [YourGitHub](https://github.com/Muhammad-Bilal-Raza12)
- **Hussain Aftab** - *Initial work* - [YourGitHub](https://github.com/Hussain-Aftab-CS)

## 🙏 Acknowledgments

- Developed as a Discrete Mathematics course project
- Inspired by the need to make probability theory more accessible
- Thanks to all probability theory educators and resources

## 📧 Contact

For questions, suggestions, or feedback:
- Open an issue on GitHub
- Email: br6918322@gmail.com
- Email: hussainuet02@gmail.com
---

⭐ If you found this project helpful, please consider giving it a star!

**Happy Learning! 🎓**
