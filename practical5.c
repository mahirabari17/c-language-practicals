#include<stdio.h>
int main(){
long long total_population = 1441981744;
float per_women = 48.4;
float per_men = 100 - per_women;
float literacy_women=62.84;
float literacy_men=80.95;

 double total_women=(per_women/100)*total_population;
 double total_men=(per_men/100)*total_population;

 double lit_women=(literacy_women/100)*total_women;
 double lit_men=(literacy_men/100)*total_men;
 double illiterate_men = total_men - lit_men;
double illiterate_women = total_women - lit_women;

    printf(" Education Data Analysis (Bharat 2024)\n");
    printf("Total Population: %lld\n", total_population);
    printf("Men: %f\n", total_men);
    printf("Women: %f\n\n",total_women);

    printf("Illiterate Men: %f\n", illiterate_men);
    printf("Illiterate Women: %f\n", illiterate_women);

    return 0;


}
