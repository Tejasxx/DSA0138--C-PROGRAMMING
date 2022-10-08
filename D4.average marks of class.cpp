#include<iostream>
#include<string>
using namespace std;
class Marks
{
	int rollno;
	string name;
	protected:
		int marks;
	public:
		Marks(int r, string n, int m)
		{
			rollno = r;
			name = n;
			marks = m;
		}
		void putdata()
		{
			cout << "Roll no. : " << rollno << endl;
			cout << "Name : " << name << endl;
		}
		virtual int getmarks() = 0;
};
class Physics:public Marks
{
	public:
		Physics(int r, string n, int m):Marks(r, n, m)
		{
		}
		int getmarks()
		{
			return marks;
		}
};
class Chemistry:public Marks
{
	public:
		Chemistry(int r, string n, int m):Marks(r, n, m)
		{
		}
		int getmarks()
		{
			return marks;
		}
};
class Maths:public Marks
{
	public:
		Maths(int r, string n, int m):Marks(r, n, m)
		{
		}
		int getmarks()
		{
			return marks;
		}
};
int main()
{
	int i, n, rno, mm, cm, pm;
	string nm;
	cout << "Enter the number of students : ";
	cin >> n;
	Marks *mptr[n];
	for(i = 0; i < n; i++)
	{
		cout << "Enter the details of student " << i+1 << " : " << endl;
		cout << "Enter roll no. : ";
		cin >> rno;
		cout << "Enter name : ";
		cin >> nm;
		cout << "Enter marks in Physics : ";
		cin >> pm;
		cout << "Enter marks in Chemistry : ";
		cin >> cm;
		cout << "Enter marks in Mathematics : ";
		cin >> mm;
		mptr[i] = new Physics(rno, nm, pm);
		mptr[i] = new Chemistry(rno, nm, cm);
		mptr[i] = new Maths(rno, nm, mm);
	}
	cout << "Details of students : " << endl;	for(i = 0; i < n; i++)
	{
		mptr[i]->putdata();
		cout << "Total marks : " << (mptr[i]->getmarks() + mptr[i]->getmarks() + mptr[i]->getmarks()) << endl;
		cout << "Average marks : " << (mptr[i]->getmarks() + mptr[i]->getmarks() + mptr[i]->getmarks())/3 << endl << endl;
	}
	return 0;
}