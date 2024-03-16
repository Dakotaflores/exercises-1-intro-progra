
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) { 

  if (s1 < s2 && s1 < s3) {
    cout << s1 ;
  } else if(s2 < s1 && s2 < s3) {
    cout << s2;
  } else {
    cout << s3;
  }
}


void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE

double D = B * B - 4 * A * C ;
    if (D > 0 && A != 0)
    {
         double d_sqrt = sqrt (D);
         double x1 = (-B + d_sqrt)  / (2*A);
         double x2 = (-B - d_sqrt) /  (2*A); 
         cout<<x1<<" "<<x2<<endl;
    }
    else if (D==0 && A != 0)
    {
    double d_sqrt = sqrt (D);
    double x1 = (-B + d_sqrt) / (2*A);
    cout<<x1<<endl;
    }
    else if(A==0 && B!=0)
    {
          cout<< (-1*(C))/B <<endl; 
    }
    else if (A!=0 && B==0 )
    {
        cout<< sqrt (C/A) << endl; 
    }
    else
    {
          cout<<"";
    }
}

void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE

  /*if (b == 0);
        cout << "Impossible" << endl;
  else 
        cout << a / b << endl;*/
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE

  double desc;
  double cost_total;
  double cost_normal;
  double desc_especial;

    if (n > a && n < b) {
      desc = n * x / 100;
      cost_total = n - desc;
    cout << cost_total << endl;

    } else if (n > b && n > a) {
      desc = n * y / 100;
      cost_total = n - desc;
    cout << cost_total << endl;

    } else if (n < a && n < b) {
    cout << n << endl;

    } else;
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE

  cout << "Ingresa una letra: " << endl;

  cin >> character;

  int ASCII = (int) character

  if (65 <= ASCII && ASCII < 96) {
    cout << "upper-case alphabet";
  
  } else if (97 <= ASCII && ASCII <= 122) {
    cout << "lower-case alphabet"

  } else if (32 <+ ASCII && ASCII <= 64) {
    cout << "not an alpahbet"
  }


}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE 
    
if (1 <= number && number <=7) {
       
  switch(number) {
    
        case 1:
            cout << "Monday\n"; 
            break;
        case 2:
            cout << "Thursday\n"; 
            break;
        case 3:
            cout << "Wednesday\n"; 
            break;
        case 4:
            cout << "Thursday\n"; 
            break;
        case 5:
            cout << "Friday\n"; 
            break;
        case 6:
            cout << "Saturday\n"; 
            break;
        case 7:
            cout << "Sunday\n"; 
            break;
    }
 } else {
   cout <<"Invalid input\n";
 }
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE

/*const float pi = 3.14;
const int directions = 4; 

    if(radio > 0 ) {
      float result = directions * pi * radio * radio;
      cout << result;
    
    } else {
      cout << " Error: Radius cannot be negative";
    }*/
}  

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}