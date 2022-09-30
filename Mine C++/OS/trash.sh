c=1
while [ $c -ne 6 ]
do
    echo "MENU"
    echo " Press 1: Display Calender of current month"
    echo " Press 2: Display today's date and time"
    echo " Press 3: Display Username of thos are currently logged in the system"
    echo " Press 4: Display Username at given x,y position"
    echo " Press 5: Display the terminal number"
    echo " Press 6: Exit"

    read c
    case
