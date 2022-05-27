#include<stdio.h>
void birth_calculate();

int main(){
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        printf("Case #%d: ",i);
        birth_calculate();
    }
    return 0;
}
void birth_calculate(){
    int date_today;
    int date_birthday;
    int month_today;
    int month_birthday ;
    int year_today;
    int year_birthday;
    int ans;
    scanf("%d/%d/%d", &date_today, &month_today, &year_today);
    scanf("%d/%d/%d", &date_birthday, &month_birthday, &year_birthday);

    if(year_birthday > year_today || (year_birthday >= year_today && month_birthday > month_today) 
        || (year_birthday >= year_today && month_birthday >= month_today && date_birthday > date_today)){
        printf("Invalid birth date\n");
    }
    
    else{
        if(month_birthday > month_today || month_birthday == month_today && date_birthday > date_today){
            ans = year_today - year_birthday - 1;
            if(ans > 130){
                printf("Check birth date\n");
            }
            else printf("%d\n", ans);
        }
        else {
            ans = year_today - year_birthday;
            if(ans > 130){
                printf("Check birth date\n");
            }
            else printf("%d\n", ans);
        }
    }
}
