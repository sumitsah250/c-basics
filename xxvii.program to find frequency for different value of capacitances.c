// r and l will be provided by user and capaciter range is 0.01 to 0.1 and change is 0.01
#include<stdio.h>
#include<math.h>

float freq(float,float, float);
int main(){
    float l,r,f;
    int c;
    printf("enter the value of inductance and resistance:");
    scanf("%f%f",&l,&r);
    for(c=1;c<=1.1;c+=0.01){                   /////can't find why the loop become infinite
        
        f=freq(l,r,c);
        printf("the frequency at %d c is :%f\n",c,f);
    }
    return 0;
}
float freq( float l,float r, float c){
    float f;
    f=sqrt(1/(l*c)+r*r/(4*c*c));
    return f;
}

