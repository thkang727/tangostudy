
/*
push X: 정수 X를 큐에 넣는 연산이다.
pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 큐에 들어있는 정수의 개수를 출력한다.
empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.

*/

#include <iostream>
#include <queue> //STL 라이브러리 queue 사용.

#define MAX_Command_SIZE 10000

using namespace std;


int main()
{
    int command;


    cin >> command;

    queue<int> stack_Int; // queue 선언.



    string do_Command; // input queue command


    if(command <= MAX_Command_SIZE && command > 0)
    {
        for(int index=0; index < command; index++){
            cin >> do_Command;

            if(do_Command == "push")
            {
                int num;
                cin >> num;
                stack_Int.push(num);    //큐 젤 뒤에 출력.
            }

            else if(do_Command == "pop"){
                if(!stack_Int.empty()){ //큐가 안비었다면,
                    cout << stack_Int.front() << endl;  // 가장 앞의 정수 출력.
                    stack_Int.pop();        // 가장 앞의 정수 삭제.
                } else {
                    cout << "-1" << endl;
                }
            }
            else if(do_Command == "size"){
                cout << stack_Int.size() << endl;   // 큐의 개수 출력.
            }

            else if(do_Command =="empty"){
                if(stack_Int.empty()){
                    cout << "1" << endl;    //큐가 비면 1
                }
                else{
                    cout <<"0" << endl;
                }

            }
            else if(do_Command=="front"){
                if(stack_Int.empty()){
                    cout << "-1" << endl;
                }
                else
                    cout << stack_Int.front() << endl;  // 큐 맨 앞 정수 출력.
            }

            else if(do_Command == "back"){
                if(stack_Int.empty()){
                    cout << "-1" << endl;
                }
                else
                    cout << stack_Int.back() << endl;   // 큐 맨 뒤 정수 출력.
            }

        }
    }
    return 0;
}
