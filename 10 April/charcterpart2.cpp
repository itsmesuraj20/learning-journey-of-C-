//Check the palindrome character  
#include<iostream>
using namespace std;

int main()
{
    int numberofElements;// Input section mein size bhi dena h for ex=2,3,4,5,......
    cin>>numberofElements;

    char arr[numberofElements+1];
    cin>>arr;//Array ke elements daalne h isme like for checking for ex-nitin ,mohom for checking 
    
    //Remarks- Character mein Upar case aur lower case ka dhyan rakhna

    bool check=1;

    for (int i = 0; i < numberofElements/2; i++)
    {
        if(arr[i]!=arr[numberofElements-1-i])
        {
            check = 0;
            break;
        }
    }
    
    if(check==true)
    {
        cout<<"Word is palindrome"<<endl;
    }
    else{
        cout<<"Word is not palindrome"<<endl;;
    }
    return 0;
}