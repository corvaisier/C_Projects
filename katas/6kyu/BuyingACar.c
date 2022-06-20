// https://www.codewars.com/kata/554a44516729e4d80b000012
// Kyu: 6
int* nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth)
{
  int *return_this = malloc(8);
  result[0] = -1;
  result[1] = -1;
  double amount_saved = 0.0;
  int months = 0;
  double old_car_price = startPriceOld, new_car_price = startPriceNew;
  double percent_loss = percentLossByMonth;

  for (; result[0] == -1; months++) {
    if (new_car_price <= old_car_price + amount_saved) {
      result[0] = months;
      result[1] = round(old_car_price - new_car_price + amount_saved);
      return (result);
    }
    old_car_price *= 1.0 - (percent_loss / 100.0);
    new_car_price *= 1.0 - (percent_loss / 100.0);
    percent_loss += (months % 2 == 0) ? 0.5 : 0.0;
    amount_saved += savingperMonth;
  }
}