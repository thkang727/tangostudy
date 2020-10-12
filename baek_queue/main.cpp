
/*
push X: ���� X�� ť�� �ִ� �����̴�.
pop: ť���� ���� �տ� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ť�� ����ִ� ������ ������ ����Ѵ�.
empty: ť�� ��������� 1, �ƴϸ� 0�� ����Ѵ�.
front: ť�� ���� �տ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
back: ť�� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.

*/

#include <iostream>
#include <queue> //STL ���̺귯�� queue ���.

#define MAX_Command_SIZE 10000

using namespace std;


int main()
{
    int command;


    cin >> command;

    queue<int> stack_Int; // queue ����.



    string do_Command; // input queue command


    if(command <= MAX_Command_SIZE && command > 0)
    {
        for(int index=0; index < command; index++){
            cin >> do_Command;

            if(do_Command == "push")
            {
                int num;
                cin >> num;
                stack_Int.push(num);    //ť �� �ڿ� ���.
            }

            else if(do_Command == "pop"){
                if(!stack_Int.empty()){ //ť�� �Ⱥ���ٸ�,
                    cout << stack_Int.front() << endl;  // ���� ���� ���� ���.
                    stack_Int.pop();        // ���� ���� ���� ����.
                } else {
                    cout << "-1" << endl;
                }
            }
            else if(do_Command == "size"){
                cout << stack_Int.size() << endl;   // ť�� ���� ���.
            }

            else if(do_Command =="empty"){
                if(stack_Int.empty()){
                    cout << "1" << endl;    //ť�� ��� 1
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
                    cout << stack_Int.front() << endl;  // ť �� �� ���� ���.
            }

            else if(do_Command == "back"){
                if(stack_Int.empty()){
                    cout << "-1" << endl;
                }
                else
                    cout << stack_Int.back() << endl;   // ť �� �� ���� ���.
            }

        }
    }
    return 0;
}
