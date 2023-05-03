//Step 1
#include <iostream>
#include <iomanip>
using namespace std;
//Function Prototype 
void specialNum(float creditEarnedArray[], int SIZE);
void PrintReverse (float creditEarnedArray[], int SIZE);





int main()
{
	
	//Step 2, Declare and initializing creditEarnedArray...
	const int SIZE = 12;
	float creditEarnedArray[SIZE] = {6.8,8.5,6.8,10.6,15.5,11.7,18.8,16.3,20.7,6.8,19.2,12.5};
	double average;
	double total;
	
	//Step 3.... Print out all elements in the array on screen
	cout<<"The following numbers are included in the Array:"<<endl;
	for (int i = 0; i<SIZE;i++)
	{
		cout<<"Element #"<<i+1<<": "<<creditEarnedArray[i]<<endl;
	}
	cout<<endl;
	//Step 4... change the value of the fifth element to 25.5 and print out that value only
	creditEarnedArray[4] = 25.5;
	cout<<"The value of the fifth element is now: "<<creditEarnedArray[4]<<endl;
	
	//Step 5... Calculate the total and Average of the array and print it on screen.
	for(int i =0; i<SIZE;i++)
	{
		total = total + creditEarnedArray[i];
		average = total/creditEarnedArray[i];
	}
	
	cout<<fixed<<setprecision(2);
	cout<<"The total is: "<<total<<endl;
	cout<<"The average is: "<<average<<endl;
	
	//Step 6... Change all values that are less than 10.0 to 11.0
	for(int i = 0; i<SIZE;i++)
	{
		if (creditEarnedArray[i]<10.0)
		{
			creditEarnedArray[i]=11.0;
		}
	}
	//Step 7... Print out again all of the elements in the array based on step 6
	for (int i = 0; i<SIZE;i++)
	{
		cout<<"Element #"<<i+1<<": "<<creditEarnedArray[i]<<endl;
	}
	
	//Calling fucntions
	specialNum(creditEarnedArray,SIZE);
	PrintReverse(creditEarnedArray,SIZE);
	
	
	
	system("pause");
	return 0;
}


//Step 8...Declare Function specialNum
void specialNum(float creditEarnedArray[], int SIZE)
{
	double userNum;
	//Step 9...Prompt user to enter special number that ranges from 11.0 to 25.0
	cout<<"Enter a number between 11.0 and 25.0: ";
	cin>>userNum;
	cout<<endl;
	cout<<"Your special number is: "<<userNum<<endl;
	cout<<endl;
	
	//check to see if user is within range
	while (userNum <11.0 || userNum >25.0)
	{
		cout<<"Please enter a value between 11.0 and 25.0: ";
		cin>>userNum;
	}
	//Print all of the numbers in the array that is greater than the number entered.
	for (int i = 0; i<SIZE; i++)
	{
		if(userNum<creditEarnedArray[i])
		{
			cout<<creditEarnedArray[i]<<" is greater than "<<userNum<<endl;
		}
	}
}

//Step 10...Create a fucntion to output Array list backwards
void PrintReverse (float creditEarnedArray[], int SIZE)
{
	cout<<endl;
	cout<<"The Array displayed backwards is: "<<endl;
	
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout<<"Element #"<< i+1 << ": "<< creditEarnedArray[i] <<endl;
	}
	
}
