/*Anagram
Given two strings, a and b , that may or may not be of the same length, determine the minimum number of character deletions required to make a and b anagrams. Any characters can be deleted from either of the strings.*/

#include<bits/stdc++.h>

using namespace std;

int main()

{

int t;

cin>>t;

while(t--)

{

string a,b;

cin>>a>>b;

map<char,int>m1;

map<char,int>m2;

int count=0;

for(int i=0;i<a.length();i++)

{

m1[a[i]]++;

}

for(int i=0;i<b.length();i++)

{

m2[b[i]]++;

}

for(char c='a';c<='z';c++)

{

count+=abs(m1[c]-m2[c]);

}

cout<<count<<endl;

}

}