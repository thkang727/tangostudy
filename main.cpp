
/*
    baek 10799 - �踷���
*/
// () = ������.
    // (  ) = �踷���.

#include <iostream>


using namespace std;

int main()
{



    int num = 0; // ������ �踷��� ��,
    int stack_stick=0;

    char stick[100000] ;

    cin >> stick ;

    for(int i = 0; stick[i]!=NULL; i++)
    {
        if(stick[i] == '('){

            if(stick[i+1] == ')'){      // () : ������ �� ���.
                num = num + stack_stick;    // �߷��� ������� ���� ����.
                i++;                    // i+1 �� ) �����Ƿ�.
                stack_stick--;
                //�ߺ����� ���� - �������� ����� �� ���� �� �ƴϹǷ�.
            }
            stack_stick++;      // ����� +1

        }
        else{

            if(stack_stick > 0)
                stack_stick--;  // �߷����� ����� ����.
            num++;              // �� ����.
        }
    }
    num = num + stack_stick;    // ������ ����� ���ص��� ����.
    cout << num;
    return 0;
}
