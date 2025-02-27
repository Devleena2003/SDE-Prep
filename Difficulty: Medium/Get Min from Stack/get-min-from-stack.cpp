//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
   int minElement;
    stack<int>st;
    Solution() {
        // code here
          minElement = INT_MAX;
    }

    // Add an element to the top of Stack
    void push(int x) {
        // code here
          if (st.empty()) {
            minElement = x;
            st.push(x);
        } else {
            if (x < minElement) {
                st.push(2 * x - minElement); // Encode the previous minimum
                minElement = x;
            } else {
                st.push(x);
            }
        }
    }

    // Remove the top element from the Stack
    void pop() {
        // code here
        if (st.empty()) return;
        
        int topVal = st.top();
        st.pop();
        
        if (topVal < minElement) { // Means it was an encoded value
            minElement = 2 * minElement - topVal; // Restore previous min
        }
    }

    // Returns top element of the Stack
    int peek() {
        // code here
           if (st.empty()) return -1;
        
        int topVal = st.top();
        return (topVal < minElement) ? minElement : topVal;
    }

    // Finds minimum element of Stack
    int getMin() {
        return st.empty() ? -1 : minElement;
    }
    

   
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;

        Solution ob;

        while (q--) {
            int qt;
            cin >> qt;

            if (qt == 1) {
                // push
                int att;
                cin >> att;
                ob.push(att);
            } else if (qt == 2) {
                // pop
                ob.pop();
            } else if (qt == 3) {
                // peek
                cout << ob.peek() << " ";
            } else if (qt == 4) {
                // getMin
                cout << ob.getMin() << " ";
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends