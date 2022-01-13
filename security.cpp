using namespace std;

#include "security.h"

Security::Security(std :: string the_symbol)
{
 symbol=the_symbol;
 share_value=0;
 holdings=0;
}

std :: string Security:: get_symbol () const
{
 return symbol;
}

void Security:: set_share_value (double current_share_value )
{
 share_value=current_share_value;
}

double Security:: get_share_value () const 
{
 return share_value;
}

void Security:: set_holdings ( nt number_of_holdings )
{
 holdings=number_of_holdings;
}

int Security::get_holdings () const
{
 return holdings;
}

double Security:: market_worth () const 
{
 double total=0;
 total=holdings*share_value;
 return total;
}
	
