#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
string uppercase(string check);

int main(){

  string table;
  string check;
  bool b_check;
  int col;
  int row;

  cout<<"Enter name of the table :";
  cin>>table;

  cout<<"Enter columns :";
  cin>>col;

  cout<<"Enter rows : ";
  cin>>row;
  
  ///////////////////////////////////////////////////
  cout<<"would you like to give table names [yes/no] :";
  cin>>check;
  check = uppercase(check);

  
	if(check == "YES" )
    b_check = true;

  else
    b_check = false;

  ///////////////////////////////////////////////////

  string table_name [col];
  string table_value [row][col];
  string row_name [row];

  ///////////////////////////////////////////////////
  if( b_check == true){

    cout<<""<<endl;
    for( int i = 0; i < col; i++ ){

        cout<<"Enter num " << (i+1) << " column name: ";
        cin >> table_name[i];     
      }
    cout<<""<<endl;
  }
  /////////////////////////////////////////////////
  
  cout<<""<<endl;
  for( int j = 0; j < row; j++ ){ 
    
    cout<<"enter row"<<j+1<<endl;
  
    for( int i = 0; i < col; i++ ){

      cout<<"Enter row " << j+1 <<" "<< table_name[i] << " col value: ";
      cin >> table_value[j][i];     
    }
    cout<<""<<endl;
  }
  
  cout<<""<<endl;
  cout<<""<<endl;

  //////////////////////////////////////////////////

  cout<<"insert into "<<table<<endl;
  cout<<"values"<<endl;

  for( int j = 0; j < row; j++ ){ 
    
    cout<<"(";

    for( int i = 0; i < col; i++ ){
        cout<<"\""<<table_value[j][i]<<"\"";

        if ( i != col-1)
          cout<<",";

    }

    cout<<")";

    if( j == row-1)
      cout<<";";

    else{
      cout<<","<<endl;
    }
  }

  /////////////////////////////////////////////////

  cout<<""<<endl;
  cout<<""<<endl;
  cout<<""<<endl;
  cout<<""<<endl;

  cout<<"happy coding"<<endl;

 
}


string uppercase(string check){

  for(int i = 0; i < check.length(); i++  ){
    if( check [i] >= 97 && check [i] <=122){
      check[i] -= 32;
    } 
    
  }
   return check;
}
