#pragma once
#include "menu.h"

int chose_function(){
    int choice;
    cout << "-----------------------------" << std::endl;
    cout << "Menu:" << std::endl;
    cout << "1. Push an element" << std::endl;
    cout << "2. Pop an element" << std::endl;
    cout << "3. Check if the stack is empty" << std::endl;
    cout << "4. Clear the stack" << std::endl;
    cout << "5. Set to the top" << std::endl;
    cout << "6. Print all elements in the stack" << std::endl;
    cout << "7. Quit" << std::endl;
    cout << "-----------------------------" << std::endl;

    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}

int choose_type(){
    int choice;
    cout << "-----------------------------" << std::endl;
    cout << "Choose the data type:" << std::endl;
    cout << "1. int" << std::endl;
    cout << "2. float" << std::endl;
    cout << "3. double" << std::endl;
    cout << "4. short" << std::endl;
    cout << "5. string" << std::endl;
    cout << "6. char" << std::endl;
    cout << "-----------------------------" << std::endl;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}

template<typename T>
void PushValueToStack(Stack<T>& stack) {
    std::cout << "Enter the value to push: ";
    T value;
    std::cin >> value;
    stack.Push(value);
    std::cout << "Element " << value << " pushed to the stack." << std::endl;
}

void PushValueToStack(Stack<std::string>& stack) {
    std::cout << "Enter the value to push: ";
    string value;
    cin.ignore();
    std::getline(cin, value);
    stack.Push(value);
    std::cout << "Element " << value << " pushed to the stack." << std::endl;
}

void PushValueToStack(Stack<char>& stack) {
    std::cout << "Enter the character to push: ";
    char value;
    std::cin >> value;
    if (std::cin.fail() || std::cin.peek() != '\n') {
        std::cout << "Invalid input. Please enter a single character." << std::endl;
        std::cin.clear();
        std::cin.ignore();
        return;
    }

    stack.Push(value);
    std::cout << "Character \'" << value << "\' pushed to the stack." << std::endl;
}

template<typename T>
void PopFromStack(Stack<T>& stack) {
    if (!stack.IsEmpty()) {
        T topElement = stack.Top();
        stack.Pop();
        std::cout << "Element " << topElement << " popped from the stack." << std::endl;
    } else {
        std::cout << "Stack is empty. Cannot perform pop operation." << std::endl;
    }
}

template<typename T>
void CheckStackEmpty(const Stack<T>& stack) {
    std::cout << "Is stack empty? " << (stack.IsEmpty() ? "Yes" : "No") << std::endl;
}

template<typename T>
void ClearStack(Stack<T>& stack) {
    stack.Clear();
    std::cout << "Stack cleared." << std::endl;
}

template<typename T>
void SetTopValue(Stack<T>& stack) {
    T value;
    std::cout << "Enter a value: ";
    std::cin >> value;
    stack.SetTop(value);
    std::cout << "Element " << value << " pushed to the stack." << std::endl;
}

template<typename T>
void SetTopValueString(Stack<T>& stack) {
    T value;
    std::cout << "Enter a value: ";
    cin.ignore();
    std::getline(cin, value);
    stack.SetTop(value);
    std::cout << "Element " << value << " pushed to the stack." << std::endl;
}

