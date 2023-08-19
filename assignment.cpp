/*A1 -*/
#include <iostream>
using namespace std;
int main(){
int a, c;

int b = 0;
cin >> c;
a = c;
while (c)
{
    b = b * 10 + c % 10;
    c = c / 10;
}
if (a == b)
{
    cout << "palindrome";
}
else
    cout << "not palindrome";
}
/*A2 -*/
#include <iostream>
using namespace std;
int main(){
char c;
cout<<"enter +,-,/,%,* :-";
int a, b ;
cin >> c;
cout<<"enter two no.s a,b:-";
cin >> a >> b;
switch(c){
    case '+':
    cout<<a+b;
    break;
    case '-':
    cout<<a-b;
    break;
    case '/':
    cout<<a/b;
    break;
    case '%':
    cout<<a%b;
    break;
    case '*':
    cout<<a*b;
    break;
    
}
}
