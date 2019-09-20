#include <iostream>
using namespace std;
int main()
{
	string first_name = " ", friend_name=" ", user_name=" ";
	char friend_sex = 0;
	int age = 0;
	cout<<"Please enter your name: ";
	cin>>user_name;
	cout<<"\nPlease enter the name of the person you want to write to: ";
	cin>>first_name;
	cout<<"\nPlease enter your friend name: ";
	cin>>friend_name;
	cout<<"\nPLease type 'm' if your friend is MALE and 'f' if your friend is female: ";
	cin>>friend_sex;
	cout<<"\nPlease enter your friend's age: ";
	cin>>age;
	if(age>=110 || age<=0)
	{	
		cout<<"You're kidding me right now ?\n";
		return 0;
	}
	//cout<<"\n"<<first_name<<" "<<friend_name<<" "<<friend_sex<<" "<<age<<"\n";
	cout<<"Dear "<<first_name<<"\n";
	cout<<"\nHow are you? I'm fine thank you :). I really miss you and i want to be with you alongside a good beer or something. So please write back when we can meet up again. Oh i almost to forgot to write down, have you seen "<<friend_name<<" latley ?";
	if(friend_sex == 'm')
	{
		cout<<" If you see "<<friend_name<<" please ask him to call me. \n";
	}else if(friend_sex == 'f')
	{
		cout<<" If you see "<<friend_name<<" please ask her to call me. \n";
	}
	cout<<"I hear you just had a birthday and you are "<<age<<" years old. ";
	if(age<=12)
		cout<<"Next year you will be "<<age+1<<". \n";
	else if(age==17)
		cout<<"next year you will be abel to vote. \n";
	else if(age>=70)
		cout<<"I hope you are enjoying retirement. \n";
	cout<<"\nYour sincerely\n \n _________ "<<user_name<<"\n";
	return 0;
}
