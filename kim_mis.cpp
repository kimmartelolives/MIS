#include<iostream>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<string>
#include<fstream>

using namespace std;


void title(), admin_title(), add_title(), update_title(), delete_title(), homepage(), admin_login(string data), admin_homepage(), 
admin_students_information_section(), admin_students_section(), students_list(), add_students(), update_students(string data), 
delete_students(string data), users_list(), users_information_section(), users_title(), register_account(), update_account(string data),
delete_account(string data), student_homepage(), bsu_title(), about();

const int student_info = 100, user_accounts = 100;

string std_id[student_info]{"2021103414", "2021106852", "2021106726", "2021106720", "2021106722"};
string std_name[student_info]{"Kim Olives", "Ashley Kate", "Mang Juan", "San Pedro", "Saint Peter"};
string std_section[student_info]{"1A", "1A", "1B", "1B", "1C"};
string std_adviser[student_info]{"Jon Profeta", "Jon Profeta", "Reiko Taku", "Reiko Taku", "Ambot Jon"};

string student_id[user_accounts]{"kim", "1234", "test"};
string password[user_accounts]{"123", "1234", "test1"};
string full_name[user_accounts]{"Olives", "Kim", "test2"};
string role[user_accounts]{"Admin", "Student", "Deactivated"};

string role1 = "Admin";
string role2 = "Student";
string role3 = "Deactivated";

//index1
int main()
{
	system("CLS");
	main:

	HWND console = GetConsoleWindow();
	RECT ConsoleRect;
	GetWindowRect(console, &ConsoleRect); 
 
    MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 530, 630, TRUE);
   
	title();
	homepage();
	

}
//header
void title()
{
	cout<<"\n\n ";
	cout<<"\t\t     W E L C O M E    TO\n ";
	cout<<"\t M A N A G E M E N T    I N F O R M A T I O N \n ";
	cout<<"\t\t\t S Y S T E M\n\n";

	cout<<"\t   C O M P U T E R    E N G I N E E R I N G\n ";
	cout<<"\t\t     D E P A R T M E N T\n\n\n\n\n\n";
	
}

void admin_title()
{

	cout<<"\n\n ";
	cout<<"\t A D M I N I S T R A T O R     H O M E P A G E\n\n ";
	cout<<"\t M A N A G E M E N T    I N F O R M A T I O N \n ";
	cout<<"\t\t\t S Y S T E M\n\n\n\n\n\n";
			
}

void admin_students_section()
{

	cout<<"\n\n ";
	cout<<"\t       S T U D E N T S    S E C T I O N \n\n ";
	cout<<"\t M A N A G E M E N T    I N F O R M A T I O N \n ";
	cout<<"\t\t\t S Y S T E M\n\n\n\n\n\n";
			
}

void add_title()
{

	cout<<"\n\n ";
	cout<<"\t\t    A D D    S E C T I O N \n\n ";
	cout<<"\t M A N A G E M E N T    I N F O R M A T I O N \n ";
	cout<<"\t\t\t S Y S T E M\n\n\n\n\n\n";
			
}

void update_title()
{

	cout<<"\n\n ";
	cout<<"\t\t U P D A T E    S E C T I O N \n\n ";
	cout<<"\t M A N A G E M E N T    I N F O R M A T I O N \n ";
	cout<<"\t\t\t S Y S T E M\n\n\n\n\n\n";
			
}

void delete_title()
{

	cout<<"\n\n ";
	cout<<"\t\t D E L E T E    S E C T I O N \n\n ";
	cout<<"\t M A N A G E M E N T    I N F O R M A T I O N \n ";
	cout<<"\t\t\t S Y S T E M\n\n\n\n\n\n";
			
}

void users_title()
{

	cout<<"\n\n ";
	cout<<"\t\t   U S E R    S E C T I O N \n\n ";
	cout<<"\t M A N A G E M E N T    I N F O R M A T I O N \n ";
	cout<<"\t\t\t S Y S T E M\n\n\n\n\n\n";
			
}

