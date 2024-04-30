#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    cout << "choose the shape and design you want to draw!" << endl;
    cout <<"triangle pattern 1"<<endl;
    cout <<"triangle pattern 2"<<endl;
    cout <<"triangle pattern 3"<<endl;
    cout <<"triangle pattern 4"<<endl;
    cout <<"triangle pattern 5"<<endl;
    cout <<"triangle pattern 6"<<endl;
    cout <<"7-diamond"<<endl;
    cout <<"triangle pattern 8"<<endl;
    cout <<"triangle pattern 9"<<endl;
    cout <<"triangle pattern 10"<<endl;
    cout <<"triangle pattern 12"<<endl;
    cout <<"triangle pattern 13"<<endl;
    cout <<"triangle pattern 14"<<endl;
    cout <<"triangle pattern 15"<<endl;
    cout <<"triangle pattern 16"<<endl;
    cout <<"triangle pattern 17"<<endl;
    cout <<"triangle pattern 18"<<endl;
    cout <<"triangle pattern 19"<<endl;
    cout <<"triangle pattern 20"<<endl;
    cout <<"triangle pattern 21"<<endl;
    cout <<"triangle pattern 22"<<endl;
    cout <<"triangle pattern 23"<<endl;
    cout <<"triangle pattern 24"<<endl;
    cout <<"triangle pattern 25"<<endl;
    cout <<"triangle pattern 26"<<endl;
    cout <<"triangle pattern 27"<<endl;
    cout <<"triangle pattern 28"<<endl;
    cout <<"triangle pattern 29"<<endl;
    cout <<"triangle pattern 30"<<endl;
    cout <<"triangle pattern 31"<<endl;
    cout <<"triangle pattern 32"<<endl;
    cout <<"triangle pattern 33"<<endl;
    cout <<"triangle pattern 34"<<endl;
    cout <<"triangle pattern 35"<<endl;
    cout <<"triangle pattern 36"<<endl;
    cout <<"triangle pattern 37"<<endl;
    cout <<"triangle pattern 38"<<endl;
    cout <<"triangle pattern 39"<<endl;
    cout <<"triangle pattern 40"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;

    if (choice==1){
        int n;
        cout<<"enter your number to make the triangle"<<endl;
        cin>>n;
        for (int i=1;i<=n;i++){
            for (int j=1;j<=i;j++){
                cout<<"*";
            }
        cout<<endl;
        }

    }
    if (choice==2){
        int n;
        cout<<"enter your number to make the triangle"<<endl;
        cin>>n;
     for (int i=n;i>=1;i--){
        for (int j=i;j>0;j--){
           cout<<"*";

     }
      cout<<endl;
    }
    }
    if (choice==3){
            int n;
        cout<<"enter your number to make the triangle"<<endl;
        cin>>n;
        for (int i=1;i<=n;i++){
            for (int k=n-i;k>0;k--){
                cout<<" ";
            }
            for (int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }

    }
    if (choice==4){

      int n;
        cout<<"enter your number to make the triangle"<<endl;
        cin>>n;
        for (int i=n;i>=1;i--){
                for (int k=n-i;k>0;k--){
                cout<<" ";
            }
             for (int j=i;j>0;j--){
           cout<<"*";

     }
      cout<<endl;

    }
    }
    if (choice==5){
        int n;
        cout<<"enter your number to make the triangle"<<endl;
        cin>>n;

        for (int i=1;i<=n;i++){
            for (int k=n-i;k>0;k--){
                cout<<" ";
            }
            for (int j=1;j<=(2*i)-1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }

    if (choice==7){

        int n;
        cout<<"enter your number to make the diamond"<<endl;
        cin>>n;

        for (int i=1;i<=n;i++){
            for (int k=n-i;k>0;k--){
                cout<<" ";
            }
            for (int j=1;j<=(2*i)-1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        for (int i=n-1;i>=1;i--){

            for (int k=n-i;k>0;k--){
                cout<<" ";
            }
            for (int j=1;j<=(2*i)-1;j++){
                cout<<"*";
            }
            cout<<endl;

        }

}
if (choice==6){
         int n;
        cout<<"enter your number to make the triangle"<<endl;
        cin>>n;
        for (int i=n;i>=1;i--){
        for (int j=i;j>0;j--){

            cout<<"*";
        }
        cout<<endl;
    }

}
if (choice==8){
         int n;
        cout<<"enter your number to make the triangle"<<endl;
        cin>>n;
        for (int i=n;i>=1;i--){
        for (int j=i;j>0;j--){

            cout<<"*";
        }
        for (int k=n-i;k>0;k--){
                cout<<" ";
            }


        for (int k=n-i;k>0;k--){
                cout<<" ";
            }

        for (int j=i;j>0;j--){

            cout<<"*";
        }
       cout<<endl;
        }

}
  if (choice==9){
         int n;
         char x='A';
        cout<<"enter your number to make the triangle"<<endl;
        cin>>n;
        for (int i=n;i>=1;i--){
            x='A';
         for (int j=i;j>0;j--){

            cout<<x;
            x++;
        }
         for (int k=n-i;k>0;k--){
                cout<<" ";
            }


        for (int k=n-i;k>0;k--){
                cout<<" ";
            }
        if (i==5){
            x-=2;
            for (int j=i;j>0;j--){

            cout<<x;
            x--;
        }


        }
        else {
            x--;
             for (int j=i;j>0;j--){

            cout<<x;
            x--;
        }

        }
        cout<<endl;
        }


  }
  if (choice==10){
         int n;
        cout<<"enter your number to make the triangle"<<endl;
        cin>>n;

    for (int i=1;i<=n;i++){
         for (int j=1;j<=n;j++){
            cout<<"*";
         }
       cout<<endl;
    }

  }
  if (choice==11){
          int n;
        cout<<"enter your number to make the triangle"<<endl;
        cin>>n;
      for (int i=1;i<=n;i++){
        for (int j=n;j>=i;j--){
            cout<<"*";
        }
        for (int k=2;k<(2*i)-1;k++){
            cout<<" " ;
        }
        if (i==1){
            cout<<"\b";
        }
        for (int j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;

      }

    for (int i=n-1;i>=1;i--){
        for (int j=n;j>=i;j--){
            cout<<"*";

        }
        for (int k=1;k<=2*(i-1)-1;k++){
            cout<<" " ;
        }
        if (i==1){
            cout<<"\b";
        }
        for (int j=n;j>=i;j--){
            cout<<"*";

        }
        cout<<endl;

    }
  }
  if (choice==12){

        int n;
        cout<<"enter your number to make the triangle"<<endl;
        cin>>n;
        for (int i=1;i<=n;i++){
            for (int k=n-i;k>=1;k--){
                cout<<" ";
            }
            for (int j=1;j<=i;j++){
                cout<<"* ";
            }
            for (int k=n-i;k>=1;k--){
                cout<<" ";
            }
            cout<<endl;
        }

  }
 if (choice==13){
        int n;
        cout<<"enter your number to make the triangle"<<endl;
        cin>>n;
        for (int i=0;i<=n;i++){
            for (int k=n-i;k>=1;k--){
                cout<<" ";
            }
       int chara=1;
       int num=i;
       int den=1;
       for (int j=0;j<=i;j++){
                cout<<chara;
                chara=chara*num;
                chara=chara/den;
                num--;
                den++;
            }
            cout<<endl;
        }
 }
 if (choice==14){
        int n;
        cout<<"enter your number to make the triangle"<<endl;
        cin>>n;
        for (int i=1;i<=n;i++){
            for (int j=1;j<=i;j++){
                cout<<i;
            }
            cout<<endl;
        }

 }
 if (choice==15){
         int n;
        cout<<"enter your number to make the triangle"<<endl;
        cin>>n;
        for (int i=1;i<=n;i++){
            for (int j=1;j<=i;j++){
                cout<<j;
            }
            cout<<endl;
        }

 }
 if (choice==16){
         int n;
         int p=0;
        cout<<"enter your number to make the triangle"<<endl;
        cin>>n;
        for (int i=1;i<=n;i++){
            for (int j=1;j<=i;j++){

                p++;
                cout<<p;
            }
            cout<<endl;
        }

 }
 if (choice==17){
         int n;

        cout<<"enter your number to make the triangle"<<endl;
        cin>>n;
        for (int i=1;i<=n;i++){
            for (int k=n-i;k>=1;k--){
                cout<<" ";
            }

            for (int j=1;j<=i;j++){
                cout<<i<<" ";
            }
            cout<<endl;

        }

 }
 if (choice==18){
    int n;

        cout<<"enter your number to make the triangle"<<endl;
        cin>>n;
        for (int i=1;i<=n;i++){
            for (int k=n-i;k>=1;k--){
                cout<<" ";
            }

            for (int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            cout<<endl;

        }
 }
 if (choice==19){
    int n;
    int p=0;
        cout<<"enter your number to make the triangle"<<endl;
        cin>>n;
        for (int i=1;i<=n;i++){
            for (int k=n-i;k>=1;k--){
                cout<<" ";
            }

            for (int j=1;j<=i;j++){
                p++;
                cout<<p<<" ";
            }
            cout<<endl;

        }
 }
 if (choice==20){

        int n;
        cout<<"enter your number to make the triangle"<<endl;
        cin>>n;
        for (int i=1;i<=n;i++){
            for (int j=1;j<=i;j++){
                cout<<i*j;
            }
            cout<<endl;
        }

 }
   if (choice==21){
        int n;
        int s=0;
        cout<<"enter your number but it should be even"<<endl;
        cin>>n;
        if (n%2==0){
    for (int i=2;i<=n;i+=2){
        int fact=1;
        for (int j=1;j<=i;j++){
            fact=fact*i;
        }
        s=s+fact;
       cout<<s<<endl;;
    }
        }
        else {
            cout<<"you should enter an even number"<<endl;
        }
 }
 if (choice==22){
        int n;
        cout<<"enter your number "<<endl;
        cin>>n;
        for (int i=1;i<=n;i++){
           for (int j=1;j<=n;j++){
            if (j==3||i==3){
                cout<<"x";
            }
            else{
                cout<<" ";
            }
           }
           cout<<endl;
        }
 }
 if (choice==23){
        int n;
        cout<<"enter your number "<<endl;
        cin>>n;
        for (int i=1;i<=n;i++){
           for (int j=1;j<=n;j++){
            if (j==3||i==3){
                cout<<"x";
            }
            else{
                cout<<"o";
            }
           }
           cout<<endl;
        }

 }
 if (choice==24){
   int n;
        cout<<"enter your number "<<endl;
        cin>>n;
        for (int i=1;i<=n;i++){
           for (int j=1;j<=n;j++){
                if (i==j){
                    cout<<"o";
                }
                else{
                    cout<<"x";
                }
           }
           cout<<endl;
           }
 }
 if (choice==25){
        int n;
        cout<<"enter your number "<<endl;
        cin>>n;
        for (int i=1;i<=n;i++){
           for (int j=1;j<=n;j++){
                if (i==j){
                    cout<<"x";
                }
                else{
                    cout<<"-";
                }
           }
           cout<<endl;
           }

 }
 if (choice==26){
    int n;
        cout<<"enter your number "<<endl;
        cin>>n;
        for (int i=1;i<=n;i++){
           for (int j=1;j<=n;j++){
                if (i==j){
                    cout<<"x";
                }
                else if ((i+j)==(n+1)){
                    cout<<"x";
                }
                else {
                    cout<<" ";
                }
           }
           cout<<endl;
           }
 }
   if (choice==27){
           int n;
        cout<<"enter your number "<<endl;
        cin>>n;
          for (int i=1;i<=n;i++){
           for (int j=1;j<=n;j++){
                if (i==1||i==n ||j==1||j==n){
                    cout<<"*";
                }
                else {

                    cout<<" ";

                }
           }


         cout<<endl;
          }
   }

        if (choice==28){
           int n;
        cout<<"enter your number "<<endl;
        cin>>n;
          for (int i=1;i<=n;i++){
           for (int j=1;j<=n;j++){
                if (i==1||i==n ||j==1||j==n){
                    cout<<"*";
                }
                else {

                    cout<<"#";

                }
           }
          cout<<endl;
          }
   }


if (choice==29){


        int n;
        cout<<"enter your number "<<endl;
        cin>>n;
          for (int i=1;i<=n;i++){
           for (int j=1;j<=n;j++){
                if (i==n|| i==1){
                    cout<<"*";
                }
               else if (j>1&& j<n){


                    cout<<" ";

               }
               else {
                cout<<"*";
               }
           }
           cout<<endl;
          }
}
        if (choice ==30){
            //another code to the same of (x)
        int n;
        cout<<"enter your number "<<endl;
        cin>>n;
            for (int i=1;i<=n;i++){
                for (int j=1;j<=n;j++){
                    if (i==(n/2)+1 ||j==(n/2)+1){
                        cout<<"$";
                    }
                    else {
                        cout<<" ";
                    }
                }
                cout<<endl;
            }
          }


if (choice==31){
         int n;
        cout<<"enter your number "<<endl;
        cin>>n;
    for (int i=n;i>=-n;i--){
        for (int j=n;j>=abs(i);j--){
             cout<<"*";

        }
      cout<<endl;
    }
}
    if (choice==32){
       int n;
        cout<<"enter your number "<<endl;
        cin>>n;
    for (int i=n;i>=-n;i--){
        for (int j=n;j>=abs(i);j--){
             cout<<j;

        }
      cout<<endl;
    }
}

   if (choice==33){
        int n;
        cout<<"enter your number "<<endl;
        cin>>n;
    for (int i=n;i>=-n;i--){
        for (int j=n;j>=abs(i);j--){

            printf("%c",j+65);
        }
      cout<<endl;
    }

}
if (choice==34){
     int n;
        cout<<"enter your number "<<endl;
        cin>>n;
    for (int i=n;i>=-n;i--){
        for (int j=abs(i);j<=n;j++){

           cout<<j;
        }
      cout<<endl;
    }
}
if (choice==35){
         int n;
        cout<<"enter your number "<<endl;
        cin>>n;
    for (int i=n;i>=-n;i--){
         for (int j=abs(i);j<=n;j++){

            printf("%c",j+65);
        }
      cout<<endl;
    }

}
if (choice==36){
        int n;
        cout<<"enter your number "<<endl;
        cin>>n;
        for (int i=1;i<=n;i++){
            for (int k=n-i;k>0;k--){
                cout<<" ";
            }
            for (int j=1;j<=i;j++){
                cout<<"* ";
            }
            for (int k=1;k<=(2*i)-1;k++){
                cout<<" ";
            }

            cout<<endl;

        }
}
if (choice==37){
    int n;
    cout<<"enter your number "<<endl;
    cin>>n;
    int px=n;
    int py=n;

        for (int i=1;i<=n;i++){
            for (int j=1;j<2*n;j++){
                if (j==px||j==py){
                    cout<<"*";
                }
                else {
                    cout<<" ";
                }

            }
            px--;
            py++;
            cout<<endl;

        }
}
if (choice==38){
    int n;
    cout<<"enter your number "<<endl;
    cin>>n;
    int px=1;
    int py=2*n-1;

        for (int i=1;i<=n;i++){
            for (int j=1;j<2*n;j++){
                if (j==px||j==py){
                    cout<<"*";
                }
                else {
                    cout<<" ";
                }

            }
            px++;
            py--;
            cout<<endl;

        }
}
if (choice==39){
        int n;
    cout<<"enter your number "<<endl;
    cin>>n;
    int px=n;
    int py=n;

        for (int i=1;i<=n;i++){
            for (int j=1;j<2*n;j++){
                if (j==px||j==py){
                    cout<<i;
                }
                else {
                    cout<<" ";
                }

            }
            px--;
            py++;
            cout<<endl;

        }


}
if (choice==40){
        int n;
    cout<<"enter your number "<<endl;
    cin>>n;
    int px=n;
    int py=n;

        for (int i=1;i<=n;i++){
            for (int j=1;j<2*n;j++){
                if (j==px||j==py){
                   printf("%c",i+64);
                }
                else {
                    cout<<" ";
                }

            }
            px--;
            py++;
            cout<<endl;

        }


}
    return 0;
}
