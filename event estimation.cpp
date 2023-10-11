// Event management system
#include<iostream>
#include<cmath> //abstraction in header file
using namespace std;
class event{
	const double costperhour = 18.50;
	const double costperminute = .40;
	const double costofdinner = 20.70;
	string fname,lname,name;
	int guest,min,numserver;
	double cost1,cost2,cost_of_one_server,foodcost,finalcost;
	public:
		void get()// to get input values
		{
			cout<<"************************* Event Management System************************"<<endl;
			cout<<"Enter the name of the event:";
			cin>>name;
			cout<<"Enter the customers first and last name:";
			cin>>fname>>lname;
			cout<<"Enter the number of guests:";
			cin>>guest;
			cout<<"Enter the number of minutes in the event:";
			cin>>min;
		}
		void server()// to get total number of servers required
		{
			cout<<"--------------------------Event estimate for:"<<fname<<lname<<"------------------------------"<<endl;
			numserver=guest/20;
			cout<<"Number of server:"<<ceil(numserver)<<endl;
		}
		void cost_server()// to get cost of one server
		{
		cost1 = (min / 60) * costperhour;
		cost2 = (min % 60) * costperminute;
		cost_of_one_server= cost1 + cost2;
		cout<<"The cost of servers:"<<cost_of_one_server<<endl;	
		}
		void food()// to get total food cost
		{
			foodcost=guest*costofdinner;
			cout<<"The cost for food is:"<<foodcost<<endl;
		}
		void avgcost()// to get average cost per person
		{
			cout<<"Average cost per person is:"<<foodcost/guest;
		}
		void totalcost()// to get total cost of the event
		{
			finalcost = foodcost + (cost_of_one_server * numserver);
			cout<<endl<<endl<<"Total cost is: "<<finalcost<<endl;
		}
		void deposit()// to know the needed deposit amount
		{
			cout<<"Please deposit the 25% of the deposit to reserve the event"<<endl;
			cout<<"The deposit needed is: "<<finalcost*.25;
		}
		
};
int main()
{
	event obj;// object declaration
	obj.get();
	obj.server();
	obj.cost_server();
	obj.food();
	obj.avgcost();
	obj.totalcost();
	obj.deposit();
	
	return 0;
}