void student_title()
{

	cout<<"\n\n ";
	cout<<"\t       S T U D E N T     H O M E P A G E\n\n ";
	cout<<"\t M A N A G E M E N T    I N F O R M A T I O N \n ";
	cout<<"\t\t\t S Y S T E M\n\n\n\n\n\n";
			
}

void bsu_title()
{

	cout<<"\n\n ";
	cout<<"\t       M I S S I O N    &    V I S I O N\n\n ";
	cout<<"\t M A N A G E M E N T    I N F O R M A T I O N \n ";
	cout<<"\t\t\t S Y S T E M\n\n\n\n\n\n";
			
}

//index	
void homepage()
{
	int ans;
	string username;
	cout<<"Instruction: Choose your mode:\n"<<"\n";
	cout<<"[1] Login\n";
	cout<<"[2] Exit\n";
	cout<<"\n";
	cout<<"Enter Selection: ";
	cin>>ans;
	system("CLS");
	
	switch (ans)
	{			
		case 1:
		system("CLS");
		admin_login(username);
		break;
					
		case 2:
		system("CLS");
		cout<<"Warning: The program will now terminate! Thank you!";
		abort();
		break;
				 
		default:
		cout<<"Warning: Incorrect Selection Please Try Again!";
		Sleep(1500);
		main();
		break;	
	} 	
}

void admin_login(string data)
{
	
	char user[20]; char b; int count=0; int counter=4;
	selectlogin:
	system("CLS");
	cin.ignore();	
	int numbertries=0;
	
	if (counter > 0)
	{
			
		while (numbertries<4)
		{
		
			title();
			cout<<"Login Attempts: ["<<counter<<"]"<<endl;
			cout<<"Login Page\n\n";
			cout<<"Enter Username: \n";
			cin.getline(user, 20);
			cout<<"Enter Password: \n";
			char pass[20];
			
			
			for(int i=0;;)
			{
			b=getch();
			
			if((b>='a'&&b<='z')||(b>='A'&&b<='Z')||(b>='0'&&b<='9'))
			{
				pass[i]=b; ++i;
				cout<<"*";
			}
			
			if(b=='\b'&&i>=1)
			{
				cout<<"\b \b"; --i;
			}
			
			if(b=='\r')
			{
				pass[i]='\0';
				break;}
			}
						
			string ansreg;
			cout<<"\n\n";
			cout<<"Instruction: Choose your selection:\n"<<"\n";
			cout<<"[x] Enter\n";
			cout<<"[y] Main Menu\n";
			cout<<"\n";
			cout<<"Enter Selection: ";
			cin>>ansreg;					
			system("CLS");
			
			if( ansreg == "x" || ansreg == "X")
			{
				
				for (int i=0;i<user_accounts; i++)
				{
					if(student_id[i]==user&&password[i]==pass)
					{
						if(role[i] == role1)
						{						
						count++;
						system("CLS");
						cout<<"Welcome back! "<<full_name[i]<<" | Level: "<<role[i];
						admin_homepage();
						break;	
						}
						else if(role[i] == role2)
						{
						 system("CLS");
						 cout<<"Welcome back! "<<full_name[i]<<" | Level: "<<role[i];
						 student_homepage();
						 break;
						}
						else if(role[i] == role3)
						{
							system("CLS");
							cout<<"Warning: Account Deactivated. Please Contact Admin!";
							Sleep(1500);
							goto selectlogin;
						}
						else
						{
							cout<<"Warning: Incorrect Username or Password! Please Try Again!\n\n";
							Sleep(1500);
							numbertries++; 
							counter--;
							goto selectlogin;							
						}
					}
				}
				
				if (count==0)
				{
					cout<<"Warning: Incorrect Username or Password! Please Try Again!\n\n";
					Sleep(1500);
					numbertries++; 
					counter--;
					goto selectlogin;
					
									
				}
			}
			
			else if ( ansreg == "y" || ansreg == "Y")
			{
				system("CLS");
				main();
				break;				
			}
			
			else
			{
				cout<<"Warning: Incorrect Selection Please Try Again!\n";
				Sleep(1500);				
				goto selectlogin;
			}	
		}
	}
	else
	{
	
		cout<<"Invalid! The program will terminate!";
		Sleep(1500);
		system("CLS");
		abort();
	
	}
	
}

