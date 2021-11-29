 /*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Vishal Choday
 */
//I used around 11 functions.  I basically used a function for each task because it makes it
 //makes it organized.  

#include "std_lib_facilities.h"
void lets_print(const vector<string> &RS, string cancellingitnow, std::ostream jagrar)

{ 
	for (string mbusa : RS) 
	{
		if (mbusa == cancellingitnow) 
		return;
		jagrar << mbusa << '\n';
	}
}
void lets_print2(const vector<string>& RS, string cancellingitnow, std::ostream jagrar)
{
bool lets_find_it = false;

	for (string mbusa : RS) 
	{
		if (mbusa == cancellingitnow && lets_find_it) return;
		if (mbusa == cancellingitnow && !lets_find_it) lets_find_it = 1;
		jagrar << mbusa << '\n';

	}
}

vector<int> How_many_characters( const vector<string>& each_input_vector)
{
	if ( each_input_vector.size() == 0 ) error("There is an error");

	vector<int> vHow_many_characters; 
	for ( string audq : each_input_vector ) vHow_many_characters.push_back(  (int) audq.length() ); 

	return vHow_many_characters;
}
int element_thats_longest( const vector<string>& each_input_vector)
{
	int thelngst {-1};
	if ( each_input_vector.size() == 0 ) error("ERROR <longestEl>: Input argument inVec is empty.");

	for (int lexurx3 = 0; lexurx3 < each_input_vector.size(); ++lexurx3 )
	{
		
		if ((int)each_input_vector[ lexurx3 ].length() > thelngst) thelngst = (int) each_input_vector[ lexurx3 ].length();
	}
	return thelngst;
}


int this_shrtst_strng_here( const vector<string>& inVec)
{
	
	if ( inVec.size() == 0 ) error("input in vector is empty!");

	int thenumberofbytes { sizeof( int ) };
	double this_is_shrt { pow(2, thenumberofbytes / 2 * 8) }; 

	for ( int oop = 0; oop < inVec.size(); ++oop )
	{
		if ( inVec[ oop ].length() < this_is_shrt) this_is_shrt = inVec[ oop ].length();
	}
	return this_is_shrt;
}
vector<string> secondvectrthatsreversed(vector<string>& LM) 
{
	for (int nvda = 0; nvda < LM.size() / 2; ++nvda) 
	{
		swap(LM[nvda], LM[LM.size() - 1 - nvda]);
	}
	return LM;
}

string cal_low_cse_nums( const string&stng_in_input )
{
	int its_difference_here {char{'a'} -char{'A'}}; 								
	string string_thats_the_longest { ""};

	for ( char chvn : stng_in_input  )
	{
		if ( chvn < 'a') 
			
			string_thats_the_longest += char( chvn + its_difference_here );
		else string_thats_the_longest += chvn;
	}
	return string_thats_the_longest;
}
string lexicographicallynumone( const vector<string>& inVec)
{

	if ( inVec.size() == 0 ) error("in first lexi, its empty.");

	string first {"zz"}; 

	for( string yess : inVec)
	{
		if (cal_low_cse_nums( yess ) < first ) first = yess;
	}

	return first;
}
double maxv(vector<double> tin) 
{
	
	double this_i_the_maximum_here = tin[0];
	    for (double sim : tin)
		if (sim > this_i_the_maximum_here)
			this_i_the_maximum_here = sim;
	return this_i_the_maximum_here;
}

string thelastfor_lexicorgraphically( const vector<string>& inVec)
{
	string this_the_lst {"aa"}; 
	for( string vw :inVec)
	{
		if ( cal_low_cse_nums( vw ) >this_the_lst )this_the_lst =vw;
	}
	return this_the_lst;
}

int main()
{
	vector<string> kk{"Chair", "Dawn", "Top", "Hold", "Zap" };
	cout << "number of characters in vector element:" << endl;
	for ( int ano : How_many_characters(kk) ) cout <<ano << endl;
	cout << "the longest element has how many characters?: " 	<< element_thats_longest(kk ) << endl;
	cout << "the shortest element has how many characters?: " << this_shrtst_strng_here(kk ) << endl;
	cout << "last element lexicographically: " 	<< thelastfor_lexicorgraphically(kk ) << endl;
	cout << "first element lexicographically: " << lexicographicallynumone(kk ) << endl;
	return 0;
}
vector<int> firstvectorreversing(const vector<int> &gls) 
{
	vector<int>glb;
	glb.resize(gls.size());
int forst;
	for ( forst = 0; forst < gls.size(); ++forst) 
	{
		glb[gls.size() - forst - 1] = gls[forst];
	}
	return glb;
}
