using namespace std;
#include <iostream>

#include "stock.h"

Stock::Stock ( std :: string the_symbol ): Security(the_symbol)
{
 purchase_price=0;
}

void Stock::set_purchase_price ( double the_purchase_price )
{
 purchase_price=the_purchase_price;
}

double Stock:: get_purchase_price() const
{
 return purchase_price;
}

double Stock::sell_value() const
{
 double total=0;
 double ShareVal= get_share_value();
 double hold=get_holdings();
 total=ShareVal-purchase_price;
 total=total*hold;
 return total;
}
