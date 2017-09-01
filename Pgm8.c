#include<stdio.h>
#include<time.h>
#include<stdlib.h>

struct Clock
  {
    int hour;
    int minute;
    int second;
    enum {Hawaii,California,Texas,Brazil,Ireland,India,Singapore,Australia,NewZealand} Time_Zone;
  };

void init(struct Clock clk);
struct Clock set_Time();
int get_Time();
void Set12Hrs(struct Clock clk);
void Set24Hrs(struct Clock clk);
void get_Time12Hr(struct tm tm);
void get_LocalTime(struct Clock clk,int country);

int main()
   {
      struct Clock cl,cl1;
      int choice,country,flag=0;
	   do
	 {
                 
		   printf("\n1.Reset the clock\n");
		   printf("2.Set the time\n");
		   printf("3.Get the time\n");
                   printf("4.Get local time\n");
		   printf("5.Quit\n");
                   scanf("%d", &choice);
		  switch(choice)
		  {
		    case 1:init(cl);
			   break;
		    case 2:cl1 = set_Time(cl); 
                           flag = 1;
			   break;
	            case 3:get_Time();
			   break;
                    case 4:if(flag == 0) 
                              {
                                   printf("Kindly set the time to proceed\n");
                                   break;
                              }
                           else
                              {
				   printf("\nKindly enter the number corresponding to the country to check the local time\n");
				   printf("\n0.Hawaii\n1.California\n2.Texas\n3.Brazil\n4.Ireland\n5.Singapore\n6.Australia\n7.NewZealand\n");
		                   scanf("%d",&country);
				   get_LocalTime(cl1,country);
                                   break;
                              }
		    case 5:return 0;
		    default:printf("Bad input");
			    break;
		  }
	 } while(choice!=5);

   }

//Reset clock
void init(struct Clock clk)
{
  clk.hour =0;
  clk.minute= 0;
  clk.second =0;
  printf("Time is reset: %02d : %02d : %02d\n",clk.hour,clk.minute,clk.second);
}

//Set the time
struct Clock set_Time()
  {
	  struct Clock clk;
	  printf("Set time :\n");
	  printf("Enter in HH MM SS (24hr) format\n");
	  scanf("%d%d%d",&clk.hour,&clk.minute,&clk.second);
	  if (clk.second > 60 || clk.second < 0)
		    {
		    printf("Not a valid seconds!\n");
		    
		    }
	   else if(clk.minute<0 || clk.minute>60) printf("Not a valid minute!\n");  
	   else if(clk.hour<0 || clk.hour>24) printf("Not a valid hour!\n");  
	   else
	  {
		  Set24Hrs(clk);
		  Set12Hrs(clk); 
	  }
	 return clk;		 
  }

//Get current time
int get_Time()
{ 
    time_t T= time(NULL);
    struct  tm tm = *localtime(&T);
    printf("Time in 24 hour format : %02d:%02d:%02d\n",tm.tm_hour, tm.tm_min, tm.tm_sec);
    get_Time12Hr(tm);
    
}

void Set24Hrs(struct Clock clk)
  {
 
        //update hour, minute and second
        if(clk.second>59){
            clk.minute+=1;
            clk.second=0;
        }
        if(clk.minute>59){
            clk.hour+=1;
            clk.minute=0;
        }
        if(clk.hour>23){
            clk.hour=0;
            clk.minute=0;
            clk.second=0;
        }
         
       //print time in HH : MM : SS format
        printf("Time in 24 hour format : %02d : %02d : %02d \n",clk.hour,clk.minute,clk.second);
 }


void Set12Hrs(struct Clock clk)
  {
   int ampm;

        if (clk.second > 60 || clk.second < 0)
            {
            printf("Not a valid seconds time!\n");
            return;
            }

        if(clk.hour<0 || clk.hour>24) printf("Not a valid hour!\n");
        else if (clk.hour <= 12 && clk.hour > 0)
          {
            clk.hour = clk.hour;
            ampm =0;
          }
                                                                                           
        else if (clk.hour >= 13 && clk.hour <= 24)
          {
            clk.hour = (clk.hour - 12);
            ampm =1;
          }
    
       //print time in HH : MM : SS format
       printf("Time in 12 hour format : %02d : %02d : %02d ",clk.hour,clk.minute,clk.second);
        if (ampm)  printf("PM\n"); 
        else   printf("AM\n");
 }

void get_Time12Hr(struct tm tm)
{
  int ampm;

        if ( tm.tm_sec > 60 ||  tm.tm_sec < 0)
            {
            printf("Not a valid seconds time!\n");
            return;
            }

        if(tm.tm_hour<0 || tm.tm_hour>24) printf("Not a valid hour!\n");
        else if (tm.tm_hour <= 12 && tm.tm_hour > 0)
          {
            tm.tm_hour = tm.tm_hour;
            ampm =0;
          }
                                                                                           
        else if (tm.tm_hour >= 13 && tm.tm_hour <= 24)
          {
            tm.tm_hour = (tm.tm_hour - 12);
            ampm =1;
          }
    
       //print time in HH : MM : SS format
       printf("Time in 12 hour format : %02d:%02d:%02d ",tm.tm_hour, tm.tm_min, tm.tm_sec);
        if (ampm)  printf("PM\n"); 
        else   printf("AM\n");

}


//int add_Time(struct Clock clk);

//Get local time
void get_LocalTime(struct Clock clk,int country)
{
   int choice;
	  
   if(country == 0)
	   {
	     printf("Time in India  : %02d:%02d:%02d\n",clk.hour,clk.minute,clk.second);
             printf("Time in Hawaii : %02d:%02d:%02d\n",clk.hour-15,clk.minute,clk.second);
	   }
   else if(country == 1)
	   {
	     printf("Time in India      : %02d:%02d:%02d\n",clk.hour,clk.minute,clk.second);
             printf("Time in California : %02d:%02d:%02d\n",clk.hour-13,clk.minute,clk.second);
	   }
   else if(country == 2)
	   {
	     printf("Time in India  : %02d:%02d:%02d\n",clk.hour,clk.minute,clk.second);
             printf("Time in Texas  : %02d:%02d:%02d\n",clk.hour-11,clk.minute,clk.second);
	   }
   else if(country == 3)
	   {
	     printf("Time in India  : %02d:%02d:%02d\n",clk.hour,clk.minute,clk.second);
             printf("Time in Brazil : %02d:%02d:%02d\n",clk.hour-9,clk.minute,clk.second);
	   }
   else if(country == 4)
	   {
	     printf("Time in India   : %02d:%02d:%02d\n",clk.hour,clk.minute,clk.second);
             printf("Time in Ireland : %02d:%02d:%02d\n",clk.hour-5,clk.minute,clk.second);
	   }
   else if(country == 5)
	   {
	     printf("Time in India     : %02d:%02d:%02d\n",clk.hour,clk.minute,clk.second);
             printf("Time in Singapore : %02d:%02d:%02d\n",clk.hour+3,clk.minute,clk.second);
	   }
   else if(country == 6)
	   {
	     printf("Time in India     : %02d:%02d:%02d\n",clk.hour,clk.minute,clk.second);
             printf("Time in Australia : %02d:%02d:%02d\n",clk.hour+5,clk.minute,clk.second);
	   }
   else if(country == 7)
	   {
	     printf("Time in India      : %02d:%02d:%02d\n",clk.hour,clk.minute,clk.second);
             printf("Time in NewZealand : %02d:%02d:%02d\n",clk.hour+7,clk.minute,clk.second);
	   }
   
   else
          {
             printf("Wrong input! Kindly enter a valid number from the given options");

          }

}









