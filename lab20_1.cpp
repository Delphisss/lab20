#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1,Rect r2){
	double x1 , y1 , x2 , y2 , x , y , xo , yo , w ,h ;
	x1 = r1.x + r1.w;
	y1 = r1.y - r1.h;
	x2 = r2.x + r2.w;
	y2 = r2.y - r2.h;
	if(r1.x > r2.x){
		x = r1.x;
	}else{
		x = r2.x;
	}
	if(r1.y < r2.y){
		y = r1.y;
	}else{
		y = r2.y;
	}
	if(x1 < x2){
		xo = x1;
	}else{
		xo = x2;
	}
	if(y1 > y2){
		yo = y1;
	}else{
		yo = y2;
	}
	w = xo - x;
	h = y - yo;
	if(w >= 0 && h >= 0) return h*w;
	else return 0;


}

int main(){
	Rect R1 = {-1,2,6.9,9.6};
	Rect R2 = {0,0,1.2,2.5};	
	cout << overlap(R1,R2);
}

