using namespace std;

#include "stock_option.h"

StockOption::StockOption( std :: string the_symbol ):Stock(the_symbol)
{
 strike_price=0;
}

void StockOption::set_strike_price ( double the_strike_price )
{
 strike_price=the_strike_price;
}

double StockOption::get_strike_price () const 
{
 return strike_price;
}

double StockOption:: sell_value () const
{
 double shareVal=get_share_value();
 double purchPrice=get_purchase_price();
 double holds=get_holdings();
 double base_sell=shareVal*holds;
 double strikeSell=strike_price-purchPrice;
 strikeSell=strikeSell*holds;
 double total=strikeSell-base_sell;
 return total;
}