//admin page
void admin_homepage()
{
	admin_homepage:
	admin_title();
	
	int answer;
	cout<<"Instruction: Choose your mode:\n"<<"\n";
	cout<<"[1] Show All Students' Information\n";
	cout<<"[2] Show All User's Accounts\n";
	cout<<"[3] Logout\n";
	cout<<"\n";
	cout<<"Enter Selection: ";
	cin>>answer;
	system("CLS");
	
	switch (answer)
	{	
		
		case 1:
		system("CLS");
		admin_students_section();
		admin_students_information_section();	
		break;
					
		case 2:
		system("CLS");
		users_title();
		users_information_section();
		
		case 3:
		system("CLS");
		cout<<"Signing Off...\n"; Sleep(1500);
		system("CLS");
		main();
	
		break;
	
				 
		default:
		cout<<"Warning: Incorrect Selection Please Try Again!";		
		goto admin_homepage;
		break;
	}
}

// Students Information
void admin_students_information_section()
{
	int answer;
	string std_id;
	
	students_list();
	
	cout<<"Instruction: Choose your mode:\n"<<"\n";
	cout<<"[1] Add Student \n";
	cout<<"[2] Update Student's Information \n";
	cout<<"[3] Delete Student's Information \n";
	cout<<"[4] Main Menu \n";
	cout<<"\n";
	cout<<"Enter Selection: ";
	cin>> answer;
	switch (answer)
	
	{
	 case 1:
	 system("CLS");
	 add_title();
	 students_list();
	 add_students();
	 break;
	 
	 case 2:
	 system("CLS");
	 cin.ignore();	
	 update_title();
	 students_list();	
	 cout<<"Instruction: Fill up form \n\n";
	 cout<<"Student ID: ";
	 getline(cin, std_id);
	 update_students(std_id);
	 break;
	 
	 case 3:
	 system("CLS");
	 cin.ignore();
	 delete_title();
	 students_list();
	 cout<<"Instruction: Fill up form \n\n";
	 cout<<"Student ID: ";
	 getline(cin, std_id);
	 delete_students(std_id);
	 cin.ignore();
	 break;
	 
	 case 4:
	 system("CLS");
	 admin_homepage();
	 break;
	 
	 default:
	 system("CLS");
	 cout<<"Warning: Incorrect Selection Please Try Again!";
	 admin_students_section();
	 admin_students_information_section();	
	 
	 break;
	}
}

void students_list()
{
	int count = 0;
	cout<<"\t     Students List [Computer Engineering] \n\n";	
	cout<<"   #  |  Student ID  |  Full Name  |  Section  |  Adviser \n\n";
	for( int i=0; i<student_info; i++)
	{
		if (std_id[i]!="\0")
		{
			count++;
			cout<<"   "<<count<<"\t"<<std_id[i]<<"\t"<<std_name[i]<<"\t"<<std_section[i]<<"\t"<<std_adviser[i]<<"\n";			
		}	
	}
	cout<<"\n\n";	
	
	if (count==0)
	{
		cout<<"No Record Found! Please contact Administrator.\n";
	}
}

void add_students()
{
	char student_id[40];
	char student_name[40];
	char student_section[10];
	char student_adviser[40];
	
	cin.ignore();
	cout<<"Instruction: Fill up form \n\n";
	cout<<"Student ID: ";
	cin.getline(student_id, 40);
	
	cout<<"Student Name: ";
	cin.getline(student_name, 40);
	
	cout<<"Section: ";
	cin.getline(student_section, 10);
	
	cout<<"Adviser: ";
	cin.getline(student_adviser, 40);
	
	for(int i = 0; i < student_info; i++)
	{
		if (std_id[i] == "\0")
		{
			std_id[i]=student_id;
			std_name[i]=student_name;
			std_section[i]=student_section;
			std_adviser[i]=student_adviser;
			break;
		}
	}	
	system("CLS");
	cout<<"Notification: Successfully Added!";;
	admin_students_section();
	admin_students_information_section();
}

