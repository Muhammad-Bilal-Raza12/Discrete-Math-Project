// DISCRETE MATHEMATICS PROJECT
#include <iostream>
#include <windows.h>
#include <string>
#include <conio.h>
#include <cmath>
using namespace std;

// Function Prototypes
void clearScreen();
void gotoxy(int x, int y);
void printHeader();
void printMainMenu();
string userChoice();

// Probability Theory
void probTheoryHeader();
void printProbTheory();

// Dice rolling experiments releated functions

void dice_rolling_experiment_menu();
void dice_rolling_experiments();
void dice_rolling_choice1();
void dice_rolling_choice2();
void dice_rolling_choice3();
void dice_rolling_choice4();
void dice_rolling_choice5();
void dice_rolling_choice6();
void dice_rolling_choice7();
void dice_rolling_choice8();
void dice_rolling_choice9();
void dice_rolling_choice10();
void dice_rolling_choice11();

// Coin toss experiments releated functions

int count_heads(int num, int tosses);
int calculate_probability(int tosses, int min_heads, int max_heads, string event_name);
void coin_toss_experiments();
void coin_toss_menu();
void coin_toss_choice1();
void coin_toss_choice2();
void coin_toss_choice3();
void coin_toss_choice4();
void coin_toss_choice5();
void coin_toss_choice6();
void coin_toss_choice7();
void coin_toss_choice8();
void coin_toss_choice9();
void coin_toss_choice10();

// Card Drawing Simulations

void cardDrawingHeader();
void cardDrawingMenu();
void cardDrawingTheory();
void cardDrawingChoice2();
void cardDrawingChoice3();
void cardDrawingChoice4();
void cardDrawingChoice5();
void cardDrawingChoice6();
void cardDrawingChoice7();
void cardDrawingChoice8();
void cardDrawingChoice9();
void cardDrawingChoice10();
void cardDrawingChoice11();

// Birthday Paradox Demonstration

void birthdayParadoxMenu();
void birthdayParadoxTheory();
void birthdayParadoxChoice2();
void birthdayParadoxChoice3();
void birthdayParadoxChoice4();
void birthdayParadoxChoice5();
void birthdayParadoxChoice6();

// Basic Calculations
int gcd(int a, int b);
int count_heads(int num, int tosses);
int calculate_probability(int tosses, int min_heads, int max_heads, string event_name);
string decimalToFractionConverter(double decimal);

int main()
{
     system("cls");
     string ch, choice;
     printHeader();
     while (true)
     {
          printMainMenu();
          choice = userChoice();
          if (choice == "1")
          {
               printProbTheory();
          }
          else if (choice == "2")
          {
               while (true)
               {
                    dice_rolling_experiments();
                    ch = userChoice();
                    if (ch == "1")
                    {
                         dice_rolling_choice1();
                    }
                    else if (ch == "2")
                    {
                         dice_rolling_choice2();
                    }
                    else if (ch == "3")
                    {
                         dice_rolling_choice3();
                    }
                    else if (ch == "4")
                    {
                         dice_rolling_choice4();
                    }
                    else if (ch == "5")
                    {
                         dice_rolling_choice5();
                    }
                    else if (ch == "6")
                    {
                         dice_rolling_choice6();
                    }
                    else if (ch == "7")
                    {
                         dice_rolling_choice7();
                    }
                    else if (ch == "8")
                    {
                         dice_rolling_choice8();
                    }
                    else if (ch == "9")
                    {
                         dice_rolling_choice9();
                    }
                    else if (ch == "10")
                    {
                         dice_rolling_choice10();
                    }
                    else if (ch == "11")
                    {
                         dice_rolling_choice11();
                    }
                    else if (ch == "12")
                    {
                         break;
                    }
                    else
                    {
                         cout << "Invalid Input!!!!" << endl;
                         cout << "Press Enter to continue....";
                         cin.ignore();
                         cin.get();
                         continue;
                    }
                    cout << "Press Enter to continue....";
                    cin.ignore();
                    cin.get();
               }
          }
          else if (choice == "3")
          {
               while (true)
               {
                    coin_toss_experiments();
                    ch = userChoice();
                    if (ch == "1")
                    {
                         coin_toss_choice1();
                    }
                    else if (ch == "2")
                    {
                         coin_toss_choice2();
                    }
                    else if (ch == "3")
                    {
                         coin_toss_choice3();
                    }
                    else if (ch == "4")
                    {
                         coin_toss_choice4();
                    }
                    else if (ch == "5")
                    {
                         coin_toss_choice5();
                    }
                    else if (ch == "6")
                    {
                         coin_toss_choice6();
                    }
                    else if (ch == "7")
                    {
                         coin_toss_choice7();
                    }
                    else if (ch == "8")
                    {
                         coin_toss_choice8();
                    }
                    else if (ch == "9")
                    {
                         coin_toss_choice9();
                    }
                    else if (ch == "10")
                    {
                         coin_toss_choice10();
                    }
                    else if (ch == "11")
                    {
                         break;
                    }
                    else
                    {
                         cout << "Invalid Input!!!!" << endl;
                         cout << "Press Enter to continue....";
                         cin.ignore();
                         cin.get();
                         continue;
                    }
                    cout << "Press Enter to continue....";
                    cin.ignore();
                    cin.get();
               }
          }
          else if (choice == "4")
          {
               while (true)
               {
                    cardDrawingMenu();
                    ch = userChoice();
                    if (ch == "1")
                    {
                         cardDrawingTheory();
                    }
                    else if (ch == "2")
                    {
                         cardDrawingChoice2();
                    }
                    else if (ch == "3")
                    {
                         cardDrawingChoice3();
                    }
                    else if (ch == "4")
                    {
                         cardDrawingChoice4();
                    }
                    else if (ch == "5")
                    {
                         cardDrawingChoice5();
                    }
                    else if (ch == "6")
                    {
                         cardDrawingChoice6();
                    }
                    else if (ch == "7")
                    {
                         cardDrawingChoice7();
                    }
                    else if (ch == "8")
                    {
                         cardDrawingChoice8();
                    }
                    else if (ch == "9")
                    {
                         cardDrawingChoice9();
                    }
                    else if (ch == "10")
                    {
                         cardDrawingChoice10();
                    }
                    else if (ch == "11")
                    {
                         cardDrawingChoice11();
                    }
                    else if (ch == "12")
                    {
                         break;
                    }
                    else
                    {
                         cout << "Invalid Input!!!!" << endl;
                         cout << "Press Enter to continue....";
                         cin.ignore();
                         cin.get();
                         continue;
                    }
                    cout << "Press Enter to continue....";
                    cin.ignore();
                    cin.get();
               }
          }
          else if (choice == "5")
          {
               while (true)
               {
                    birthdayParadoxMenu();
                    ch = userChoice();
                    if (ch == "1")
                    {
                         birthdayParadoxTheory();
                    }
                    else if (ch == "2")
                    {
                         birthdayParadoxChoice2();
                    }
                    else if (ch == "3")
                    {
                         birthdayParadoxChoice3();
                    }
                    else if (ch == "4")
                    {
                         birthdayParadoxChoice4();
                    }
                    else if (ch == "5")
                    {
                         birthdayParadoxChoice5();
                    }
                    else if (ch == "6")
                    {
                         birthdayParadoxChoice6();
                    }
                    else if (ch == "7")
                    {
                         break;
                    }
                    else
                    {
                         cout << "Invalid Input!!!!" << endl;
                         cout << "Press Enter to continue....";
                         cin.ignore();
                         cin.get();
                         continue;
                    }
                    cout << "Press Enter to continue....";
                    cin.ignore();
                    cin.get();
               }
          }
          else if (choice == "6")
          {
               return 0;
          }
          else
          {
               cout << "Enter valid serial no.\n";
          }
          clearScreen();
          printHeader();
     }
     return 0;
}

