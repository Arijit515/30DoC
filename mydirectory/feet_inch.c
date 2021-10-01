#include <stdio.h>

struct distance{
    int feet;
    int inch;
};

void addDistance(struct distance d1,struct distance d2){
    struct distance d3;
    d3.feet= d1.feet + d2.feet;
    d3.inch= d1.inch + d2.inch;
    
    d3.feet= d3.feet + d3.inch/12; 
    d3.inch= d3.inch%12;
    
    printf("\nTotal distance- Feet: %d, Inches: %d",d3.feet,d3.inch);
}

int main()
{
    struct distance d1,d2;
    printf("Enter first distance in feet & inches:");
    scanf("%d%d",&d1.feet, &d1.inch);
    
    printf("Enter second distance in feet & inches:");
    scanf("%d%d",&d2.feet, &d2.inch);
  
    addDistance(d1,d2);
    return 0;
}
