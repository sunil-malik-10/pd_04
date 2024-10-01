#include<iostream>
using namespace std;
void printMenu();
void calculateAggregate(int matricMarks, int interMarks, int ecatMarksStd);
void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2);
main()
{
	int matricMarks1, interMarks1, ecatMarksStd1, matricMarks2, interMarks2, ecatMarksStd2;
	string nameStd1,nameStd2;

	printMenu();

	cout<<" Enter the name of First Student: ";
	cin >> nameStd1;
	cout<<" Enter Matric Marks of first Student: ";
	cin>> matricMarks1;
	cout<<" Enter inter marks of first Student: ";
	cin>> interMarks1;
	cout<<" Enter ecat Marks of first Student: ";
	cin>> ecatMarksStd1;
	calculateAggregate(matricMarks1,interMarks1,ecatMarksStd1);

	cout<<" Enter the name of second Student: ";
	cin >> nameStd2;
	cout<<" Enter Matric Marks of second Student: ";
	cin>> matricMarks2;
	cout<<" Enter inter marks of second Student: ";
	cin>> interMarks2;
	cout<<" Enter ecat Marks of second Student: ";
	cin>> ecatMarksStd2;
	calculateAggregate(matricMarks2,interMarks2,ecatMarksStd2);


	compareMarks(nameStd1,ecatMarksStd1,nameStd2,ecatMarksStd2);


}

void printMenu()
{
	cout<<" ------------------------Univeristy*******Admission*******Managment------------------------"<<endl;
	cout<<" ----------------------------------------- System-----------------------------------------"<<endl;
	cout<<" ------------------------------------------------------------------------------------------"<<endl;
}

void calculateAggregate(int matricMarks, int interMarks, int ecatMarksStd)
{
	float agg;
	agg = ((matricMarks*0.30)/1100 + (interMarks*0.30)/560 + (ecatMarksStd*0.40)/400) * 100;
	cout<<" Aggregate is: "<<agg<<endl;
}
void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2)
{

	if(ecatMarksStd1 > ecatMarksStd2)
	{
		cout<<nameStd1<<" number is more than "<< nameStd2;
	}
	if(ecatMarksStd1 < ecatMarksStd2)
	{
		cout<<nameStd2 <<" number is more than "<< nameStd1;
	}

}



