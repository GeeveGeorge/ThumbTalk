
/*

  ThumbTalk : A Low Cost Wearable Communication Device To Aid The Auditary , Hearing and Visually Impaired.
  
  
  Team :
  Geeve George , Sohan A and Mohit.
  
*/

#define CUSTOM_SETTINGS
#define INCLUDE_TEXT_TO_SPEECH_SHIELD
#define INCLUDE_TERMINAL_SHIELD


/* Include 1Sheeld library. */
#include <OneSheeld.h>

char A[] = ".-";
char B[] = "-...";
char C[] = "-.-.";
char D[] = "-..";
char E[] = ".";
char F[] = "..-.";
char G[] = "--.";
char H[] = "....";
char I[] = "..";
char J[] = ".---";
char K[] = "-.-";
char L[] = ".-..";
char M[] = "--";
char N[] = "-.";
char O[] = "---";
char P[] = ".--.";
char Q[] = "--.-";
char R[] = ".-.";
char S[] = "...";
char T[] = "-";
char U[] = "..-";
char V[] = "...-";
char W[] = ".--";
char X[] = "-..-";
char Y[] = "-.--";
char Z[] = "--..";
char YES[] = ".....";
char NO[] = "-----";




char msg[50];
char wrd[10];


int pos = 0;
int wpos = 0;

int dotcount = 0;
int dashcount = 0;

int dotbutton = 8;
int dashbutton = 7;
int lbutton = 6;
int wbutton = 5;



long buttonTimer = 0;
long longPressTime = 250;
long buttonTime = 250;

boolean buttonActive = false;
boolean button1Active = false;
boolean button2Active = false;
boolean button3Active = false;
boolean button4Active = false;


boolean longPressActive = false;

void setup() {

    OneSheeld.begin();
    pinMode(dotbutton, INPUT);
    pinMode(dashbutton, INPUT);
    pinMode(lbutton, INPUT);
    pinMode(wbutton, INPUT);
    //Terminal.begin(115200);
    
}

