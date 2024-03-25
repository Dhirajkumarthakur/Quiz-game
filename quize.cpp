#include <iostream>
using namespace std;

int playquiz()
{
    char start;
    char user_option;
    int score = 0;
    playInsideFunction:  //there we decelered the level of the function

    //this is instruction about quiz
    cout << "----------------Welcome to Quiz Game---------------------" << endl;
    cout << "------------please follow the instruction of the quiz----" << endl;
    cout << "step 1 : Quiz contains total 10 questions" << endl;
    cout << "step 2 : you will given 1 marks for each right ans" << endl;
    cout << "step 3 :There will be no negative marking " << endl;
    cout << "step 4 :please press s to start the quiz" << endl;
    cout << "step 5 :this is  not miltichoice question,please select anyone option" << endl;
    cout << " step 6 :please select option a, b, c ,d" << endl;
    cout << " step 7 :if your score >=6 then you will pass" << endl;
    
    //it is used for start the quiz
    cin >> start;
    if (start == 's' || start == 'S')
    {
        //this is question part
        cout << "Q1. what is the capital of india" << endl;
        cout << "(a).Delhi (b).mumbai (c).chenai (d).jamu " << endl;
        cin >> user_option;
        if (user_option == 'A' || user_option == 'a')
        {
            score += 1;
        }
        else
        {
            score += 0;
        }
            cout << "Q2. what is the capital of tamilnadu" << endl;
            cout << "(a).Delhi (b).mumbai (c).chenai (d).jamu " << endl;
            cin >> user_option;
            if (user_option == 'c' || user_option == 'C')
            {
                score += 1;
            }
            else
            {
                score += 0;
            }
           cout << "Q3. what is the logest state of india" << endl;
            cout << "(a).Delhi (b).mumbai (c).rajasthan (d).jamu " << endl;
            cin >> user_option;
            if (user_option == 'c' || user_option == 'C')
            {
                score += 1;
            }
            else
            {
                score += 0;
            }

            cout << "Q4. what is the smallest state of india" << endl;
            cout << "(a).Delhi (b).mumbai (c).chenai (d).Goa " << endl;
            cin >> user_option;
            if (user_option == 'd' || user_option == 'D')
            {
                score += 1;
            }
            else
            {
                score += 0;
            }

            cout << "Q5. who is the PM of india" << endl;
            cout << "(a).kejiriwal (b).modi (c).rahul (d).rajiv " << endl;
            cin >> user_option;
            if (user_option == 'b' || user_option == 'B')
            {
                score += 1;
            }
            else
            {
                score += 0;
            }

            cout << "Q6. who is the cm of tamilnadu" << endl;
            cout << "(a).mk stalin (b).tejasvi (c).gandhi (d).rahul " << endl;
            cin >> user_option;
            if (user_option == 'A' || user_option == 'a')
            {
                score += 1;
            }
            else
            {
                score += 0;
            }

            cout << "Q7. what is the natonal bird of india" << endl;
            cout << "(a).peacock (b).duke (c).crow (d).parrot " << endl;
            cin >> user_option;
            if (user_option == 'a' || user_option == 'A')
            {
                score += 1;
            }
            else
            {
                score += 0;
            }

            cout << "Q8. what is the national currency of india" << endl;
            cout << "(a).dinar (b).daraham (c).rs (d).dollor " << endl;
            cin >> user_option;
            if (user_option == 'c' || user_option == 'C')
            {
                score += 1;
            }
            else
            {
                score += 0;
            }

            cout << "Q9. what is the capital of Bihar" << endl;
            cout << "(a).Delhi (b).mumbai (c).chenai (d).patna " << endl;
            cin >> user_option;
            if (user_option == 'd' || user_option == 'D')
            {
                score += 1;
            }
            else
            {
                score += 0;
            }

            cout << "Q10. who is the cm of Delhi" << endl;
            cout << "(a).rahul (b).sonia (c).kejiriwal (d).dinesh " << endl;
            cin >> user_option;
            if (user_option == 'c' || user_option == 'C')
            {
                score += 1;
            }
            else
            {
                score += 0;
            }

    }
   
    else
            {
                cout << "you have entered wrong chracter,please enterd s " << endl;
               goto playInsideFunction;
            }

            return score;

}


  //this is main function        

int main()


{

    int finalresult = 0;
    char playagain;
    int playquiz(void);
    play:
    finalresult = playquiz();
    cout << "your total score is :" << finalresult << endl;
    if (finalresult >= 6)
    {
        cout << " congratulation you are pass" << endl;
        cout << "do you want to play the quiz again yes or no" << endl;
        cin >> playagain;
        if (playagain == 'y' || playagain == 'Y')
        {
           goto play;  //goto statement also used for jump the statement
        }
        else
        {
            cout << "thank you to play the quiz" << endl;
        }
    }
    else
    {
        cout << "you are fail"<<endl;
        cout << "do you want to play the quiz again yes or no" << endl;
        cin >> playagain;
        if (playagain == 'y' || playagain == 'Y')
        {
            playquiz();  //function call
        }
        else
        {
            cout << "thank you to play the quiz" << endl;
        }
    }
}