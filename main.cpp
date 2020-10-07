
// 명령 N (1~10000) 입력 받기.


#include <iostream>
#include <stack>
#include <string>
//STL 라이브러리 stack 사용.

#define MAX_Command_SIZE 10000
// MAX size 지정.

using namespace std;


int main()
{
    int command;


    //cout << "Input command number\n";
    cin >> command;

    stack<int> stack_Int;
    //stack 클래스 선언.

    string do_Command;

   // cout << "Input do_command\n";

    if(command <= MAX_Command_SIZE && command > 0)
    // 1<= command's num <= 10000
    {
        for(int index=0; index < command; index++){
            cin >> do_Command;

            if(do_Command == "push")
            {
                int num;
                cin >> num;
                stack_Int.push(num);

            }

            else if(do_Command == "pop"){

                if(!stack_Int.empty()){
                    cout << stack_Int.top() << endl;
                    stack_Int.pop();
                } else {
                    cout << "-1" << endl;
                }
            }
            else if(do_Command == "size"){
                cout << stack_Int.size() << endl;
            }

            else if(do_Command =="empty"){
                if(stack_Int.empty()){
                    cout << "1" << endl;
                }
                else{
                    cout <<"0" << endl;
                }

            }
            else if(do_Command=="top"){
                if(!stack_Int.empty()){
                    cout << stack_Int.top() << endl;
                }
                else
                    cout << "-1" << endl;
            }
        }
    }
    return 0;
}
