  #include<iostream>
  #include<iomanip>
  #include<string>
  using namespace std;
  int main()
  {
  	int choice;
  	char again;
  	string customerName;
  	int customerID;
  	int quantity;
  	float pricePerProduct;
  	float total=0;
  	float discount=0;
  	float netAmount=0;
  	do
  	{
  		cout<<"\n===========CUSTOMER BILLING SYSTEM==================\n";
  		cout<<"\n1.Add New Customer\n";
  		cout<<"\n2.Calculate Total Bill\n";
  		cout<<"\n3.Display Customer Details\n";
  		cout<<"\n4.Exit\n";
  		cout<<"\n==================================\n";
  		cout<<"\nEnter Your Choice:";
  		cin>>choice;
  		switch(choice)
  		{
	  	case 1:
  			{
  					cin.ignore();
  					cout<<"\nEnter Customer Name:";
  					getline(cin,customerName);
  					cout<<"\nEnter Customer ID:";
  					cin>>customerID;
  					cout<<"\nEnter Quantity:";
  					cin>>quantity;
  					cout<<"\nEnterprice Per Prouct:";
  					cin>>pricePerProduct;
  					total=(float)quantity*pricePerProduct;
  					cout<<"\nCustomer  \""
  					<<customerName
  					<<"\"added successfully!\n";
  					break;
  				}
  				case 2:
  				{
  					int products;
  					float productPrice;
  					float bill=0;
  					cout<<"\nEnter number of products:";
  					cin>>products;
  					for(int i=1;i<=products;i++)
  					{
  						cout<<"product"<<i
  						<<"price:";
  						cin>>productPrice;
  						bill=bill+productPrice;
  					}
  					if(bill>=3500)
  					{
  						discount=15;
  						netAmount=bill-(bill*0.10);
  					}
  					else if(bill>=2500)
  					{
  						discount=10;
  						netAmount=bill-(bill*0.10);
  					}
  					else if(bill>=1500)
  					{
  						discount=5;
  						netAmount=bill-(bill*0.05);
  					}
  					else
  					{
  						discount=0;
  						netAmount=bill;
  					}
  					cout<<fixed<<setprecision(2);
  					cout<<"\n\nTotal="
  					<<bill;
  					cout<<"\nDiscountApplied:"
  					<<discount<<"%";
  					cout<<"\nNet Amount="
  					<<netAmount<<endl;
  					total=netAmount;
  					break;
  				}
  				case 3:
  					{
  						cout<<"\nCustomer Name:"
  						<<customerName;
  						cout<<"\nCustomer ID:"
  						<<customerID;
  						cout<<"\nQuantity:"
  						<<quantity;
  						cout<<"\nTotal Bill:"
  						<<total<<endl;
  						break;
  					}
  					case 4:
  						{
  							cout<<"\nThankyou for using"
  							<<"\"Customer Billing System\"!\n";
  							break;
  						}
  						default:
  						{
  							cout<<"\nInvalid Choice!\n";
						  }
					}
  					if (choice!=4)
  					{
  						cout<<"\n\nDo you want to continue?(y/n):";
  						cin>>again;
  					}
  					else
  					{
  						again='n';
  					}
  				}
  				while(again=='y'||again=='y');
  				return 0;
				  }
				  	
					  
  						