#include<stdio.h>
#include<time.h>

struct Clock
  {
    int hour;
    int minute;
    int second;
  };

void init(struct Clock clk);
int set_Time(struct Clock clk);
int get_Time();
void Set12Hrs(struct Clock clk);
void Set24Hrs(struct Clock clk);
void get_Time12Hr(struct tm tm);

int main()
   {
      struct Clock cl;
      struct Clock cl1;
      int choice;
	   do
	 {
		   printf("\n1.Reset the clock\n");
		   printf("2.Set the time\n");
		   printf("3.Get the time\n");
		   printf("4.Quit\n");
                   scanf("%d", &choice);
		  switch(choice)
		  {
		    case 1:init(cl);
			   break;
		    case 2:set_Time(cl); 
			   break;
	            case 3:get_Time();
			   break;
		    case 4:return 0;
		    default:printf("Bad input");
			    break;
		  }
	 } while(choice!=4);

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
int set_Time(struct Clock clk)
{
  
  printf("Set time :\n");
  printf("Enter in HH MM SS format\n");
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