void loop() {

  if (digitalRead(dotbutton) == HIGH) {

		if (buttonActive == false) {

			buttonActive = true;
			buttonTimer = millis();

		}

    		button1Active = true;

	}

	if (digitalRead(dashbutton) == HIGH) {

		if (buttonActive == false) {

			buttonActive = true;
			buttonTimer = millis();

		}

		button2Active = true;

	}
  
      if (digitalRead(lbutton) == HIGH) {

		if (buttonActive == false) {

			buttonActive = true;
			buttonTimer = millis();

		}

    		button3Active = true;

	}
  
      if (digitalRead(wbutton) == HIGH) {

		if (buttonActive == false) {

			buttonActive = true;
			buttonTimer = millis();

		}

    		button4Active = true;

	}


  		if ((buttonActive == true) && (millis() - buttonTimer > buttonTime) && (longPressActive == false)) {

		longPressActive = true;

		if ((button1Active == false) && (button2Active == false) && (button3Active == true) && (button4Active == false)) 
        {
			Terminal.println("SPACE!");
                        
			wrd[wpos] = ' ';
            wpos++;     			

		} 
	}

	else if ((buttonActive == true) && (digitalRead(dotbutton) == LOW) && (digitalRead(dashbutton) == LOW) && (digitalRead(lbutton) == LOW) && (digitalRead(wbutton) == LOW) ) {

		if (longPressActive == true) {

			longPressActive = false;

		} else {

			  
			if ((button1Active == true) && (button2Active == false)) {

				Terminal.println(".");
				msg[pos] = '.';
                                pos++;
                                
                                
                				
              
			}
            else if ((button1Active == false) && (button2Active == false) && (button3Active == true) && (button4Active == false) ) {

				Terminal.println(msg);
				msg[pos] = '\0';
 				pos++; 
                if(strcmp(A,msg)==0)
                {
                      Terminal.println("A");
                      wrd[wpos] = 'A';
                      wpos++;
                }	
                else if(strcmp(B,msg)==0)
                {
                      Terminal.println("B");
                      wrd[wpos] = 'B';
                      wpos++;
                }
                else if(strcmp(C,msg)==0)
                {
                      Terminal.println("C");
                      wrd[wpos] = 'C';
                      wpos++;
                }
                else if(strcmp(D,msg)==0)
                {
                      Terminal.println("D");
                      wrd[wpos] = 'D';
                      wpos++;
                }
                else if(strcmp(E,msg)==0)
                {
                      Terminal.println("E");
                      wrd[wpos] = 'E';
                      wpos++;
                }
                else if(strcmp(F,msg)==0)
                {
                      Terminal.println("F");
                      wrd[wpos] = 'F';
                      wpos++;
                }
                else if(strcmp(G,msg)==0)
                {
                      Terminal.println("G");
                      wrd[wpos] = 'G';
                      wpos++;
                }
                else if(strcmp(H,msg)==0)
                {
                      Terminal.println("H");
                      wrd[wpos] = 'H';
                      wpos++;
                }
                else if(strcmp(I,msg)==0)
                {
                      Terminal.println("I");
                      wrd[wpos] = 'I';
                      wpos++;
                }
                else if(strcmp(J,msg)==0)
                {
                      Terminal.println("J");
                      wrd[wpos] = 'J';
                      wpos++;
                }
                else if(strcmp(K,msg)==0)
                {
                      Terminal.println("K");
                      wrd[wpos] = 'K';
                      wpos++;
                }
                else if(strcmp(L,msg)==0)
                {
                      Terminal.println("L");
                      wrd[wpos] = 'L';
                      wpos++;
                }
                else if(strcmp(M,msg)==0)
                {
                      Terminal.println("M");
                      wrd[wpos] = 'M';
                      wpos++;
                } 
                else if(strcmp(N,msg)==0)
                {
                      Terminal.println("N");
                      wrd[wpos] = 'N';
                      wpos++;
                }
                else if(strcmp(O,msg)==0)
                {
                      Terminal.println("O");
                      wrd[wpos] = 'O';
                      wpos++;
                } 
                else if(strcmp(P,msg)==0)
                {
                      Terminal.println("P");
                      wrd[wpos] = 'P';
                      wpos++;
                }
                else if(strcmp(Q,msg)==0)
                {
                      Terminal.println("Q");
                      wrd[wpos] = 'Q';
                      wpos++;
                }
                else if(strcmp(R,msg)==0)
                {
                      Terminal.println("R");
                      wrd[wpos] = 'R';
                      wpos++;
                }
                else if(strcmp(S,msg)==0)
                {
                      Terminal.println("S");
                      wrd[wpos] = 'S';
                      wpos++;
                }
                else if(strcmp(T,msg)==0)
                {
                      Terminal.println("T");
                      wrd[wpos] = 'T';
                      wpos++;
                }
                else if(strcmp(U,msg)==0)
                {
                      Terminal.println("U");
                      wrd[wpos] = 'U';
                      wpos++;
                }
                else if(strcmp(V,msg)==0)
                {
                      Terminal.println("V");
                      wrd[wpos] = 'V';
                      wpos++;
                }
                else if(strcmp(W,msg)==0)
                {
                      Terminal.println("W");
                      wrd[wpos] = 'W';
                      wpos++;
                }
                else if(strcmp(X,msg)==0)
                {
                      Terminal.println("X");
                      wrd[wpos] = 'X';
                      wpos++;
                }
                else if(strcmp(Y,msg)==0)
                {
                      Terminal.println("Y");
                      wrd[wpos] = 'Y';
                      wpos++;
                }
                else if(strcmp(Z,msg)==0)
                {
                      Terminal.println("Z");
                      wrd[wpos] = 'Z';
                      wpos++;
                }
                else if(strcmp(YES,msg)==0)
                {
                      Terminal.println("YES");
                      wrd[wpos] = ' ';
                      wpos++;
                      TextToSpeech.say("YES");
                }
                else if(strcmp(NO,msg)==0)
                {
                      Terminal.println("NO");
                      wrd[wpos] = ' ';
                      wpos++;
                      TextToSpeech.say("NO");
                }
                else
                {
                      Terminal.println("NULL");
                }
              
                
				for(int i=0;i<pos;++i)
				{
				    msg[i] = ' ';
				}
                
                pos = 0; 
                 
              
			}
            else if ((button1Active == false) && (button2Active == false) && (button3Active == false) && (button4Active == true) ) {

				
                                wrd[wpos] = '\0';
                                wpos++;
                                  
                                if(strcmp("HAY",wrd)==0)
                                {
                                  Terminal.println("Morse : ");
				  Terminal.println(msg);
				  Terminal.println("Word :");
                                  Terminal.println("How are you?");
                                  TextToSpeech.say("How are you?");
                                  clean();
                                }
                                else if(strcmp("IAF",wrd)==0)
                                {
                                  Terminal.println("Morse : ");
				  Terminal.println(msg);
				  Terminal.println("Word :");
                                  Terminal.println("I am fine");
                                  TextToSpeech.say("I am fine");
                                  clean();
                                }
                                 else if(strcmp("WT",wrd)==0)
                                {
                                  Terminal.println("Morse : ");
				  Terminal.println(msg);
				  Terminal.println("Word :");
                                  Terminal.println("I want water");
                                  TextToSpeech.say("I want water");
                                  clean();
                                }
                                 else if(strcmp("FD",wrd)==0)
                                {
                                  Terminal.println("Morse : ");
				  Terminal.println(msg);
				  Terminal.println("Word :");
                                  Terminal.println("I want food");
                                  TextToSpeech.say("I want food");
                                  clean();
                                }
                                else
                                {
                                  
                                Terminal.println("Morse : ");
				Terminal.println(msg);
				Terminal.println("Word :");
				Terminal.println(wrd);
				//Speak  
                                TextToSpeech.say(wrd);
                                
                                
                                
				clean();
                                }
				
              
			}
            else if ((button1Active == false) && (button2Active == true) && (button3Active == false) && (button4Active == false) ) {

				Terminal.println("-");
				msg[pos] = '-';
				pos++;
                
			}

		}

		buttonActive = false;
		button1Active = false;
		button2Active = false;
        		button3Active = false;
		button4Active = false;

	}
  
    

}

void clean()
{
                                for(int i=0;i<pos;++i)
				{
				    msg[i] = ' ';
				}
                                for(int j=0;j<wpos;++j)
				{
				    wrd[j] = ' ';
				}
				Terminal.println("Arrays Cleaned!"); 
				Terminal.println("Msg = ");
				Terminal.println(msg);
				Terminal.println("Word = ");
				Terminal.println(wrd);
                                wpos = 0;
                                pos = 0;
}
