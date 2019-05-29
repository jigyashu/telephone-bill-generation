 //header files
 #include<iostream.h>
 #include<fstream.h>
 #include<stdlib.h>
 #include<conio.h>
 #include<stdio.h>
 #include<string.h>
class tbill
{
 unsigned long int tno;
 int plan,calls,month,year,cno;
 char name[40],address[100];
 float cost;

   void charges()
   {
       cout<<"\n\n"<<"SELECT PLAN NUMBER  ";
       cout<<"\n"<<"(1). 250";
       cout<<"\n"<<"(2). 350";
       cout<<"\n"<<"(3). 500";
       cout<<"\n"<<"(4). 699(with unlimited internet)";
       cout<<"\n"<<"(5). 750";
       cout<<"\n"<<"ENTER YOUR CHOICE : ";
       cin>>plan;
       if(plan==1)
       {
	  if(calls>60)
	    cost=((calls-60)*1.50)+250;
	  else if(calls<60)
	    cost=250;

       }
       else if(plan==2)
       {
	  if(calls>225)
	    cost=((calls-225)*1.10)+350;
	  else if(calls<225)
	    cost=350;
       }
       else if(plan==3)
       {  if(calls>450)
	     cost=((calls-450)*1.10)+500;
	  else if(calls<450)
	     cost=500;
       }
       else if(plan==4)
       {
	  cost=(calls*1.20)+699;
       }
       else if(plan==5)
       {
	  if(calls>750)
	     cost=((calls-750)*1.10)+750;
	  else if(calls<750)
	     cost=750;
       }
       else
	{cout<<"\nYOU ENTERED A WRONG PLAN";
	 cout<<"\nWE ARE PROVIDING YOU WITH PLAN 1";
	  if(calls>60)
	    cost=((calls-60)*0.80)+250;
	  else if(calls<60)
	    cost=250;
	}

   }
 public:

 tbill()
 {tno=0,cno=0;
  plan=0;calls=0;
  month=0;year=0;
  cost=0;
  strcpy(name,"NULL");
  strcpy(address,"NULL");
  }

void getdata()
{
  clrscr();
  cout<<"\n\t\t\t*****ADD RECORDS*****";
  cout<<"\n\nENTER CUSTOMER NUMBER : ";
  cin>>cno;
  cout<<"\nENTER TELEPHONE NUMBER : ";
  cin>>tno;
  cout<<"\nENTER MONTH AND YEAR FOR BILL (NUMERICAL VALUE) : ";
  cin>>month>>year;
  cout<<"\nENTER NAME OF CUSTOMER : ";
  gets(name);
  cout<<"\nENTER ADDRESS OF CUSTOMER : ";
  gets(address);
  charges();
  cout<<"\nENTER NUMBER OF CALLS : " ;
  cin>>calls;
  getch();
 }

void display()
{
   clrscr();
   cout<<"\n\n\t\t\t*****DISPLAY RECORDS*****";
   cout<<"\n\nTELEPHONE NUMBER    : "<<tno;
   cout<<"\nCUSTOMER NUMBER     : "<<cno;
   cout<<"\nNAME OF CUSTOMER    : "<<name;
   cout<<"\nADDRESS OF CUSTOMER : "<<address;
   cout<<"\nCALLS               : "<<calls;
   cout<<"\nCHARGES             : "<<cost;
   cout<<"\nBILL DATE           : "<<"01/"<<month<<"/"<<year;
   if(month==2)
   {
     if(year%4==0)
      cout<<"\nDUE DATE            : "<<"01/"<<month+1<<"/"<<year;
     else
      cout<<"\nDUE DATE            : "<<"02/"<<month+1<<"/"<<year;
   }
   else
    cout<<"\nDUE DATE            : "<<"30/"<<month<<"/"<<year;
    getch();
}

void modify()
{
   clrscr();
   cout<<"\n\n\t\t\t*****MODIFY*****";
   cout<<"\n\nTELEPHONE NUMBER    : "<<tno;
   cout<<"\nCUSTOMER NUMBER     : "<<cno;
   cout<<"\nNAME OF CUSTOMER    : "<<name;
   cout<<"\nADDRESS OF CUSTOMER : "<<address;
   cout<<"\nPLAN NUMBER         : "<<plan;
   cout<<"\nCALLS               : "<<calls;
   cout<<"\nCHARGES             : "<<cost;
   cout<<"\nBILL MONTH AND YEAR : "<<month<<"/"<<year;

 unsigned long int tno1;
 int plan1,calls1,calls2,month1,year1,cno1;
 char name1[40],address1[100];
 float cost1;
    plan1=retplan();
    cost1=retcost();
    calls1=retcalls();
    cout<<"\n\n"<<"ENTER `0` IN TO RETAIN ";
    cout<<"\n"<<"ENTER NEW TELEPHONE NUMBER : " ;
    cin>>tno1;
    cout<<"\n"<<"ENTER NEW CUSTOMER NUMBER : ";
    cin>>cno1;
    cout<<"\n"<<"ENTER NEW ADDRESS : " ;
    gets(address1);
    cout<<"\n"<<"ENTER NEW NAME : " ;
    gets(name1);
    cout<<"\n"<<"ENTER NEW MONTH(NUMERIC) : " ;
    cin>>month1;
    cout<<"\n"<<"ENTER NEW YEAR(NUMERIC) : " ;
    cin>>year1;
    cout<<"\n"<<"ENTER NUMBER OF CALLS : ";
    cin>>calls2;
    cout<<"\n"<<"ENTER NEW PLAN : ";
    charges();
    if(plan==0)
       {plan=plan1;
	cost=cost1;
	calls=calls1;
       }
    if(month1!=0)
     month=month1;
    if(year1!=0)
     year=year1;
    if(calls2!=0)
       calls=calls2;
    if(strcmp(name1,"0")!=0)
       strcpy(name,name1);
    if(tno1 !=0)
       tno=tno1;
    if(cno1 !=0)
       cno=cno1;
    if(strcmp(address1,"0")!=0)
       strcpy(address,address1);
}


