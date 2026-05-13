/*
============================================================
  ASSIGNMENT - Linear Search & Bubble Sort
============================================================
*/

#include <iostream>
#include <string>
using namespace std;


// ============================================================
// TASK 1: LINEAR SEARCH - Family Members Names & Ages
// ============================================================

void task1_linearSearch() {

    cout << "\n========================================" << endl;
    cout << "   TASK 1: Linear Search (Family)" << endl;
    cout << "========================================" << endl;

    // Step 1: Store family member names
    string names[5];
    int ages[5];
    int totalMembers = 5;

    cout << "\nEnter details for " << totalMembers << " family members:" << endl;

    // Step 2: Ask the user to enter names and ages
    for (int i = 0; i < totalMembers; i++) {
        cout << "\nMember " << i + 1 << " Name: ";
        cin >> names[i];
        cout << "Member " << i + 1 << " Age : ";
        cin >> ages[i];
    }

    // Step 3: Ask the user for the name to search
    string keyName;
    cout << "\nEnter the name to search: ";
    cin >> keyName;

    // Step 4: Search through the array one by one (Linear Search)
    bool found = false;

    for (int i = 0; i < totalMembers; i++) {
        if (names[i] == keyName) {   // If name matches
            cout << "\n>> \"" << keyName << "\" was FOUND and is aged " << ages[i] << "." << endl;
            found = true;
            break;   // Stop searching once found
        }
    }

    // Step 5: If name was never found, say "Not found"
    if (found == false) {
        cout << "\n>> \"" << keyName << "\" was NOT FOUND." << endl;
    }
}


// ============================================================
// TASK 2: BUBBLE SORT - Sort Names in Ascending Order
// ============================================================

void task2_bubbleSortNames() {

    cout << "\n========================================" << endl;
    cout << "   TASK 2: Bubble Sort (Names)" << endl;
    cout << "========================================" << endl;

    // The given names
    string names[7] = {"Zuck", "Shayd", "Emely", "Amjed", "Esther", "Manar", "Anne"};
    int size = 7;

    // Show original list
    cout << "\nOriginal list:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "  " << names[i] << endl;
    }

    // Bubble Sort: compare pairs and swap if out of order
    // Repeat this process (size - 1) times to fully sort
    for (int pass = 0; pass < size - 1; pass++) {
        for (int i = 0; i < size - 1 - pass; i++) {

            // If the current name comes AFTER the next name alphabetically, swap them
            if (names[i] > names[i + 1]) {
                string temp  = names[i];      // Save current name temporarily
                names[i]     = names[i + 1];  // Move next name to current position
                names[i + 1] = temp;           // Put saved name in next position
            }
        }
    }

    // Show sorted list
    cout << "\nSorted list (Ascending / A to Z):" << endl;
    for (int i = 0; i < size; i++) {
        cout << "  " << names[i] << endl;
    }
}


// ============================================================
// TASK 3: BUBBLE SORT - Sort Numbers in Ascending Order
// ============================================================

void task3_bubbleSortNumbers() {

    cout << "\n========================================" << endl;
    cout << "   TASK 3: Bubble Sort (Numbers)" << endl;
    cout << "========================================" << endl;

    // The given numbers
    int numbers[8] = {109, 99, 23, 45, 23, 2, 5, 1};
    int size = 8;

    // Show original list
    cout << "\nOriginal list:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "  " << numbers[i] << endl;
    }

    // Bubble Sort: compare pairs and swap if out of order
    for (int pass = 0; pass < size - 1; pass++) {
        for (int i = 0; i < size - 1 - pass; i++) {

            // If the current number is BIGGER than the next, swap them
            if (numbers[i] > numbers[i + 1]) {
                int temp       = numbers[i];      // Save current number temporarily
                numbers[i]     = numbers[i + 1];  // Move smaller number forward
                numbers[i + 1] = temp;             // Put saved number behind
            }
        }
    }

    // Show sorted list
    cout << "\nSorted list (Ascending / Smallest to Largest):" << endl;
    for (int i = 0; i < size; i++) {
        cout << "  " << numbers[i] << endl;
    }
}


// ============================================================
// MAIN - Run all three tasks
// ============================================================

int main() {

    cout << "============================================" << endl;
    cout << "   WELCOME TO THE ASSIGNMENT PROGRAM" << endl;
    cout << "============================================" << endl;

    task1_linearSearch();    // Task 1
    task2_bubbleSortNames(); // Task 2
    task3_bubbleSortNumbers(); // Task 3

    cout << "\n============================================" << endl;
    cout << "           ALL TASKS COMPLETE!" << endl;
    cout << "============================================" << endl;

    return 0;
}