void update_students(string data)
{
	char student_id1[40];
	char student_name1[40];
	char student_section1[40];
	char student_adviser1[40];		
	int count=0;
	
	for (int i=0;i<student_info; i++)
	{	
		if(std_id[i]==data)
		{
			count++;
			cout<<"Student Name: ";
			cin.getline(student_name1, 40);
			std_name[i]=student_name1;
			
			cout<<"Section: ";
			cin.getline(student_section1, 40);
			std_section[i]=student_section1;
			
			cout<<"Adviser: ";
			cin.getline(student_adviser1, 40);
			std_adviser[i]=student_adviser1;
			
			system("CLS");
			cout<<"Notification: Successfully Updated!";		
			admin_students_section();
			admin_students_information_section();
			system("CLS");
			break;
		
		}
	}
	if (count==0)
	{
		system("CLS");
		cout<<"Notification: No Record Found!";
		admin_students_section();
		admin_students_information_section();	
	}
	
}

void delete_students(string data)
{
	int count=0;
	for(int i=0;i<student_info;i++)
	{
	if(std_id[i]==data)
		{
			count++;
			std_name[i]="";
			std_id[i]="";
			std_section[i]="";
			std_adviser[i]="";
			system("CLS");
			cout<<"Notification: Successfully Deleted!";		
			admin_students_section();
			admin_students_information_section();
			break;
		}
	}
	if(count==0)
	{
		system("CLS");
		cout<<"Notification: No Record Found!";
		admin_students_section();
		admin_students_information_section();
	}
}

//User's Account
void users_information_section()
{
	int answer1;
	string student_id;
	
	users_list();
	
	cout<<"Instruction: Choose your mode:\n"<<"\n";
	cout<<"[1] Register New Account \n";
	cout<<"[2] Update User's Account \n";
	cout<<"[3] Delete User's Account \n";
	cout<<"[4] Main Menu \n";
	cout<<"\n";
	cout<<"Enter Selection: ";
	cin>> answer1;
	switch (answer1)
	
	{
	 case 1:
	 system("CLS");
	 add_title();
	 users_list();
	 register_account();
	 break;
	 
	 case 2:
	 system("CLS");
	 cin.ignore();	
	 update_title();
	 users_list();	
	 cout<<"Instruction: Fill up form \n\n";
	 cout<<"Username: ";
	 getline(cin, student_id);
	 update_account(student_id);
	 break;
	 
	 case 3:
	 system("CLS");
	 cin.ignore();
	 delete_title();
	 users_list();
	 cout<<"Instruction: Fill up form \n\n";
	 cout<<"Username: ";
	 getline(cin, student_id);
	 delete_account(student_id);
	 cin.ignore();
	 break;
	 
	 case 4:
	 system("CLS");
	 admin_homepage();
	 break;
	 
	 default:
	 system("CLS");
	 cout<<"Warning: Incorrect Selection Please Try Again!";
	 users_title();
	 users_information_section();	
	 
	 break;
	}
}

void register_account()
{
	char user[40];
	char pass[40];
	char name[40];
	char roles[40];
	
	cin.ignore();
	cout<<"Instruction: Fill up form \n\n";
	cout<<"Username: ";
	cin.getline(user, 40);
	
	cout<<"Password: ";
	cin.getline(pass, 40);
	
	cout<<"Name: ";
	cin.getline(name, 40);
	
	cout<<"Role [Admin / Student / Deactivated]: ";
	cin.getline(roles, 40);
	
	for(int i = 0; i < user_accounts; i++)
	{
		if (student_id[i] == "\0")
		{
			student_id[i]=user;
			password[i]=pass;
			full_name[i]=name;
			role[i]=roles;
			break;
		}
	}	
	system("CLS");
	cout<<"Notification: Successfully Added!";;
	users_title();
	users_information_section();
}