  unsigned long int telno()
  {
    return tno;
  }
  int custno()
   {
      return cno;
   }
  int retplan()
   { return plan;
   }
  float retcost()
   {return cost;
   }
  int retcalls()
  {return calls;
  }
}t,te;


void plandetails()
{
clrscr();
cout<<"\t\t\t::::::::PLAN DETAILS::::::";
cout<<"\nPLAN NO.\tPLAN COST \tFREE CALLS \tCHARGES OF EXTRA CALLS";
cout<<"\n   1    \t  250     \t   60      \t    1.50  ";
cout<<"\n   2    \t  350     \t   225     \t    1.10  ";
cout<<"\n   3    \t  500     \t   450     \t    1.10  ";
cout<<"\n   4    \t  699     \t   0       \t    1.20  ";
cout<<"\n   5    \t  750     \t   750     \t    1.10  ";
getch();
}

void create() //function to create file and enter records
     {
	 ofstream fout;
	 fout.open("bill.dat",ios::out|ios::binary);
	 if(!fout)
	 cout<<"FILE CANNOT BE CREATED ";
	 t.getdata();
	 fout.write((char*)&t, sizeof(t));
	 cout<<"\nRECORD IS WRITTEN";
	 fout.close();
     }

void dispdata() //function to display records
    {
	 clrscr();
	 ifstream fin;
	 fin.open("bill.dat",ios::in|ios::binary);
	 if(!fin)
	 cout<<"FILE CAN'T BE OPENED ";
	 while(!fin.eof())
	   {
	     fin.read((char*)&t, sizeof(t));
	      t.display();
	   }
	 fin.close();

    }
void Add_record() //function to append or add records
     {
	 clrscr();
	 char ans='y';
	 ofstream fout;
	 fout.open("bill.dat",ios::app|ios::binary);
	 while(ans=='y'||ans=='Y')
	    {
	       t.getdata();
		{ fout.write((char*)&t,sizeof(t));
		  cout<<"\n"<<"RECORDS ARE ADDED TO THE FILE"; }

		  cout<<"\n\n"<<"WANNA ADD MORE RECORDS??";
		  cout<<"\n"<<"IF YES, PRESS Y";
		  cout<<"\n"<<"ENTER YOUR CHOICE : ";
		  cin>>ans;
	    }
	 fout.close();
     }

void Search() //function to search records
 {
	 clrscr();
	 unsigned long int code;
	 char found='n';
	 ifstream fin("bill.dat",ios::in|ios::binary);
	 clrscr();
	 cout<<"\n\n\n\t\t\t\t"<<"~~SEARCH~~";
	 cout<<"\n"<<"ENTER THE CUSTOMER NUMBER TO BE SEARCHED : " ;
	 cin>>code;
	 while(!fin.eof())
	   {
	      fin.read((char*)&t,sizeof(t));
	      if(t.custno()==code)
		  {
		      t.display();
		      found='y';
		      getch();
		      break;
		  }
	   }
	      if(found=='n')
		   cout<<"\n"<<"THE RECORD ENTERED BY YOU DOES NOT EXISTS";
	getch();
	fin.close();
  }
