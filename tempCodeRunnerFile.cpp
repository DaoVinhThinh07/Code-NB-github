#include <iostream>
using namespace std;
int main()
  {  int d, m, y;
    cout<<"Nhap: ngay..thang..nam.. muon kiem tra"<<endl;
    cin>>d>>m>>y;
     if(y<=0) 
      cout<<"Nam khong hop le.";
      else
       switch(m)
      { 
          case 1 : if(d<=0 || d>31)
                  cout<<d<<"/"<<m<<"/"<<y<<" la ngay khong hop le.";  
                   else cout<<d<<"/"<<m<<"/"<<y<<" la ngay hop le."; break;

          case 2 : if(y%4==0 && y%100!=0)
                    {  if(d>29) cout<<d<<"/"<<m<<"/"<<y<<" la ngay khong hop le.";
                      else cout<<d<<"/"<<m<<"/"<<y<<" la ngay hop le."; }
                   else 
                    {  if(d>28) cout<<d<<"/"<<m<<"/"<<y<<" la ngay khong hop le.";
                       else cout<<d<<"/"<<m<<"/"<<y<<" la ngay hop le.";
                    }
                 break;
                   
          case 3 : if(d<=0 || d>31)
                  cout<<d<<"/"<<m<<"/"<<y<<" la ngay khong hop le.";  
                   else cout<<d<<"/"<<m<<"/"<<y<<" la ngay hop le."; break;

          case 4 : if(d<=0 || d>30)
                  cout<<d<<"/"<<m<<"/"<<y<<" la ngay khong hop le.";  
                   else cout<<d<<"/"<<m<<"/"<<y<<" la ngay hop le."; break;

          case 5 : if(d<=0 || d>31)
                  cout<<d<<"/"<<m<<"/"<<y<<" la ngay khong hop le.";  
                   else cout<<d<<"/"<<m<<"/"<<y<<" la ngay hop le."; break;

          case 6 : if(d<=0 || d>30)
                  cout<<d<<"/"<<m<<"/"<<y<<" la ngay khong hop le.";  
                   else cout<<d<<"/"<<m<<"/"<<y<<" la ngay hop le."; break;

          case 7 : if(d<=0 || d>31)
                  cout<<d<<"/"<<m<<"/"<<y<<" la ngay khong hop le.";  
                   else cout<<d<<"/"<<m<<"/"<<y<<" la ngay hop le."; break;

          case 8 : if(d<=0 || d>31)
                  cout<<d<<"/"<<m<<"/"<<y<<" la ngay khong hop le.";  
                   else cout<<d<<"/"<<m<<"/"<<y<<" la ngay hop le."; break;

          case 9 : if(d<=0 || d>30)
                  cout<<d<<"/"<<m<<"/"<<y<<" la ngay khong hop le.";  
                   else cout<<d<<"/"<<m<<"/"<<y<<" la ngay hop le."; break;

          case 10 : if(d<=0 || d>31)
                  cout<<d<<"/"<<m<<"/"<<y<<" la ngay khong hop le.";  
                   else cout<<d<<"/"<<m<<"/"<<y<<" la ngay hop le."; break;

          case 11 : if(d<=0 || d>30)
                  cout<<d<<"/"<<m<<"/"<<y<<" la ngay khong hop le.";  
                   else cout<<d<<"/"<<m<<"/"<<y<<" la ngay hop le."; break;

          case 12 : if(d<=0 || d>31)
                  cout<<d<<"/"<<m<<"/"<<y<<" la ngay khong hop le.";  
                   else cout<<d<<"/"<<m<<"/"<<y<<" la ngay hop le."; break;  
          
      default :cout<<"Thang khong hop le.";
      }
return 0;
   }