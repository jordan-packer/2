#include <iostream> 
using namespace std;
void say(string word);
int add(int a, int b);
int main(){

    cout<<"hello World\n";
    cout<<"5 + 7 = "<<add(5,7)<<endl;
    say("hi");
    return 0;
}
int add (int a, int b)
{
    return a+b;
}
void say(string word)
{

    cout<<word<<endl;
}