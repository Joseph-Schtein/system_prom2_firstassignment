#include "snowman.hpp"
#include <string>
#include <exception>
#include <stdexcept>
using namespace std;

string ariel::snowman(int format){
    string topHat = "", hat = "", nose = "", leftEye = "", rightEye = "";
    string rightArm = "", leftArm = "", torso = "", base = "";
    int props[8];
    int i = 7;
    int tmp = format, counter = 0, digit = 0;
    
    while(tmp > 0){
        digit = tmp%10;
        tmp /= 10;
        counter++;
        if(digit < 1){
            string strFormat = to_string(format);
            throw invalid_argument{"Invalid code " + strFormat};
        }

        if(digit > 4){
            string strFormat = to_string(format);
            throw invalid_argument{"Invalid code " + strFormat};
        }
    }

    if(counter != 8){
        string strFormat = to_string(format);
        throw invalid_argument{"Invalid code " + strFormat};

    }

    while(format > 0){
        props[i] = format % 10;
        format /= 10; 
        i--;
    }

    for(int j = 0; j < 8 ; j++){

        switch(j){
            case 0:
                if(props[0] == 1){
                    hat += "\n_===_\n";
                } 

                else if(props[0] == 2){
                    topHat += "\n  ___\n";
                    hat += ".....\n";
                }

                else if(props[0] == 3){
                    topHat += "\n   _\n";
                    hat += " /_\\\n";
                }

                else if(props[0] == 4){
                    topHat += "\n ___\n";
                    hat += "(_*_)\n";
                }

                break; 

            case 1:
                if(props[1] == 1){
                    nose = ",";
                } 

                else if(props[1] == 2){
                    nose = ".";
                }

                else if(props[1] == 3){
                    nose = "_";
                }

                else if(props[1] == 4){
                    nose = " ";
                    
                }
                
                break; 

            case 2:
                 if(props[2] == 1){
                    leftEye = ".";
                } 

                else if(props[2] == 2){
                    leftEye = "o";
                }

                else if(props[2] == 3){
                    leftEye = "O";
                }

                else if(props[2] == 4){
                    leftEye = "-";
                    
                }


                break;   

            case 3:
                 if(props[3] == 1){
                    rightEye = ".";
                } 

                else if(props[3] == 2){
                    rightEye = "o";
                }

                else if(props[3] == 3){
                    rightEye = "O";
                }

                else if(props[3] == 4){
                    rightEye = "-";
                    
                }

            case 4:
                 if(props[4] == 1){
                    leftArm = "<";
                } 

                else if(props[4] == 2){
                    leftArm = "\\";
                }

                else if(props[4] == 3){
                    leftArm = "/";
                }

                else if(props[4] == 4){
                    leftArm = "";
                    
                } 

            case 5:
                 if(props[5] == 1){
                    rightArm = ">";
                } 

                else if(props[5] == 2){
                    rightArm = "/";
                }

                else if(props[5] == 3){
                    rightArm = "\\";
                }

                else if(props[5] == 4){
                    rightArm = "";
                    
                }

            case 6:
                 if(props[6] == 1){
                    torso = " : ";
                } 

                else if(props[6] == 2){
                    torso = "] [";
                }

                else if(props[6] == 3){
                    torso = "> <";
                }

                else if(props[6] == 4){
                    torso = "   ";
                    
                }

            case 7:
                 if(props[7] == 1){
                    base = " : ";
                } 

                else if(props[7] == 2){
                    base = '"';
                }

                else if(props[7] == 3){
                    base = "___";
                }

                else if(props[7] == 4){
                    base = "   ";
                    
                }              
        }
    }

    string output = "", secondLine = "", thirdLine = "", forthLine = "";

    if(props[4] == 2){
        secondLine += leftArm;
    }

    secondLine += "(" + leftEye + nose + rightEye;  
    secondLine += ")";

    if(props[5] == 2){
        secondLine += rightArm;
    }

    
    secondLine += "\n";
    


    if(props[4] != 2){
        thirdLine += leftArm;
    }

    thirdLine += "(" + torso;  
    thirdLine += ")"; 

    if(props[5] != 2){
        thirdLine += rightArm;
    }

    thirdLine += "\n";
    
    if(props[7] != 2)
        forthLine += "(" + base + ")\n";

    else{
        forthLine += "(" + base + " " + base + ")\n";
    }

    if(props[4] != 4){
        topHat = "  " + topHat;
        hat = " " + hat;
        forthLine = " " + forthLine;
        
        if(props[4] == 2){
            thirdLine = " " + thirdLine;
        }
        if(props[4] != 2){
            secondLine = " " + secondLine;
        }    
    }

    output = topHat + hat + secondLine + thirdLine + forthLine +"\n"; 

    return output;    
}