void gotoxy(int x, int y)
{
     COORD c;
     c.X = x;
     c.Y = y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void clearScreen()
{
     cout << "Press any key to continue";
     getch();
     system("cls");
}
void printHeader()
{
     gotoxy(30, 0);
     cout << "======================================================================\n";
     gotoxy(30, 1);
     cout << "||                                                                  ||\n";
     gotoxy(30, 2);
     cout << "||                         PROBABILITY SIMULATOR                    ||\n";
     gotoxy(30, 3);
     cout << "||                          FOR DISCRETE EVENTS                     ||\n";
     gotoxy(30, 4);
     cout << "||                                                                  ||\n";
     gotoxy(30, 5);
     cout << "======================================================================\n";
}
void printMainMenu()
{
     cout << "This project contains the following menu:\n\n";
     cout << "1. Probability Theory (Overview + Concepts)\n\n";
     cout << "2. Dice Rolling Experiments\n\n";
     cout << "3. Coin Tosses Experiments\n\n";
     cout << "4. Card Drawing Simulations\n\n";
     cout << "5. Birthday Paradox Demonstration\n\n";
     cout << "6. Exit\n";
     cout << "Enter serial no. of what you want to see\n";
}
string userChoice()
{
     string choice;
     cin >> choice;
     return choice;
}
void probTheoryHeader()
{
     system("cls");
     cout << "==============================================================================" << endl;
     cout << "                               PROBABILITY THEORY                             " << endl;
     cout << "==============================================================================" << endl;
}
void printProbTheory()
{
     probTheoryHeader();
     cout << "* What Is Probability?\n\n";
     cout << "-> Probability theory is an advanced branch of mathematics that deals with measuring the likelihood of events occurring.\n";
     cout << "-> It provides tools to analyze situations involving uncertainty and helps in determining how likely certain outcomes are.\n";
     cout << "-> This theory uses the concepts of random variables, sample space, probability distributions, and more to determine the outcome of any situation.\n\n";
     cout << "* For Example: Flipping a Coin\n\n";
     cout << "-> Flipping a coin is a random event with two possible outcomes: heads or tails.\n";
     cout << "-> Each time you flip a fair coin, there are exactly two possible outcomes, each with an equal chance of occurring.\n";
     cout << "-> Therefore, the probability of landing on heads is 1/2.\n";
     cout << "-> Similarly, the probability of landing on tails is also 1/2.\n\n";
     cout << "* Important Terms:\n\n";
     cout << "1. Sample Space (S):\n";
     cout << "\t All possible outcomes of an experiment.\n\n";
     cout << "2. Event (E):\n";
     cout << "\t One or more outcomes of interest from the sample space.\n\n";
     cout << "* Types of Probability:\n\n";
     cout << "1. Theoretical Probability:\n";
     cout << "- Theoretical probability is the mathematical likelihood of an event happening, calculated before any experiment.\n";
     cout << "- It's based on logic and models, not real-world trials\n";
     cout << "- Formula:    P(E)=   Number of Favorable Outcomes\n";
     cout << "                    ---------------------------------\n";
     cout << "                    Total Number of Possible Outcomes\n\n";
     cout << "2. Experimental Probability:\n";
     cout << "- The likelihood of an event occurring based on actual experiments or observations.\n";
     cout << "- It is found by performing a series of experiments and observing their outcomes.\n";
     cout << "- These experiments are also known as trials.\n";
     cout << "- Formula:    P(E)=  Number of Times Event E Happened\n";
     cout << "                    ---------------------------------\n";
     cout << "                          Total Number of Trials\n\n";
     cout << "* Note:\n\n";
     cout << "\t As the number of trials increases, the experimental probability approaches the theoretical probability\n\n";
     cout << "* Summary:\n\n";
     cout << "-> Probability measures how likely an event is.\n";
     cout << "-> It's always between 0 and 1.";
     cout << "-> The more you try, the closer your experimental results get to the theory!\n\n";
}
void dice_rolling_experiment_menu()
{
     system("cls");
     cout << "==============================================================================" << endl;
     cout << "                              Dice Rolling Experiments                        " << endl;
     cout << "==============================================================================" << endl;
}
void dice_rolling_experiments()
{
     dice_rolling_experiment_menu();
     string ch;
     cout << "1) What is dice rolling experiment?" << endl
          << endl;

     cout << "2) Probability of getting a specific number\n\t(Example: 1, 2, 3, 4, 5, or 6)" << endl;

     cout << "3) Probability of getting an even number\n\t(Example: 2, 4, or 6)" << endl;

     cout << "4) Probability of getting an odd number\n\t(Example: 1, 3, or 5)" << endl;

     cout << "5) Probability of getting a number greater than a given value\n\t(Example: greater than 3)" << endl;

     cout << "6) Probability of getting a number less than a given value\n\t(Example: less than 4)" << endl;

     cout << "7) Probability of getting a prime number\n\t(Example: 2, 3, or 5)" << endl;

     cout << "8) Probability of getting a composite number\n\t(Example: 4 or 6)" << endl;

     cout << "9) Probability of getting a number divisible by a given value\n\t(Example: divisible by 2 or 3)" << endl;

     cout << "10) Probability of getting a number from a user-defined set\n\t(Example: {1, 3, 6})" << endl;

     cout << "11) Probability of not getting a specific number\n\t(Example: not getting 5)" << endl;
     cout << "12) Exit" << endl
          << endl;
     cout << "Enter your choice:";
}
void dice_rolling_choice1()
{
     dice_rolling_experiment_menu();
     cout << "----- Dice Rolling Experiment (Theory) -----\n\n";

     cout << "A dice rolling experiment is a random experiment in probability.\n";
     cout << "In this experiment, a fair one or two six-sided dice is rolled once.\n\n";

     cout << "Sample Space:\n";
     cout << "The sample space is the set of all possible outcomes.\n";
     cout << "For a dice roll, the sample space is:\n";
     cout << "S = {1, 2, 3, 4, 5, 6}\n\n";

     cout << "Each outcome has an equal chance of occurring.\n";
     cout << "So, probability of each outcome is:\n";
     cout << "P(1) = P(2) = P(3) = P(4) = P(5) = P(6) = 1/6\n\n";

     cout << "Event:\n";
     cout << "An event is a subset of the sample space.\n\n";

     cout << "Example Event:\n";
     cout << "Let event A be getting an even number.\n";
     cout << "A = {2, 4, 6}\n\n";

     cout << "Probability of Event A:\n";
     cout << "Number of favorable outcomes = 3\n";
     cout << "Total number of outcomes = 6\n";
     cout << "P(A) = 3/6 = 1/2\n\n";

     cout << "Conclusion:\n";
     cout << "Dice rolling experiments help us understand random behavior\n";
     cout << "and are commonly used in probability and statistics.\n";
}
void dice_rolling_choice2()
{
     dice_rolling_experiment_menu();
     string n;
     cout << "Enter the number to get probability:";
     cin >> n;
     if (n > "0" && n < "7")
     {
          cout << "Sample Space={1,2,3,4,5,6}" << endl
               << endl;
          cout << "Favourable outcome={" << n << "}" << endl
               << endl;
          cout << "P(" << n << ")= Number of favourable outcomes / Total outcomes" << endl
               << endl;
          cout << "P(" << n << ") =" << " 1/6" << endl
               << endl;
          cout << "It means the chance of getting " << n << " in one dice roll is 1 out of 6." << endl;
     }
     else
     {
          cout << "Invalid Input!!!!" << endl;
     }
}
void dice_rolling_choice3()
{
     dice_rolling_experiment_menu();
     int n = 0;
     int s[6] = {1, 2, 3, 4, 5, 6};
     cout << "Sample Space={1,2,3,4,5,6}" << endl
          << endl;
     cout << "Favourable outcome={";
     for (int idx = 0; idx < 6; idx++)
     {
          if (s[idx] % 2 == 0)
          {
               cout << s[idx] << ",";
               n++;
          }
     }
     cout << "\b}" << endl
          << endl;
     cout << "P(Even Numbers)= Number of favourable outcomes / Total outcomes" << endl
          << endl;
     cout << "P(Even Numbers) =" << n << "/6" << " or 1/2 " << endl
          << endl;
     cout << "This means there is a 50 % chance of getting an even number in a single roll of the die." << endl;
}
void dice_rolling_choice4()
{
     dice_rolling_experiment_menu();
     int n = 0;
     int s[6] = {1, 2, 3, 4, 5, 6};
     cout << "Sample Space={1,2,3,4,5,6}" << endl
          << endl;
     cout << "Favourable outcome={";
     for (int idx = 0; idx < 6; idx++)
     {
          if (s[idx] % 2 != 0)
          {
               cout << s[idx] << ",";
               n++;
          }
     }
     cout << "\b}" << endl
          << endl;
     cout << "P(Odd Numbers)= Number of favourable outcomes / Total outcomes" << endl
          << endl;
     cout << "P(Odd Numbers) =" << n << "/6" << " or 1/2 " << endl
          << endl;
     cout << "This means there is a 50 % chance of getting an odd number in a single roll of the die." << endl;
}
void dice_rolling_choice5()
{
     dice_rolling_experiment_menu();
     int n = 0, temp;
     int s[6] = {1, 2, 3, 4, 5, 6};
     string number;
     cout << "Enter the number to get the probability:";
     cin >> number;
     if (number > "-1" && number < "7")
     {
          temp = stoi(number);
          cout << "Sample Space={1,2,3,4,5,6}" << endl
               << endl;

          cout << "Favourable outcome={";
          for (int idx = 0; idx < 6; idx++)
          {
               if (s[idx] > temp)
               {
                    cout << s[idx] << ",";
                    n++;
               }
          }
          cout << "\b}" << endl
               << endl;
          cout << "P = Number of favourable outcomes / Total outcomes" << endl
               << endl;
          cout << "P =" << n << "/6" << endl
               << endl;
          cout << "This means there is a " << (n * 100) / 6 << " % chance of getting a number greater than " << number << " in a single roll of the die." << endl;
     }
     else
     {
          cout << "Invalid Input!!!!" << endl;
     }
}
void dice_rolling_choice6()
{
     dice_rolling_experiment_menu();
     int n = 0, temp;
     int s[6] = {1, 2, 3, 4, 5, 6};
     string number;
     cout << "Enter the number to get the probability:";
     cin >> number;
     if (number > "0" && number < "7")
     {
          temp = stoi(number);
          cout << "Sample Space={1,2,3,4,5,6}" << endl
               << endl;

          cout << "Favourable outcome={";
          for (int idx = 0; idx < 6; idx++)
          {
               if (s[idx] < temp)
               {
                    cout << s[idx] << ",";
                    n++;
               }
          }
          cout << "\b}" << endl
               << endl;
          cout << "P = Number of favourable outcomes / Total outcomes" << endl
               << endl;
          cout << "P =" << n << "/6" << endl
               << endl;
          cout << "This means there is a " << (n * 100) / 6 << " % chance of getting a number less than " << number << " in a single roll of the die." << endl;
     }
     else
     {
          cout << "Invalid Input!!!!" << endl;
     }
}
void dice_rolling_choice7()
{
     dice_rolling_experiment_menu();
     int n = 0;
     int s[6] = {1, 2, 3, 4, 5, 6};

     cout << "Sample Space={1,2,3,4,5,6}" << endl
          << endl;
     cout << "Favourable outcome={";

     for (int idx = 0; idx < 6; idx++)
     {
          if (s[idx] == 2 || s[idx] == 3 || s[idx] == 5)
          {
               cout << s[idx] << ",";
               n++;
          }
     }

     cout << "\b}" << endl
          << endl;
     cout << "P(Prime Numbers) = Number of favourable outcomes / Total outcomes" << endl
          << endl;
     cout << "P(Prime Numbers) = " << n << "/6" << " or 1/2 " << endl
          << endl;
     cout << "This means there is a " << (n * 100) / 6 << " % chance of getting a prime number in a single roll of the die." << endl;
}
void dice_rolling_choice8()
{

     dice_rolling_experiment_menu();
     int n = 0;
     int s[6] = {1, 2, 3, 4, 5, 6};

     cout << "Sample Space={1,2,3,4,5,6}" << endl
          << endl;
     cout << "Favourable outcome={";

     for (int idx = 0; idx < 6; idx++)
     {
          if (s[idx] == 4 || s[idx] == 6)
          {
               cout << s[idx] << ",";
               n++;
          }
     }

     cout << "\b}" << endl
          << endl;
     cout << "P(Composite Numbers) = Number of favourable outcomes / Total outcomes" << endl
          << endl;
     cout << "P(Composite Numbers) = " << n << "/6" << " or 1/3 " << endl
          << endl;
     cout << "This means there is a " << (n * 100) / 6 << " % chance of getting a composite number in a single roll of the die." << endl;
}
void dice_rolling_choice9()
{
     dice_rolling_experiment_menu();
     int n = 0, temp;
     int s[6] = {1, 2, 3, 4, 5, 6};
     string number;
     cout << "Enter the number (2,3):";
     cin >> number;
     if (number == "2" || number == "3")
     {
          temp = stoi(number);
          if (temp == 2)
          {
               cout << "Sample Space={1,2,3,4,5,6}" << endl
                    << endl;
               cout << "Favourable outcome={";

               for (int idx = 0; idx < 6; idx++)
               {
                    if (s[idx] % 2 == 0)
                    {
                         cout << s[idx] << ",";
                         n++;
                    }
               }

               cout << "\b}" << endl
                    << endl;
               cout << "P(Composite Numbers) = Number of favourable outcomes / Total outcomes" << endl
                    << endl;
               cout << "P(Composite Numbers) = " << n << "/6" << endl
                    << endl;
               cout << "This means there is a " << (n * 100) / 6 << " % chance of getting a number divisible by " << number << " in a single roll of the die." << endl;
          }
          else
          {
               cout << "Sample Space={1,2,3,4,5,6}" << endl
                    << endl;
               cout << "Favourable outcome={";

               for (int idx = 0; idx < 6; idx++)
               {
                    if (s[idx] % 3 == 0)
                    {
                         cout << s[idx] << ",";
                         n++;
                    }
               }

               cout << "\b}" << endl
                    << endl;
               cout << "P = Number of favourable outcomes / Total outcomes" << endl
                    << endl;
               cout << "P = " << n << "/6" << endl
                    << endl;
               cout << "This means there is a " << (n * 100) / 6 << " % chance of getting a number divisible by " << number << " in a single roll of the die." << endl;
          }
     }
     else
     {
          cout << "Invalid Input!!!!" << endl;
     }
}
void dice_rolling_choice10()
{
     dice_rolling_experiment_menu();
     string set;
     int n = 0;
     cout << "Enter your numbers from 1 to 6 separated by spaces (e.g., 1 3 6): ";
     getline(cin >> ws, set);
     for (int i = 0; i < set.length(); i++)
     {
          if (set[i] >= '1' && set[i] <= '6')
          {
               n++;
          }
          else
          {
               set[i] = ',';
          }
     }
     if (n != 0)
     {
          cout << "Sample Space={1,2,3,4,5,6}" << endl
               << endl;
          cout << "Favourable outcome={" << set << "}" << endl
               << endl;
          cout << "P(User-defined set) = Number of favourable outcomes / Total outcomes" << endl
               << endl;
          cout << "P(User-defined set) = " << n << "/6 " << endl
               << endl;
          cout << "This means there is a " << (n * 100) / 6 << "% chance of getting a number from your set in a single roll of the die." << endl;
     }
     else
     {
          cout << "No valid numbers entered!!!" << endl;
     }
}
void dice_rolling_choice11()
{

     dice_rolling_experiment_menu();
     string n;
     int set[6] = {1, 2, 3, 4, 5, 6}, temp, count = 0;
     cout << "Enter the number to get probability:";
     cin >> n;
     if (n > "0" && n < "7")
     {
          temp = stoi(n);
          cout << "Sample Space={1,2,3,4,5,6}" << endl
               << endl;
          cout << "Favourable outcome={";
          for (int idx = 0; idx < 6; idx++)
          {
               if (set[idx] == temp)
               {
                    continue;
               }
               cout << set[idx] << ",";
               count++;
          }
          cout << "\b}" << endl;
          cout << "P(!" << n << ")= Number of favourable outcomes / Total outcomes" << endl
               << endl;
          cout << "P(!" << n << ") =" << count << "/6" << endl
               << endl;
          cout << "This means there is a " << (count * 100) / 6 << "% chance of getting not " << temp << " in a single roll of the die." << endl;
     }
     else
     {
          cout << "Invalid Input!!!!" << endl;
     }
}
void coin_toss_experiments()
{
     coin_toss_menu();
     cout << "1) What is a coin toss experiment?" << endl
          << endl;

     cout << "2) Probability of getting Head in a single coin toss" << endl;
     cout << "\t(Example: H)" << endl
          << endl;

     cout << "3) Probability of getting Tail in a single coin toss" << endl;
     cout << "\t(Example: T)" << endl
          << endl;

     cout << "4) Probability of getting exactly one Head in one toss" << endl;
     cout << "\t(Example: H)" << endl
          << endl;

     cout << "5) Probability of getting at least one Head in two tosses" << endl;
     cout << "\t(Example: HH, HT, TH)" << endl
          << endl;

     cout << "6) Probability of getting no Head (all Tails) in two tosses" << endl;
     cout << "\t(Example: TT)" << endl
          << endl;

     cout << "7) Probability of getting exactly one Head in two tosses" << endl;
     cout << "\t(Example: HT or TH)" << endl
          << endl;

     cout << "8) Probability of getting equal number of Heads and Tails in two tosses" << endl;
     cout << "\t(Example: HT or TH)" << endl
          << endl;

     cout << "9) Probability of getting all Heads in three tosses" << endl;
     cout << "\t(Example: HHH)" << endl
          << endl;

     cout << "10) Probability of not getting Tail in a single toss" << endl;
     cout << "\t(Example: H)" << endl
          << endl;

     cout << "11) Exit" << endl
          << endl;

     cout << "Enter your choice: ";
}
void coin_toss_menu()
{
     system("cls");
     cout << "==============================================================================" << endl;
     cout << "                              Coin Toss Experiments                           " << endl;
     cout << "==============================================================================" << endl;
}
void coin_toss_choice1()
{
     coin_toss_menu();
     cout << "========================== Coin Toss Experiment (Theory) =====================\n\n";
     cout << "A coin toss experiment is a basic random experiment in probability theory.\n";
     cout << "In this experiment, a fair coin is tossed once or more times.\n";
     cout << "The outcome of each toss cannot be predicted with certainty.\n\n";

     cout << "Possible Outcomes:\n";
     cout << "When a fair coin is tossed once, there are two possible outcomes:\n";
     cout << "Head (H) and Tail (T)\n\n";

     cout << "Sample Space:\n";
     cout << "The sample space is the set of all possible outcomes of an experiment.\n";
     cout << "For a single coin toss, the sample space is:\n";
     cout << "S = {H, T}\n\n";

     cout << "Each outcome has an equal chance of occurring.\n";
     cout << "So, the probability of each outcome is:\n";
     cout << "P(H) = 1/2\n";
     cout << "P(T) = 1/2\n\n";

     cout << "Event:\n";
     cout << "An event is one or more outcomes from the sample space.\n\n";

     cout << "Example Event:\n";
     cout << "Let event A be getting Head in a single toss.\n";
     cout << "A = {H}\n\n";

     cout << "Probability of Event A:\n";
     cout << "Number of favourable outcomes = 1\n";
     cout << "Total number of possible outcomes = 2\n";
     cout << "P(A) = 1/2\n\n";

     cout << "Multiple Coin Tosses:\n";
     cout << "If a coin is tossed two times, the sample space becomes:\n";
     cout << "S = {HH, HT, TH, TT}\n\n";

     cout << "Total number of outcomes = 4\n";
     cout << "Each outcome is equally likely.\n\n";

     cout << "Conclusion:\n";
     cout << "Coin toss experiments are used to explain basic probability concepts.\n";
     cout << "They help in understanding random behavior and uncertainty.\n";
     cout << "These experiments form the foundation of discrete probability theory.\n";
}
int count_heads(int num, int tosses)
{
     int check = 0;
     for (int idx = 0; idx < tosses; idx++)
     {
          if (num % 2 == 1)
          {
               check++;
          }
          num /= 2;
     }
     return check;
}
int calculate_probability(int tosses, int min_heads, int max_heads, string event_name)
{
     int percentage = 0;
     int total_outcomes = pow(2, tosses);
     int required = 0;

     for (int idx = 0; idx < total_outcomes; idx++)
     {
          int heads = count_heads(idx, tosses);
          if (heads >= min_heads && heads <= max_heads)
          {
               required++;
          }
     }
     int hcf = gcd(required, total_outcomes);
     float probability = (float)required / total_outcomes;
     cout << "Coin tossed " << tosses << " time(s)" << endl
          << endl;
     cout << "Total outcomes = " << total_outcomes << endl
          << endl;
     cout << "P(Event) = Number of favourable outcomes / Total outcomes " << endl
          << endl;
     cout << "P(" << event_name << ") = " << required << "/" << total_outcomes << endl
          << endl;
     cout << "Decimal = " << probability << endl
          << endl;
     percentage = probability * 100;
     return percentage;
}

void coin_toss_choice2()
{
     coin_toss_menu();
     int percentage = 0;
     ;
     cout << "Sample Spaces={ H , T }" << endl
          << endl;
     cout << "Favourable Outcomes={ H }" << endl
          << endl;
     percentage = calculate_probability(1, 1, 1, "Head");
     cout << "So, there is a " << percentage << " % chance of getting Head when a fair coin is tossed once." << endl
          << endl;
}
void coin_toss_choice3()
{
     coin_toss_menu();
     int percentage = 0;
     cout << "Sample Spaces={ H , T }" << endl
          << endl;
     cout << "Favourable Outcomes={ T }" << endl
          << endl;
     percentage = calculate_probability(1, 0, 0, "Tail");
     cout << "So, there is a " << percentage << " % chance of getting Tail when a fair coin is tossed once." << endl
          << endl;
}
void coin_toss_choice4()
{
     coin_toss_menu();
     int percentage = 0;
     cout << "Sample Spaces={ H , T }" << endl
          << endl;
     cout << "Favourable Outcomes={ H }" << endl
          << endl;
     percentage = calculate_probability(1, 1, 1, "Exactly One Head");
     cout << "So, there is a " << percentage << " % chance of getting exactly one Head when a fair coin is tossed once." << endl
          << endl;
}
void coin_toss_choice5()
{
     coin_toss_menu();
     int percentage = 0;
     cout << "Sample Spaces={ HH , HT , TH , TT}" << endl
          << endl;
     cout << "Favourable Outcomes={ HH , HT , TH }" << endl
          << endl;
     percentage = calculate_probability(2, 1, 2, "One Head");
     cout << "So, there is a " << percentage << " % chance of getting exactly one Head when a fair coin is tossed twice." << endl
          << endl;
}
void coin_toss_choice6()
{
     coin_toss_menu();
     int percentage = 0;
     cout << "Sample Spaces={ HH , HT , TH , TT}" << endl
          << endl;
     cout << "Favourable Outcomes={ TT }" << endl
          << endl;
     percentage = calculate_probability(2, 0, 0, "No Head");
     cout << "So, there is a " << percentage << " % chance of getting  no Head when a fair coin is tossed twice." << endl
          << endl;
}
void coin_toss_choice7()
{
     coin_toss_menu();
     int percentage = 0;
     cout << "Sample Spaces={ HH , HT , TH , TT}" << endl
          << endl;
     cout << "Favourable Outcomes={ HT , TH }" << endl
          << endl;
     percentage = calculate_probability(2, 1, 1, "Exactly One Head");
     cout << "So, there is a " << percentage << " % chance of getting  exactly one Head when a fair coin is tossed twice." << endl
          << endl;
}
void coin_toss_choice8()
{
     coin_toss_menu();
     int percentage = 0;
     cout << "Sample Spaces={ HH , HT , TH , TT}" << endl
          << endl;
     cout << "Favourable Outcomes={ HT , TH }" << endl
          << endl;
     percentage = calculate_probability(2, 1, 1, "Equal Head and Tail");
     cout << "So, there is a " << percentage << " % chance of getting  equal heads and tails  when a fair coin is tossed twice." << endl
          << endl;
}
void coin_toss_choice9()
{
     coin_toss_menu();
     int percentage = 0;
     cout << "Sample Spaces={ HHH, HHT, HTH, HTT, THH, THT, TTH, TTT }" << endl
          << endl;
     cout << "Favourable Outcomes={ HHH }" << endl
          << endl;
     percentage = calculate_probability(3, 1, 1, "All Head");
     cout << "So, there is a " << percentage << " % chance of getting  all heads when a fair coin is tossed three times." << endl
          << endl;
}
void coin_toss_choice10()
{
     coin_toss_menu();
     int percentage = 0;
     cout << "Sample Spaces={ H , T }" << endl
          << endl;
     cout << "Favourable Outcomes={ H }" << endl
          << endl;
     percentage = calculate_probability(1, 1, 1, "No Tail");
     cout << "So, there is a 50 % chance of not getting Tail when a fair coin is tossed once." << endl
          << endl;
}
void cardDrawingHeader()
{
     system("cls");
     cout << "=============================================\n";
     cout << "        CARD DRAWING SIMULATIONS             \n";
     cout << "=============================================\n\n";
}
void cardDrawingMenu()
{
     cardDrawingHeader();
     cout << "Following is the menu for Card Drawing Simulations:\n\n";
     cout << "1. What are Card Drawing Simulations?\n\n";
     cout << "2. Probability of Drawing a Black Card\n\n";
     cout << "3. Probability of Drawing a Red Card\n\n";
     cout << "4. Probability of Drawing a Face Card\n\n";
     cout << "5. Probability of Darwing an Ace\n\n";
     cout << "6. Probability of Drawing a Card of a Given Suit\n\n";
     cout << "7. Probability of Drawing a Numbered Card\n\n";
     cout << "8. Probability of Drawing a Red Faced Card\n\n";
     cout << "9. Probability of Drawing a Card Greater Than 10\n\n";
     cout << "10. Probability that Both Cards are Red\n\n";
     cout << "11. Probability that the Two Cards are of the Same Color\n\n";
     cout << "12. Exit\n\n";
     cout << "Enter your choice:";
}
void cardDrawingTheory()
{
     cardDrawingHeader();
     cout << "A standard deck of cards contains 52 cards.\n";
     cout << "There are 4 suits:\n";
     cout << "Hearts, Diamonds, Clubs, and Spades.\n\n";
     cout << "Each suit contains 13 cards:\n";
     cout << "Ace, 2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King.\n\n";
     cout << "* PROBABILITY IN CARD DRAWING\n\n";
     cout << "Probability = Favorable Outcomes / Total Outcomes\n\n";
     cout << "Examples:\n";
     cout << "Probability of drawing a heart   = 13 / 52 = 1 / 4\n";
     cout << "Probability of drawing an Ace    = 4  / 52 = 1 / 13\n\n";
     cout << "This theory is used as the base for\n";
     cout << "card drawing probability simulations.\n\n";
}
void cardDrawingChoice2()
{
     int totalCards = 52;
     int blackCards = 26;
     cardDrawingHeader();
     cout << "Sample Spaces = {1,2,3,....,52}\n";
     cout << "Where 1-13 is the Hearts Suit = {A,2,3,4,5,6,7,8,9,10,J,Q,K}\n";
     cout << "And 14-26 is the Diamonds Suit = {A,2,3,4,5,6,7,8,9,10,J,Q,K}\n";
     cout << "And 27-39 is the Clubs Suit = {A,2,3,4,5,6,7,8,9,10,J,Q,K}\n";
     cout << "And 40-52 is the Spades Suit = {A,2,3,4,5,6,7,8,9,10,J,Q,K}\n";
     cout << "Favourable Outcomes = {Hearts,Diamonds}\n";
     cout << "Formula for Probability is:\n";
     cout << "- Formula:    P(E)=   Number of Favorable Outcomes\n";
     cout << "                    ---------------------------------\n";
     cout << "                    Total Number of Possible Outcomes\n\n";
     double prob = (double)blackCards / totalCards;
     cout << "P(B) : " << blackCards << "/" << totalCards << " or " << decimalToFractionConverter(prob) << "\n";
     cout << "It means there is a " << prob * 100 << "% chance that you pick a black card out of all cards\n";
}
void cardDrawingChoice3()
{
     cardDrawingHeader();
     int totalCards = 52;
     int redCards = 26;
     cout << "Sample Spaces = {1,2,3,....,52}\n";
     cout << "Where 1-13 is the Hearts Suit = {A,2,3,4,5,6,7,8,9,10,J,Q,K}\n";
     cout << "And 14-26 is the Diamonds Suit = {A,2,3,4,5,6,7,8,9,10,J,Q,K}\n";
     cout << "And 27-39 is the Clubs Suit = {A,2,3,4,5,6,7,8,9,10,J,Q,K}\n";
     cout << "And 40-52 is the Spades Suit = {A,2,3,4,5,6,7,8,9,10,J,Q,K}\n";
     cout << "Favourable Outcomes = {Hearts,Diamonds}\n";
     cout << "Formula for Probability is:\n";
     cout << "- Formula:    P(E)=   Number of Favorable Outcomes\n";
     cout << "                    ---------------------------------\n";
     cout << "                    Total Number of Possible Outcomes\n\n";
     double prob = (double)redCards / totalCards;
     cout << "P(R) : " << redCards << "/" << totalCards << " or " << decimalToFractionConverter(prob) << "\n";
     cout << "It means there is a " << prob * 100 << "% chance that you pick a red card out of all cards\n";
}
void cardDrawingChoice4()
{
     cardDrawingHeader();
     int totalCards = 52;
     int faceCards = 12;
     cout << "Sample Spaces = {All 52 cards}\n";
     cout << "Face Cards = {J, Q, K} of all four suits\n";
     cout << "Total Face Cards = 12\n";
     cout << "Formula for Probability is:\n";
     cout << "- Formula:    P(E)=   Number of Favorable Outcomes\n";
     cout << "                    ---------------------------------\n";
     cout << "                    Total Number of Possible Outcomes\n\n";
     double prob = (double)faceCards / totalCards;
     int hcf = gcd(faceCards, totalCards);
     cout << "P(F) : " << faceCards << "/" << totalCards << " or " << faceCards / hcf << "/" << totalCards / hcf << "\n";
     cout << "It means there is a " << prob * 100 << "% chance of drawing a face card from the deck\n";
}
void cardDrawingChoice5()
{
     cardDrawingHeader();
     int totalCards = 52;
     int aceCards = 4;
     cout << "Sample Spaces = {All 52 cards}\n";
     cout << "Aces = {Ace of Hearts, Ace of Diamonds, Ace of Clubs, Ace of Spades}\n";
     cout << "Formula for Probability is:\n";
     cout << "- Formula:    P(E)=   Number of Favorable Outcomes\n";
     cout << "                    ---------------------------------\n";
     cout << "                    Total Number of Possible Outcomes\n\n";
     double prob = (double)aceCards / totalCards;
     int hcf = gcd(aceCards, totalCards);
     cout << "P(A) : " << aceCards << "/" << totalCards << " or " << aceCards / hcf << "/" << totalCards / hcf << "\n";
     cout << "It means there is a " << prob * 100 << "%  chance of drawing an Ace from the deck\n";
}
void cardDrawingChoice6()
{
     cardDrawingHeader();
     int totalCards = 52;
     int suitCards = 13;
     cout << "Sample Spaces = {All 52 cards}\n";
     cout << "Each suit contains exactly 13 cards\n";
     cout << "Formula for Probability is:\n";
     cout << "- Formula:    P(E)=   Number of Favorable Outcomes\n";
     cout << "                    ---------------------------------\n";
     cout << "                    Total Number of Possible Outcomes\n\n";
     double prob = (double)suitCards / totalCards;
     int hcf = gcd(suitCards, totalCards);
     cout << "P(S) : " << suitCards << "/" << totalCards << " or " << suitCards / hcf << "/" << totalCards / hcf << "\n";
     cout << "It means there is a " << prob * 100 << "%  chance to draw a specific suit\n";
}
void cardDrawingChoice7()
{
     cardDrawingHeader();
     int totalCards = 52;
     int numberedCards = 36;
     cout << "Sample Spaces = {All 52 cards}\n";
     cout << "Numbered cards include cards from 2 to 10\n";
     cout << "There are 9 numbered cards per suit\n";
     cout << "Formula for Probability is:\n";
     cout << "- Formula:    P(E)=   Number of Favorable Outcomes\n";
     cout << "                    ---------------------------------\n";
     cout << "                    Total Number of Possible Outcomes\n\n";
     double prob = (double)numberedCards / totalCards;
     int hcf = gcd(numberedCards, totalCards);
     cout << "P(N) : " << numberedCards << "/" << totalCards << " or " << numberedCards / hcf << "/" << totalCards / hcf << "\n";
     cout << "It means there is a " << prob * 100 << "%  chance of drawing a numbered card\n";
}
void cardDrawingChoice8()
{
     cardDrawingHeader();
     int totalCards = 52;
     int redFaceCards = 6;
     cout << "Sample Spaces = {All 52 cards}\n";
     cout << "Red Face Cards = {J, Q, K of Hearts and Diamonds}\n";
     cout << "Formula for Probability is:\n";
     cout << "- Formula:    P(E)=   Number of Favorable Outcomes\n";
     cout << "                    ---------------------------------\n";
     cout << "                    Total Number of Possible Outcomes\n\n";
     double prob = (double)redFaceCards / totalCards;
     int hcf = gcd(redFaceCards, totalCards);
     cout << "P(RF) : " << redFaceCards << "/" << totalCards << " or " << redFaceCards / hcf << "/" << totalCards / hcf << "\n";
     cout << "It means there is a " << prob * 100 << "% chance of drawing a red face card\n";
}
void cardDrawingChoice9()
{
     cardDrawingHeader();
     int totalCards = 52;
     int greaterThanTen = 16;
     cout << "Sample Spaces = {All 52 cards}\n";
     cout << "Cards greater than 10 include J, Q, K and Ace\n";
     cout << "Formula for Probability is:\n";
     cout << "- Formula:    P(E)=   Number of Favorable Outcomes\n";
     cout << "                    ---------------------------------\n";
     cout << "                    Total Number of Possible Outcomes\n\n";
     double prob = (double)greaterThanTen / totalCards;
     int hcf = gcd(greaterThanTen, totalCards);
     cout << "P(G) : " << greaterThanTen << "/" << totalCards << " or " << greaterThanTen / hcf << "/" << totalCards / hcf << "\n";
     cout << "It means there is a " << prob * 100 << "% chance of drawing a card greater than 10\n";
}
void cardDrawingChoice10()
{
     cardDrawingHeader();
     int redCards = 26;
     int totalCards = 52;
     cout << "Two cards are drawn without replacement\n";
     cout << "Formula used is multiplication rule\n\n";
     double prob = (double)redCards / totalCards * (double)(redCards - 1) / (totalCards - 1);
     cout << "P(Both Red) = " << prob << "\n";
     cout << "It means there is a " << prob * 100 << "% chance of drawing two red cards\n";
}
void cardDrawingChoice11()
{
     cardDrawingHeader();
     int totalCards = 52;
     int redCards = 26;
     int blackCards = 26;
     cout << "Two cards are drawn without replacement\n";
     cout << "Same color means both red or both black\n\n";
     double prob = (double)redCards / totalCards * (double)(redCards - 1) / (totalCards - 1) + (double)blackCards / totalCards * (double)(blackCards - 1) / (totalCards - 1);
     cout << "P(Same Color) = " << prob << " or 1/2 \n";
     cout << "It means there is a " << prob * 100 << "% chance of both cards belonging to the same color group\n";
}
void birthdayParadoxHeader()
{
     system("cls");
     cout << "=============================================\n";
     cout << "        BIRTHDAY PARADOX SIMULATIONS          \n";
     cout << "=============================================\n\n";
}
void birthdayParadoxMenu()
{
     birthdayParadoxHeader();
     cout << "Following is the menu for Birthday Paradox Experiments:\n\n";
     cout << "1. What is Birthday Paradox?\n\n";
     cout << "2. Probability that Two People Share the Same Birthday\n\n";
     cout << "3. Probability that All Birthdays are Different\n\n";
     cout << "4. Probability that At Least Two People Share a Birthday\n\n";
     cout << "5. Birthday Paradox for 23 People\n\n";
     cout << "6. Birthday Paradox for n People\n\n";
     cout << "7. Exit\n\n";
     cout << "Enter your choice:";
}
void birthdayParadoxTheory()
{
     birthdayParadoxHeader();
     cout << "The Birthday Paradox States:\n";
     cout << "In a group of people,the probability that at least two people share the same birthday is surprisingly high\n";
     cout << "It means people expect the probability to be very low for people to have same birthday but Birthday Paradox demonstrates how this assumption is false.\n\n";
     cout << "Assumptions:\n";
     cout << "- There are 365 days in a year\n";
     cout << "- Birthdays are uniformly distributed\n";
     cout << "- No leap year is considered\n\n";
     cout << "Probability Formula Used:\n";
     cout << "Probability = Favorable Outcomes / Total Outcomes\n\n";
     cout << "This theory forms the basis of birthday paradox experiments.\n\n";
}
void birthdayParadoxChoice2()
{
     birthdayParadoxHeader();
     int totalDays = 365;
     int sameDay = 1;
     cout << "Two people are selected randomly\n";
     cout << "Sample Space = {365 possible birthdays}\n";
     cout << "Formula for Probability is:\n";
     cout << "- Formula:    P(E)=   Number of Favorable Outcomes\n";
     cout << "                    ---------------------------------\n";
     cout << "                    Total Number of Possible Outcomes\n\n";
     double prob = (double)sameDay / totalDays;
     cout << "P(Same Birthday) = " << sameDay << "/" << totalDays << " or " << prob << "\n";
     cout << "It means there is a " << prob * 100 << "% chance that two people share the same birthday\n";
}
void birthdayParadoxChoice3()
{
     birthdayParadoxHeader();
     int totalDays = 365;
     int differentDay = totalDays - 1;
     cout << "Two people are selected randomly\n";
     cout << "We calculate the probability that birthdays are different\n\n";
     double prob = (double)(totalDays - 1) / totalDays;
     cout << "P(All Different) = " << differentDay << "/" << totalDays << " or " << prob << "\n";
     cout << "It means there is a " << prob * 100 << "% chance that two people do not share the same birthday\n";
}
void birthdayParadoxChoice4()
{
     birthdayParadoxHeader();
     int totalDays = 365;
     int sameDay = 1;
     cout << "At least two people share the same birthday\n";
     cout << "This is the complement of all birthdays being different\n\n";
     double prob = (double)sameDay / totalDays;
     cout << "P(At Least One Match) = " << sameDay << "/" << totalDays << " or " << prob << "\n";
     cout << "It means there is a " << prob * 100 << "% chance that at least two people share the same birthday\n";
}
void birthdayParadoxChoice5()
{
     birthdayParadoxHeader();
     int n = 23;
     cout << "Number of people = " << n << "\n";
     cout << "Total days = 365\n\n";
     cout << "Probability that all birthdays are different is:\n\n";

     double prob = 1.0;
     for (int i = 0; i < n; i++)
     {
          prob = prob * (365 - i) / 365;
     }
     cout << "P(All Different) = " << prob << "\n";
     cout << "This means there is a " << prob * 100 << "% chance that no two people out of " << n << " people share the same birthday\n";
     double finalProb = 1 - prob;
     cout << "Probability that at least two of the " << n << " people share the same birthday is:\n";
     cout << "P(At Least One Match) = " << finalProb << "\n";
     cout << "This means there is a " << finalProb * 100 << "% chance that at least two out of " << n << " people share the same birthday\n";
     cout << "This shows why the birthday paradox is surprising\n";
}
void birthdayParadoxChoice6()
{
     birthdayParadoxHeader();
     int n;
     cout << "Enter number of people: ";
     cin >> n;

     double prob = 1.0;
     for (int i = 0; i < n; i++)
     {
          prob = prob * (365 - i) / 365;
     }

     double finalProb = 1 - prob;
     cout << "Probability that at least two of the " << n << " people share the same birthday is:\n";
     cout << "P(At Least Shared Birthday) = " << finalProb << "\n";
     cout << "This means there is a " << finalProb * 100 << "% chance that at least two out of " << n << " people share the same birthday\n";
     cout << "Probability increases rapidly as n increases\n";
}
int gcd(int a, int b)
{
     int r = 0;
     while (b != 0)
     {
          r = a % b;
          a = b;
          b = r;
     }
     return a;
}
string decimalToFractionConverter(double decimal)
{
     string fraction;
     const int precision = 100000; // controls accuracy
     int numerator, denominator, hcf;
     numerator = round(decimal * precision);
     denominator = precision;
     hcf = gcd(numerator, denominator);
     numerator = numerator / hcf;
     denominator = denominator / hcf;
     fraction = to_string(numerator) + "/" + to_string(denominator);
     return fraction;
}