


#include <iostream>
#include <string>
using namespace std;


void task1_linearSearch() {

    cout << "\n========================================" << endl;
    cout << "   TASK 1: Linear Search (Family)" << endl;
    cout << "========================================" << endl;

   
    string names[5];
    int ages[5];
    int totalMembers = 5;

    cout << "\nEnter details for " << totalMembers << " family members:" << endl;

    
    for (int i = 0; i < totalMembers; i++) {
        cout << "\nMember " << i + 1 << " Name: ";
        cin >> names[i];
        cout << "Member " << i + 1 << " Age : ";
        cin >> ages[i];
    }

    
    string keyName;
    cout << "\nEnter the name to search: ";
    cin >> keyName;

    
    bool found = false;

    for (int i = 0; i < totalMembers; i++) {
        if (names[i] == keyName) {   
            cout << "\n>> \"" << keyName << "\" was FOUND and is aged " << ages[i] << "." << endl;
            found = true;
            break;   
        }
    }

    
    if (found == false) {
        cout << "\n>> \"" << keyName << "\" was NOT FOUND." << endl;
    }
}


void task2_bubbleSortNames() {

    cout << "\n========================================" << endl;
    cout << "   TASK 2: Bubble Sort (Names)" << endl;
    cout << "========================================" << endl;

  
    string names[7] = {"Zuck", "Shayd", "Emely", "Amjed", "Esther", "Manar", "Anne"};
    int size = 7;

   
    cout << "\nOriginal list:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "  " << names[i] << endl;
    }

   
    for (int pass = 0; pass < size - 1; pass++) {
        for (int i = 0; i < size - 1 - pass; i++) {

          
            if (names[i] > names[i + 1]) {
                string temp  = names[i];      
                names[i]     = names[i + 1];  
                names[i + 1] = temp;          
            }
        }
    }

  
    cout << "\nSorted list (Ascending / A to Z):" << endl;
    for (int i = 0; i < size; i++) {
        cout << "  " << names[i] << endl;
    }
}




void task3_bubbleSortNumbers() {

    cout << "\n========================================" << endl;
    cout << "   TASK 3: Bubble Sort (Numbers)" << endl;
    cout << "========================================" << endl;

    //
    int numbers[8] = {109, 99, 23, 45, 23, 2, 5, 1};
    int size = 8;

    cout << "\nOriginal list:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "  " << numbers[i] << endl;
    }

    for (int pass = 0; pass < size - 1; pass++) {
        for (int i = 0; i < size - 1 - pass; i++) {

           
            if (numbers[i] > numbers[i + 1]) {
                int temp       = numbers[i];      
                numbers[i]     = numbers[i + 1];  
                numbers[i + 1] = temp;            
            }
        }
    }

    
    cout << "\nSorted list (Ascending / Smallest to Largest):" << endl;
    for (int i = 0; i < size; i++) {
        cout << "  " << numbers[i] << endl;
    }
}




    cout << "============================================" << endl;
    cout << "   WELCOME TO THE ASSIGNMENT PROGRAM" << endl;
    cout << "============================================" << endl;

    task1_linearSearch();    
    task2_bubbleSortNames(); 
    task3_bubbleSortNumbers(); 

    cout << "\n============================================" << endl;
    cout << "           ALL TASKS COMPLETE!" << endl;
    cout << "============================================" << endl;

    return 0;
}
