//Given two dates find the difference between two dates in number of days.
/*
I/P: 20 6 2002 to 19 1 2023
O/P: 7518 days
*/

#include <stdio.h>
int isleap(int yr){
    if((yr%4==0 && yr%100!=0) || (yr%400==0)) return 1;
    return 0;
  }

int main() {
  int day1,mon1,yr1,day2,mon2,yr2,leapCount=0;
  scanf("%d%d%d%d%d%d",&day1,&mon1,&yr1,&day2,&mon2,&yr2);
  int yr_diff = yr2-yr1-1;
  
  for(int yr=yr1+1;yr<yr2;yr+=1){
      if((yr%4==0 && yr%100!=0) || (yr%400==0)) leapCount++;
  }
  
  int a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
  int daysCount=0;
  
  daysCount+=leapCount*366;
  daysCount+=(yr_diff-leapCount)*365;
  
  daysCount+=day2;
  mon2--;
  for(int mon=1; mon<=mon2; mon++){
    daysCount+=a[mon];
  }
  
  daysCount+=a[mon1]-day1;
  for(int mon=12; mon>mon1; mon--){
    daysCount+=a[mon];
  }
  
  if(isleap(yr1)&&mon1<=2){
    daysCount+=1;
  }
  if(isleap(yr2)&&mon2>2){
    daysCount+=1;
  }
  printf("%d",daysCount);
  return 0;
}