void Modify_record() //function to modify records
 {

	clrscr();
	fstream fio("bill.dat",ios::in|ios::out|ios::binary);
	unsigned long int cu;
	long pos; char found='f';
	cout<<"\n\n\n\t\t\t"<<"~~~MODIFICATION~~~";
	cout<<"\n\n\n"<<"ENTER THE CUSTOMER NUMBER WHOSE RECORD IS TO BE MODIFIED : ";
	cin>>cu;
	while(!fio.eof())
	  {
	      pos=fio.tellg();
	      fio.read((char*)&t,sizeof(t));
	      if(t.custno()==cu)
		{
		   t.modify();
		   fio.seekg(pos);
		   fio.write((char*)&t,sizeof(t));
		   found='t';
		   break;
		}
	  }
	      if(found=='f')
		   cout<<"\n\n"<<"RECORD NOT FOUND!!";
		   fio.seekg(0);
		   getch();
		   clrscr();
		   cout<<"\n\n\n\n"<<"NOW THE FILE CONTAINS....";
		   while(!fio.eof())
		    {
		     fio.read((char*)&t,sizeof(t));
		     t.display();
		     getch();
		    }
	fio.close();
  }
void Delete_record() //function to delete records
    {
	clrscr();
	ifstream fio("bill.dat",ios::in|ios::binary);
	ofstream file("temp.dat",ios::out|ios::binary);
	int cu;
	char found='f',confirm='n';
	cout<<"\n\n\n\t\t\t"<<"~~DELETION~~";
	cout<<"\n\n"<<"ENTER THE CUSTOMER NUMBER TO BE DELETED  : ";
	cin>>cu;
	while(!fio.eof())
    {
	 fio.read((char*)&t,sizeof(t));

		 if(t.custno()==cu)
		     {
			 t.display();
			 found='t';
			 cout<<"\n"<<"ARE YOU SURE THAT YOU WANT TO DELETE THIS RECORD?(ENTER 'Y' OR 'N')  : ";
			 cin>>confirm;
			 if(confirm=='n'|| confirm=='N')

			   file.write((char*)&t,sizeof(t));


		     }
		 else
		      {
			 file.write((char*)&t,sizeof(t));

		      }

	    }

	   if(found=='f')
	   {
	   cout<<"\n"<<"RECORD NOT FOUND!!";
	   getch();}
	   fio.close();
	   file.close();


     remove("bill.dat");
     rename("temp.dat","bill.dat");
     cout<<"\nNOW THE FILE CONTAINS";
     getch();
     fio.open("bill.dat",ios::in|ios::binary);
     
     while(!fio.eof())
      {
       fio.read((char*)&t ,sizeof (t)) ;
       t.display();
       getch();
    }
  fio.close();
 }

int main()
{
 ofstream fout;
 ifstream fin;
 int choice;
 clrscr();
	   cout<<"\n\n"<<"                     ";
	   cout<<"\n\n"<<"              " ;
	   cout<<"\n\n"<<"   ";
	   cout<<"\n\n\n"<<"   !!      !!  !!!!!!!!!  !!        !!!!!!!!! !!!!!!!!! !!!!  !!!! !!!!!!!!!";
	   cout<<"\n"<<"   !!      !!  !!         !!        !!        !!     !! !! !!!! !! !!";
	   cout<<"\n"<<"   !!      !!  !!         !!        !!        !!     !! !!  !!  !! !!";
	   cout<<"\n"<<"   !!      !!  !!!!!!!!!  !!        !!        !!     !! !!      !! !!!!!!!!!";
	   cout<<"\n"<<"   !!  !!  !!  !!         !!        !!        !!     !! !!      !! !!";
	   cout<<"\n"<<"   !! !!!! !!  !!         !!        !!        !!     !! !!      !! !!";
	   cout<<"\n"<<"   !!!!  !!!!  !!!!!!!!!  !!!!!!!!! !!!!!!!!! !!!!!!!!! !!      !! !!!!!!!!!";
	   cout<<"\n\n\n"<<"   ";
	   cout<<"\n\n"<<"             " ;
	   cout<<"\n\n"<<"                     ";
	   cout<<"\n\n\n\t\t\t"<<"PRESS ENTER TO CONTINUE....  : " ;
	   getch();
 do
 { clrscr();
   cout<<"\n\n\t\t\t*****TELEPHONE BILL GENERATION*****";
   cout<<"\n1. CREATE NEW FILE";
   cout<<"\n2. DISPLAY RECORDS";
   cout<<"\n3. DISPLAY PLAN DETAILS";
   cout<<"\n4. ADD RECORDS";
   cout<<"\n5. SEARCH RECORDS";
   cout<<"\n6. MODIFY RECORDS";
   cout<<"\n7. DELETE RECORDS";
   cout<<"\n8. EXIT";
   cout<<"\nENTER YOUR CHOICE :";
   cin>>choice;
   switch(choice)
   {
    case 1:create();
	   break;
    case 2:dispdata();
	   break;
    case 3:plandetails();
	   break;
    case 4:Add_record();
	   break;
    case 5:Search();
	   break;
    case 6:Modify_record();
	   break;
    case 7:Delete_record();
	   break;
    case 8:cout<<"\nTHANK YOU ";
	   break;
    default:cout<<"\nYOU ENTERED A WRONG CHOICE!!";
	    getch();
	    break;
   }
  }while(choice!=8);
  getch();
  return 0;
  }
