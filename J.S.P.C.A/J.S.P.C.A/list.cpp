#include "InterventionList.h"


	
void InterventionList::AddNode()
{		
		Intervention interventionDB;
		interventionDB.Record();

		Intervention *JSPCADB  = new Intervention(interventionDB);	

		//if memory was sucessfully allocated
		  if (JSPCADB  != NULL)
			{
			//if this is the first node to be added 
			 //or if list is empty
		 if (head == NULL)
			{
			head = JSPCADB ;//make the first element
			//write to file
			  ofstream stream;
			  stream.open("JSPCADB.bin",ios::binary|ios::app);
			  stream.write((char*)&interventionDB,sizeof(interventionDB));
			  stream.close();
			}
			else
			{   ///if the list is not empty

				Intervention *temp = head;//assign the head of the list to a temp pointer
            
				 while(temp->getNext() != NULL)
				{				
					temp = temp->getNext();//points temp to the next element		
				}

					temp->setNext(JSPCADB);
						//write to file
						  ofstream stream;
						  stream.open("JSPCADB.bin",ios::binary|ios::app);
						  stream.write((char*)&interventionDB,sizeof(interventionDB));
						  stream.close();
		}
	}

	else

	{
		cerr << "\n\t\t\tUnable to create new node." << endl;
	}


}


void InterventionList::displaylist()
{
				Intervention obj;
          ifstream stream;
          stream.open("JSPCADB.bin",ios::binary);

          while(stream.read((char*)&obj,sizeof(obj)))
          {
				Intervention *Head = new Intervention(obj);  
		 while (Head != NULL)
			  {

				 obj.Display();
				 Head= Head->getNext();
			  }
			
          }
          stream.close();
		
}


void InterventionList::modifylist()
{
       
		 Intervention obj;
		  int n;
		  fstream stream;int found=0; char option;

				 cout<<"\n\t\t\tEnter the Client's PhoneNumber: ";
		  fflush(stdout);
		  cin>>n;
          stream.open("JSPCADB.bin",ios::in|ios::out|ios::binary);

          while(stream.read((char*)&obj,sizeof(obj)) && found==0)
          {
			  Intervention *Head = new Intervention(obj); 
		  while (Head != NULL)
			 {
			  if(obj.applicant.GetContactNumber()==n)
                     {
                  cout<<"\n\t\t     To select the Menu Enter the Suitable Letter\n\t\t\t(A): Intervention\n\t\t\t(B): Client's Info\n\t\t\t(C): Animal\n\t\t\t(D): Address\n\t\t\t";
							 	do
									{
										option = tolower(_getch());//// accept an input until the requested input is given

									}while(option<'a'||option>'d');

									switch(option)
									{
									case 'a':obj.View();break;
									case 'b':obj.applicant.View();break;
									case 'c':obj.animal.View(); break;//veiw
									case 'd':obj.location.View();break;
									}
						      int pos =-1 *int(sizeof(obj));
                              stream.seekp(pos,ios::cur);
                              stream.write((char*)&obj,sizeof(obj));
                              found=1;
						 Head = Head->getNext();
                    }
			 
			  }//End of Inner While Loop
                 
          }
          stream.close();
       
}

void InterventionList::deleterecord()
{
				Intervention obj;
          ifstream stream;
		  int n;

		  cout<<"\n\t\t\tEnter  Applicant PhoneNumber: ";
		  cin>>n;

			  stream.open("JSPCADB.bin",ios::binary);
			  ofstream stream2;
			  stream2.open("TempJSPCADB.dat",ios::out|ios::binary);

          while(stream.read((char*)&obj,sizeof(obj)))
          {
			    Intervention *temp = new Intervention(obj); 
				Intervention *Head = temp;
		  while (temp != NULL)
			 {
				  if(obj.applicant.GetContactNumber()!=n)
				  {
										stream2.write((char*)&obj,sizeof(obj));
										temp = temp->getNext();
										delete Head;
				  }
				  else
				  {
					  temp = temp->getNext();
						delete Head;
				  }
             }
		   }
			 
          stream.close();
			  stream2.close();
			  remove("JSPCADB.bin");
			  rename("TempJSPCADB.dat","JSPCADB.bin");
}


void InterventionList::searchlist()
{
		  Intervention obj;
		  int n;
           ifstream stream;
          stream.open("JSPCADB.bin",ios::binary);
          while(stream.read((char*)&obj,sizeof(obj)))
          {
			     cout<<"\nEnter the Client's PhoneNumber: ";
					cin>>n;
				Intervention *Head = new Intervention(obj);
						   
		 while (Head != NULL)
			  {

				  if(Head->applicant.GetContactNumber()==n)
				  {

									obj.Display();
									Head= Head->getNext();
				  }
	
				
			  }
			 
          }
          stream.close();
}
 
