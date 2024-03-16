
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

    if (b > 0 && a > 0) {
      int resultado = a / b;
      cout << resultado << endl;

    } else if ( b == 0) {
    cout << "Impossible" << endl; 
    }
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

  if (65 <= character && character < 96) {
    cout << "upper-case alphabet" << endl;
  
  } else if (97 <= character && character <= 122) {
    cout << "lower-case alphabet" << endl;

  } else if (32 <= character && character <= 64) {
    cout << "not an alphabet" << endl;
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

  double pi = 3.14;
  double directions = 4;
  double result;

    if(r > 0 ) {
      result = pi * r * r * directions;
      cout << result << endl;
    
    } else if (r == 0) {
      cout << r << endl;
  
    } else {
      cout << "Error: Radius cannot be negative." << endl;
    }
}  

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE

  long int hour;
  long int minutes;
  long int new_seconds;

    if (seconds >= 0 && seconds < 3600)
    {
        hour = 0;
        minutes = seconds / 60;
        seconds = seconds % 60;
    }
    else if (seconds >= 3600)
    {
        hour = seconds / 3600;
        new_seconds = seconds % 3600;
        minutes = new_seconds / 60;
        seconds = new_seconds % 60;
    }
    else
    {
        cout << "Error: Input seconds cannot be negative." << endl;
       // Exiting the program with an error code
    }

    // Output formatting
    cout << ((hour < 10) ? "0" : "") << hour << ":"
         << ((minutes < 10) ? "0" : "") << minutes << ":"
         << ((seconds < 10) ? "0" : "") << seconds << endl;
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

 /* if (number != 11235813) {
    cout << "Esto no es de Fibonacci " << endl;

  } else if (number == 11235813) {
    cout << "Se encontro a Fibonacci " << endl;
  }*/
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