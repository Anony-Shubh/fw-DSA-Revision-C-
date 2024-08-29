//Incorrect code, will come back to it later and will resolve it, reached saturation point for now.

#include <iostream>
#include <vector>
using namespace std;

template <class t>
class Stack {
public:
    vector<t> vec;

    void push(t val) {
        vec.push_back(val);
    }

    void pop() {
        if (isEmpty()) {
            cout << "Empty Stack\n";
            return;
        } else {
            vec.pop_back();
        }
    }

    t top() {
        if (isEmpty()) {
            cout << "Empty Stack\n";
            return t();
        } else {
            int lastIdx = vec.size() - 1;
            return vec[lastIdx];
        }
    }

    bool isEmpty() {
        return vec.size() == 0;
    }

    void pushAtBottom(t val) {
        if (isEmpty()) {
            push(val);
        } else {
            t topElement = top();
            pop();
            pushAtBottom(val);
            push(topElement);
        }
    }
};

int main() {
    Stack<string> st;
    int n;
    cout << "Enter size of Stack: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string val;
        cin >> val;
        st.push(val);
    }

    int m;
    cout << "Enter number of elements to push at the bottom: ";
    cin >> m;

    for (int i = 0; i < m; i++) {
        string PABVal;
        cin >> PABVal;
        st.pushAtBottom(PABVal);
    }
    while (!st.isEmpty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
