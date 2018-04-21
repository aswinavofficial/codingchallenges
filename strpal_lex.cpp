#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct Pal
{
int length;
string str;
}strpal[50],temp;

int isPalindrome(string str)
{
int n;
n=str.length();
int i,j;
for(i=0,j=n-1;i!=j;i++,j--)
{
if(str[i]!=str[j])
   return 0;

}
return 1;
}

int main()
{
string str,s1;
int p,sp=0;
cout<<"\nEnter the String ";
cin>>str;
p=isPalindrome(str);
if(p==1)
{
strpal[sp++].length=str.length();
strpal[sp++].str=str;

}
int i,j,k;

for(i=0;i<str.length();i++)
{

for(j=i+1;j<str.length();j++)
{
s1=str.substr(i,j);
k=isPalindrome(s1);
if(k==1&&s1.length()>1)
{
strpal[sp++].length=s1.length();
strpal[sp++].str=s1;

}


}


}

for(i=0;i<sp-1;i++)
{
for(j=0;j<sp-i-1;j++)
{

if(strpal[j].str>strpal[j+1].str)
{
temp=strpal[j];
strpal[j]=strpal[j+1];
strpal[j+1]=temp;


}


}



for(i=0;i<sp;i++)
{
cout<<"\n"<<strpal[i].str;


}







}






return 0;
}
