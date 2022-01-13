# ifndef STOCK_SHARE_H
# define STOCK_SHARE_H

# include <string>
# include "security.h"

class Stock : public Security
{
 public :
// create a stock with the given company symbol
Stock ( std :: string the_symbol );

// set the purchase price of the holdings
void set_purchase_price ( double the_purchase_price );

// purchase price
double get_purchase_price () const ;

// compute the net worth of the stock holdings
virtual double sell_value () const ;

private :
double purchase_price = 0; // price per holding
};

# endif
