#include <iostream>
#include<stack>

using namespace std;

bool is_legal=true;
int main() {
    int n;
    cin>>n;
    while (n--) {//////////////////////////////////
        stack<int> s;
        string str ;
        cin >> str;
        int i = 1;
        s.push(str[0]);
        while (!s.empty()) {
            if (str[i] == '(' || str[i] == '[') {
                s.push(str[i]);
            } else if (str[i] == ')') {
                if (s.top() == '(') {
                    s.pop();
                } else {
                    is_legal = false;
                    break;
                }
            } else if (str[i] == ']') {
                if (s.top() == '[') {
                    s.pop();
                } else {
                    is_legal = false;
                    break;
                }
            }
            i++;
        }
        if (!is_legal){
            cout<<"illegal"<<endl;
        } else{
            cout<<"legal"<<endl;
        }
    }
    return 0;
}