void update_account(string data)
{
	char user[40];
	char pass[40];
	char name[40];
	char roles[40];		
	int count=0;
	
	for (int i=0;i<user_accounts; i++)
	{	
		if(student_id[i]==data)
		{
			count++;	
			cout<<"Name: ";
			cin.getline(name, 40);
			full_name[i]=name;
			
			cout<<"Password: ";
			cin.getline(pass, 40);
			password[i]=pass;
			
			cout<<"Role [Admin / Student / Deactivated]: ";
			cin.getline(roles, 40);
			role[i]=roles;
						
			system("CLS");
			cout<<"Notification: Successfully Updated!";		
			users_title();
			users_information_section();
			system("CLS");
			break;
		
		}
	}
	if (count==0)
	{
		system("CLS");
		cout<<"Notification: No Record Found!";
		users_title();
		users_information_section();	
	}
	
}

void delete_account(string data)
{
	int count=0;
	for(int i=0;i<user_accounts;i++)
	{
	if(student_id[i]==data)
		{
			count++;
			student_id[i]="";
			password[i]="";
			full_name[i]="";
			role[i]="";
			system("CLS");
			cout<<"Notification: Successfully Deleted!";		
			users_title();
			users_information_section();
			break;
		}
	}
	if(count==0)
	{
		system("CLS");
		cout<<"Notification: No Record Found!";
		users_title();
		users_information_section();
	}
}

void users_list()
{
	int count = 0;
	cout<<"\t\t      User Accounts List \n\n";	
	cout<<"\t#  |  Username  |  Name  |  Password  |  Role \n\n";
	for( int i=0; i<user_accounts; i++)
	{
		if (student_id[i]!="\0")
		{
			count++;
			cout<<"\t"<<count<<"\t"<<student_id[i]<<"\t"<<full_name[i]<<"\t "<<password[i]<<"\t    "<<role[i]<<"\n";			
		}	
	}
	cout<<"\n\n";	
	
	if (count==0)
	{
		cout<<"No Record Found! Please contact Administrator.\n";
	}
}

//Student page
void student_homepage()
{
	student_homepage:
	student_title();
	
	int answer;
	cout<<"Instruction: Choose your mode:\n"<<"\n";
	cout<<"[1] About Bulacan State University\n";
	cout<<"[2] My Schoolmate Portal\n";
	cout<<"[3] Logout\n";
	cout<<"\n";
	cout<<"Enter Selection: ";
	cin>>answer;
	system("CLS");
	
	switch (answer)
	{	
		
		case 1:
		system("CLS");
		bsu_title();
		about();	
		break;
					
		case 2:
		system("CLS");
		admin_students_section();
		students_list();
		int answer;
		cout<<"Instruction: Choose your mode:\n"<<"\n";
		cout<<"[1] Main Menu\n";
		cout<<"\n";
		cout<<"Enter Selection: ";
		cin>>answer;
		system("CLS");
		
		switch (answer)
		
		{
		 case 1:
		 system("CLS");
		 student_homepage();
		 break;
		 
		 default:
		 system("CLS");
		 cout<<"Warning: Incorrect Selection Please Try Again!";
		admin_students_section();
		students_list();
		 
		 break;
		}
		break;
		
		case 3:
		system("CLS");
		cout<<"Signing Off...\n"; Sleep(1500);
		system("CLS");
		main();	
		break;
		
	
				 
		default:
		cout<<"Warning: Incorrect Selection Please Try Again!";		
		goto student_homepage;
		break;
	}
}

void about()
{
	
	cout<<"MISSION: \n\n";
	cout<<"Bulacan State University exists to produce highly competent, ethical";
	cout<<" and service-oriented professionals that contribute to the sustainable socio-economic growth and development of the nation. \n\n";
	
	cout<<"VISION: \n\n";
	cout<<"Bulacan State University is a progressive knowledge-generating institution globally recognized for excellent instruction,"; 
	cout<<" pioneering research, and responsive community engagements. \n\n";
	
	int answer;
	cout<<"Instruction: Choose your mode:\n"<<"\n";
	cout<<"[1] Main Menu\n";
	cout<<"\n";
	cout<<"Enter Selection: ";
	cin>>answer;
	system("CLS");
	
	switch (answer)
	
	{
	 case 1:
	 system("CLS");
	 student_homepage();
	 break;
	 
	 default:
	 system("CLS");
	 cout<<"Warning: Incorrect Selection Please Try Again!";
	 bsu_title();
	 about();
	 
	 break;
	}			
}

