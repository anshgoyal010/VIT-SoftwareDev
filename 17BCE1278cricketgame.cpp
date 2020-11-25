#include<bits/stdc++.h>
using namespace std;

double prob(int sm,int bm)
{
	int p;
	p=((sm-bm)*100)/sm;
	return p;
}
void possibleshot(string s)
{
	if(s=="Full toss")
	{
		cout<<"Defend-0-"<<prob(5,4)<<endl;
		cout<<"Run-1-"<<prob(7,4)<<endl;
		cout<<"Run Fast-2-"<<prob(6,4)<<endl;
		cout<<"Square Cut-4-"<<prob(7,4)<<endl;
		cout<<"Helicopter-6-"<<prob(8,4)<<endl;
	}
	else if(s=="Yorker")
	{
		cout<<"Defend-0-"<<prob(5,3)<<endl;
		cout<<"Run-1-"<<prob(7,3)<<endl;
		cout<<"Straight Drive-2-"<<prob(6,3)<<endl;
		cout<<"Square Cut-4-"<<prob(7,3)<<endl;
		cout<<"Hook-6-"<<prob(7,3)<<endl;
	}
	else if(s=="Out-swinger")
	{
		cout<<"Defend-0-"<<prob(5,3)<<endl;
		cout<<"Run-1-"<<prob(7,3)<<endl;
		cout<<"Cover Drive-2-"<<prob(7,3)<<endl;
		cout<<"Pull-4-"<<prob(8,3)<<endl;
		cout<<"Helicopter-6-"<<prob(8,3)<<endl;
	}
	else if(s=="In-swinger)
	{
		cout<<"Defend-0-"<<prob(5,2)<<endl;
		cout<<"Run-1-"<<prob(7,2)<<endl;
		cout<<"On Drive-2-"<<prob(5,2)<<endl;
		cout<<"Pull-4-"<<prob(8,2)<<endl;
		cout<<"Hook-6-"<<prob(7,2)<<endl;
	}
	else if(s=="Bouncer)
	{
		cout<<"Defend-0-"<<prob(5,4)<<endl;
		cout<<"Run-1-"<<prob(7,4)<<endl;
		cout<<"Run Fast-2-"<<prob(6,4)<<endl;
		cout<<"Square Cut-4-"<<prob(7,4)<<endl;
		cout<<"Helicopter-6-"<<prob(8,4)<<endl;
	}
	else if(s=="Slower Ball")
	{
		cout<<"Defend-0-"<<prob(5,2)<<endl;
		cout<<"Run-1-"<<prob(7,2)<<endl;
		cout<<"On Drive-2-"<<prob(5,2)<<endl;
		cout<<"Pull-4-"<<prob(8,2)<<endl;
		cout<<"Helicopter-6-"<<prob(8,2)<<endl;
	}
	return;
}
int main()
{
	unordered_map<string,int> balls;
	balls["Full toss"]=4;
	balls["Yorker"]=3;
	balls["Out-swinger"]=3;
	balls["In-swinger"]=2;
	balls["Bouncer"]=4;
	balls["Slower Ball"]=2;
	
	unordered_map<string,int> shots;
	shots["Defend"]=50;
	shots["Run"]=71;
	shots["Run Fast"]=62;
	shots["Cover Drive"]=72;
	shots["On Drive"]=52;
	shots["Straight Drive"]=62;
	shots["Square Cut"]=74;
	shots["Pull"]=84;
	shots["Hook"]=76;
	shots["Helicopter"]=86;
	
	cout<<"Select a game mode (PvP/PvE)"<<endl;
	string mode="";
	cin>>mode;
	
	if(mode=="PvP")
	{
		cout<<"Waiting for an opponent..."<<endl;
		
		cout<<"Opponent found, match starting in 3...2…1"<<endl;
		int ts=0,lastrun=0;
		for(int i=0;i<6;i++){
		
		cout<<"First Innings, Player 1 has to set a target score"<<endl;
		
		
		cout<<"Current Runs: "<<ts<<endl;
		cout<<"Runs on last ball: "<<lastrun<<endl;
		cout<<"Balls:"<<endl;
		cout<<"Full toss,"<<endl;
		cout<<"Yorker,"<<endl;
		cout<<"Out-swinger,"<<endl;
		cout<<"In-swinger,"<<endl;
		cout<<"Bouncer,"<<endl;
		cout<<"Slower Ball"<<endl;
		cout<<""<<endl;
		cout<<"Choose a ball:"<<endl;
		
		string bn="";
		cin>>bn;
		cout<<"Current Ball: "<<bn<<endl;
		cout<<"Waiting for the opponent to play their turn . . ."<<endl;
		cout<<"Current Runs: "<<ts<<endl;
		cout<<"Runs on last ball: "<<lastrun<<endl;
		cout<<"Current Ball:"<<bn<<endl;
		cout<<"Possible Shots: "<<endl;
		possibleshot(bn);
		cout<<"Choose a shot:"<<endl;
		string sn="";
		cin>>sn;
		int z,z1,z2;
		z=shots[sn];
		z2=z%10;
		z1=z/10;
		double p;
		p=prob(z1,balls[bn]);
		if(p>=0.5)
		{
		cout<<"YOU HIT A "<<z2<<endl;
		lastrun=z2;
		}
		else
		{
		cout<<"You missed"<<endl;
		lastrun=0;
		}
		ts+=lastrun;
		
	}
	cout<<"Final Score"<<ts<<endl;
	int ts2=0,lastrun2=0;
	for(int i=0;i<6;i++)
	{
		cout<<"Second Innings, Player 2 has to chase the target score of"<<(ts+1)<<endl;
		
		
		cout<<"Current Runs: "<<ts2<<endl;
		cout<<"Runs on last ball: "<<lastrun2<<endl;
		cout<<"Balls:"<<endl;
		cout<<"Full toss,"<<endl;
		cout<<"Yorker,"<<endl;
		cout<<"Out-swinger,"<<endl;
		cout<<"In-swinger,"<<endl;
		cout<<"Bouncer,"<<endl;
		cout<<"Slower Ball"<<endl;
		cout<<""<<endl;
		cout<<"Choose a ball:"<<endl;
		
		string bn="";
		cin>>bn;
		cout<<"Current Ball: "<<bn<<endl;
		cout<<"Waiting for the opponent to play their turn . . ."<<endl;
		cout<<"Current Runs: "<<ts2<<endl;
		cout<<"Runs on last ball: "<<lastrun2<<endl;
		cout<<"Current Ball:"<<bn<<endl;
		cout<<"Possible Shots: "<<endl;
		possibleshot(bn);
		cout<<"Choose a shot:"<<endl;
		string sn="";
		cin>>sn;
		int z,z1,z2;
		z=shots[sn];
		z2=z%10;
		z1=z/10;
		double p;
		p=prob(z1,balls[bn]);
		if(p>=0.5)
		{
		cout<<"YOU HIT A "<<z2<<endl;
		lastrun2=z2;
		}
		else
		{
		cout<<"You missed"<<endl;
		lastrun2=0;
		}
		ts2+=lastrun2;
	}
	if(ts2>ts)
	cout<<"Player 2 has Won"<<endl;
	else if(ts2==ts)
	cout<<"Match Tied"<<endl;
	else
	cout<<"Player 1 has Won"<<endl;
		
	}
	else
	{
		
	}
	
}
