
#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<int>numbersStack;

    numbersStack.push(1);
    numbersStack.push(2);
    numbersStack.push(3);
    // empty, size, push, pop, top

    if(numbersStack.empty())
        cout << "Stack is empty." << endl;
    else 
        cout << "Stack is not empty." << endl;    
 
    cout << "Stack size is " << numbersStack.size() << endl;



    return 0;

}

// MARK: - Key Notes:

    // Stacks are LIFO
        // Last in First out

    // FILO 

// MARK: - Five Key functions with Stack

    // #1: 'Empty'


    // #2: 'Size'


    // #3: 'Top'


    // #4: 'Push'


    // #5: 'Pop'
