
/*
    baek 10799 - 쇠막대기
*/
// () = 레이저.
    // (  ) = 쇠막대기.

#include <iostream>


using namespace std;

int main()
{



    int num = 0; // 나눠진 쇠막대기 수,
    int stack_stick=0;

    char stick[100000] ;

    cin >> stick ;

    for(int i = 0; stick[i]!=NULL; i++)
    {
        if(stick[i] == '('){

            if(stick[i+1] == ')'){      // () : 레이저 인 경우.
                num = num + stack_stick;    // 잘려진 막대기의 수를 더함.
                i++;                    // i+1 이 ) 였으므로.
                stack_stick--;
                //중복덧셈 방지 - 레이저는 막대기 수 증가 가 아니므로.
            }
            stack_stick++;      // 막대기 +1

        }
        else{

            if(stack_stick > 0)
                stack_stick--;  // 잘려졌던 막대기 잔해.
            num++;              // 를 더함.
        }
    }
    num = num + stack_stick;    // 나머지 막대기 잔해들을 더함.
    cout << num;
    return 0;
}
