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

/*A3 -*/

#include <iostream>
using namespace std;
int pow(int n){
    if(n==0){
        return 1;
    }
    return 2*pow(n-1);
    
}



int main(){
int c,b=0;
cin>>c;
while(c){
    b+=pow(c%10);
    c=c/10;
    
}
cout<<b;

    
}
/*A4 -
similar to palindrome*/
/*A5 -*/
#include <iostream>
using namespace std;
int main(){
char c;
cin>>c;
if(c>=65&&c<=122){
    cout<<"alphabet";
    
}
else if(c>57&&c<65){
     cout<<"digit";
}
else{
     cout<<"special";
}
}
/*A6 -*/
#include <iostream>
using namespace std;
int main(){
int c,b;
cin>>c>>b;
cout<<"before "<<c<<" "<<b<<"\n";
c=c+b;
b=c-b;
c=c-b;
cout<<"after "<<c<<" "<<b;
}
/*A7 -*/
#include <iostream>
using namespace std;
int main(){
int a,c,b,d;
int arr1[10][10];
int arr2[10][10];
int sum[10][10];
cout<<"enter rows and columns of 1st array :";

cin>>a>>b;
cout<<" enter elements: ";
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        int g;
     cin>>g;
    arr1[i][j]=g;
        
    
    }
}
cout<<"enter rows and columns of 2nd array :";
cin>>c>>d;
cout<<" enter elements: ";
for(int i=0;i<c;i++){
    for(int j=0;j<d;j++){
        int g;
        cin>>g;
    arr2[i][j]=g;
        
    }
}
int f=0;
if(b==c){
     for(int k=0;k<d;k++){
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
           
            f+=arr1[j][i]*arr2[i][j];
            
            
            
            
        }
        sum[i][k]=f;
    }    
        
    }
    
    
    
    
    
 
for(int i=0;i<a;i++){
    for(int j=0;j<d;j++){
        int g;
        g=sum[i][j];
        cout<<g<<" ";
    }
    cout<<"\n";
}
}
else{
    cout<<"not possible";
}
}
/*A8 -*/
#include <iostream>
using namespace std;
int main(){
cout<<"enter no. of rows";
int c;
cin>>c;
for(int i=0;i<c;i++){
    for(int j=0;j<=i;j++){
        cout<<"* ";
    }
    cout<<"\n";
}

    cout<<"\n";

for(int i=0;i<c;i++){
    for(int j=c;j>=i;j--){
        cout<<"  ";
    }
    for(int k=0;k<=i;k++){
        cout<<"* ";
    }
    cout<<"\n";
}
 cout<<"\n";
for(int i=0;i<c;i++){
    for(int j=c;j>i;j--){
        cout<<"* ";
    }
    for(int k=0;k<=i;k++){
        cout<<" ";
    }
    cout<<"\n";
}
   
    cout<<"\n";
for(int i=0;i<c;i++){
    for(int k=0;k<=i;k++){
        cout<<"  ";
    }
    
    for(int j=c;j>i;j--){
        cout<<"* ";
    }
    
    cout<<"\n";
} 
cout<<"\n";
for(int i=0;i<c;i++){
    for(int j=c;j>=i;j--){
        cout<<" ";
    }
    for(int k=0;k<=i;k++){
        cout<<"* ";
    }
    cout<<"\n";
}
    cout<<"\n";
for(int i=0;i<c;i++){
    for(int k=0;k<=i;k++){
        cout<<" ";
    }
    
    for(int j=c;j>i;j--){
        cout<<"* ";
    }
    
    cout<<"\n";
} 

    cout<<"\n";
for(int i=0;i<c;i++){
    for(int k=0;k<=i;k++){
        cout<<i+1<<" ";
    }
    
    cout<<"\n";
} 
    cout<<"\n";
    int j=0;
for(int i=0;i<c;i++){
    for(int k=0;k<=i;k++){
        cout<<++j<<" ";
    }
    
    cout<<"\n";
} 
cout<<"\n";
j=0;
for(int i=0;i<c;i++){
     for(int f=c;f>=i;f--){
        cout<<"  ";
    }
    
    for(int k=0;k<=i;k++){
        cout<<++j<<" ";
    }
    
    cout<<"\n";
} 
cout<<"\n";
j=0;
for(int i=0;i<c;i++){
     for(int f=c;f>=i;f--){
        cout<<"  ";
    }
    
    for(int k=0;k<=i;k++){
        cout<<++j<<" ";
    }
    int f=j;
    for(int k=1;k<=i;k++){
        cout<<--f<<" ";
    }
    
    cout<<"\n";
} 
cout<<"\n";
for(int i=0;i<c;i++){
    for(int k=0;k<=i;k++){
        
        cout<<char(i+65)<<" ";
    }
    
    cout<<"\n";
} 

    cout<<"\n";
 j=65;
for(int i=0;i<c;i++){
    for(int k=0;k<=i;k++){
        cout<<char(j++)<<" ";
    }
    
    cout<<"\n";
} 
cout<<"\n";
}




