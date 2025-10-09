#ifndef TAXI_PRICE_H
#define TAXI_PRICE_H

int dn(int dis);
int df(int dis);
int airPortPrice(int type, int direction);
int longTimePrice();
int oneWayPrice();
int price(char serv);
int dayPrice(int dd, int day);
int weekPrice(int dd, int day);
bool minPrice(char serv, int res);

#endif