template<typename T>
void PrintStack(const Stack<T>& stack) {
    std::cout << "Elements in the stack: ";
    for (typename Stack<T>::Iterator it = stack.begin(); it != stack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void QuitProgram(bool& quit) {
    quit = true;
    std::cout << "Quitting the program." << std::endl;
}

void PrintInvalidChoiceMessage() {
    std::cout << "Invalid choice. Please try again." << std::endl;
}


void program(int choice2, bool quit){
    switch (choice2) {
        case 1:{
            int choice1;
            Stack<int> stack;
            while (!quit) {
                choice1 = chose_function();

                switch (choice1) {
                    case 1: {
                        PushValueToStack(stack);
                        break;
                    }
                    case 2: {
                        PopFromStack(stack);
                        break;
                    }
                    case 3: {
                        CheckStackEmpty(stack);
                        break;
                    }
                    case 4: {
                        ClearStack(stack);
                        break;
                    }
                    case 5: {
                        SetTopValue(stack);
                        break;
                    }
                    case 6: {
                        PrintStack(stack);
                        break;
                    }
                    case 7: {
                        QuitProgram(quit);
                        break;
                    }
                    default: {
                        PrintInvalidChoiceMessage();
                        break;
                    }
                }
            }
            break;

        }
        case 2:{
            int choice1;
            Stack<float> stack;
            while (!quit) {
                choice1 = chose_function();

                switch (choice1) {
                    case 1: {
                        PushValueToStack(stack);
                        break;
                    }
                    case 2: {
                        PopFromStack(stack);
                        break;
                    }
                    case 3: {
                        CheckStackEmpty(stack);
                        break;
                    }
                    case 4: {
                        ClearStack(stack);
                        break;
                    }
                    case 5: {
                        SetTopValue(stack);
                        break;
                    }
                    case 6: {
                        PrintStack(stack);
                        break;
                    }
                    case 7: {
                        QuitProgram(quit);
                        break;
                    }
                    default: {
                        PrintInvalidChoiceMessage();
                        break;
                    }
                }
            }
            break;
        }
        case 3:{
            int choice1;
            Stack<double> stack;
            while (!quit) {
                choice1 = chose_function();

                switch (choice1) {
                    case 1: {
                        PushValueToStack(stack);
                        break;
                    }
                    case 2: {
                        PopFromStack(stack);
                        break;
                    }
                    case 3: {
                        CheckStackEmpty(stack);
                        break;
                    }
                    case 4: {
                        ClearStack(stack);
                        break;
                    }
                    case 5: {
                        SetTopValue(stack);
                        break;
                    }
                    case 6: {
                        PrintStack(stack);
                        break;
                    }
                    case 7: {
                        QuitProgram(quit);
                        break;
                    }
                    default: {
                        PrintInvalidChoiceMessage();
                        break;
                    }
                }
            }
            break;
        }
        case 4:{
            int choice1;
            Stack<short> stack;
            while (!quit) {
                choice1 = chose_function();

                switch (choice1) {
                    case 1: {
                        PushValueToStack(stack);
                        break;
                    }
                    case 2: {
                        PopFromStack(stack);
                        break;
                    }
                    case 3: {
                        CheckStackEmpty(stack);
                        break;
                    }
                    case 4: {
                        ClearStack(stack);
                        break;
                    }
                    case 5: {
                        SetTopValue(stack);
                        break;
                    }
                    case 6: {
                        PrintStack(stack);
                        break;
                    }
                    case 7: {
                        QuitProgram(quit);
                        break;
                    }
                    default: {
                        PrintInvalidChoiceMessage();
                        break;
                    }
                }
            }
            break;
        }
        case 5:{
            int choice1;
            Stack<string> stack;
            while (!quit) {
                choice1 = chose_function();

                switch (choice1) {
                    case 1: {
                        PushValueToStack(stack);
                        break;
                    }
                    case 2: {
                        PopFromStack(stack);
                        break;
                    }
                    case 3: {
                        CheckStackEmpty(stack);
                        break;
                    }
                    case 4: {
                        ClearStack(stack);
                        break;
                    }
                    case 6: {
                        PrintStack(stack);
                        break;
                    }
                    case 5: {
                        SetTopValueString(stack);
                        break;
                    }
                    case 7: {
                        QuitProgram(quit);
                        break;
                    }
                    default: {
                        std::cout << "Invalid choice. Please try again." << std::endl;
                        break;
                    }
                }
            }
            break;
        }
        case 6:{
            int choice1;
            Stack<char> stack;
            while (!quit) {
                choice1 = chose_function();

                switch (choice1) {
                    case 1: {
                        PushValueToStack(stack);
                        break;
                    }
                    case 2: {
                        PopFromStack(stack);
                        break;
                    }
                    case 3: {
                        CheckStackEmpty(stack);
                        break;
                    }
                    case 4: {
                        ClearStack(stack);
                        break;
                    }
                    case 5: {
                        PrintStack(stack);
                        break;
                    }
                    case 6: {
                        SetTopValue(stack);
                    }
                    case 7: {
                        QuitProgram(quit);
                        break;
                    }
                    default: {
                        PrintInvalidChoiceMessage();
                        break;
                    }
                }
            }
            break;
        }
        default:{
            PrintInvalidChoiceMessage();
            break;
        }
    }
}
