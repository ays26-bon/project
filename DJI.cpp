#include <iostream>
#include <string>
using namespace std;

void printHeader(const string &title)
{
    cout << "\n=====================================\n";
    cout << "   " << title << "\n";
    cout << "=====================================\n";
}

int main()
{
    int choice1, choice2;

    printHeader("WELCOME TO THE DJI SHOP");
    cout << "What are you looking for?\n";
    cout << "-------------------------------------\n";
    cout << "  1) Drones\n";
    cout << "  2) Cameras\n";
    cout << "  3) Gimbals & Accessories\n";
    cout << "-------------------------------------\n";
    cout << "Enter choice: ";
    cin >> choice1;

    if (choice1 == 1)
    {
        printHeader("DJI DRONES");
        cout << "Pick a type:\n";
        cout << "-------------------------------------\n";
        cout << "  1) Mini Series (lightweight)\n";
        cout << "  2) Air / Mavic Series (all-rounders)\n";
        cout << "  3) FPV / CineWhoop\n";
        cout << "-------------------------------------\n";
        cout << "Enter choice: ";
        cin >> choice2;

        if (choice2 == 1)
        {
            printHeader("MINI SERIES");
            cout << " - (1) DJI Mini 4 Pro\n";
            cout << " - (2) DJI Mini 3\n";

            cout << "\nView details? Enter item number (or 0 to skip): ";
            int d;
            cin >> d;
            if (d == 1)
            {
                printHeader("DJI MINI 4 PRO - DETAILS");
                cout << "Approx. 249 g | Up to ~34 min flight | 1/1.3\" sensor | 4K60 HDR | Omnidirectional obstacle sensing\n";
            }
            else if (d == 2)
            {
                printHeader("DJI MINI 3 - DETAILS");
                cout << "Approx. 248 g | Up to ~38 min flight | 1/1.3\" sensor | 4K30 | No side obstacle sensors\n";
            }
        }
        else if (choice2 == 2)
        {
            printHeader("AIR / MAVIC SERIES");
            cout << " - (1) DJI Air 3\n";
            cout << " - (2) DJI Mavic 3 Pro\n";

            cout << "\nView details? Enter item number (or 0 to skip): ";
            int d;
            cin >> d;
            if (d == 1)
            {
                printHeader("DJI AIR 3 - DETAILS");
                cout << "Dual cameras (wide + 3x tele) | Up to ~46 min flight | 1/1.3\" sensors | 4K60 | Omnidirectional sensing\n";
            }
            else if (d == 2)
            {
                printHeader("DJI MAVIC 3 PRO - DETAILS");
                cout << "Triple-camera system incl. 4/3\" Hasselblad | Up to ~43 min flight | 5.1K | Omnidirectional sensing\n";
            }
        }
        else if (choice2 == 3)
        {
            printHeader("FPV / CINEWHOOP");
            cout << " - (1) DJI Avata 2\n";
            cout << " - (2) DJI FPV\n";

            cout << "\nView details? Enter item number (or 0 to skip): ";
            int d;
            cin >> d;
            if (d == 1)
            {
                printHeader("DJI AVATA 2 - DETAILS");
                cout << "Ducted cinewhoop design | 1/1.3\" sensor | 4K | RockSteady/ HorizonSteady | FPV Goggles support\n";
            }
            else if (d == 2)
            {
                printHeader("DJI FPV - DETAILS");
                cout << "High-speed FPV | 4K60 | Hybrid manual modes | FPV Goggles | Front obstacle sensing\n";
            }
        }
    }
    else if (choice1 == 2)
    {
        printHeader("DJI CAMERAS");
        cout << "Pick a type:\n";
        cout << "-------------------------------------\n";
        cout << "  1) Action Cameras\n";
        cout << "  2) Pocket Cameras\n";
        cout << "-------------------------------------\n";
        cout << "Enter choice: ";
        cin >> choice2;

        if (choice2 == 1)
        {
            printHeader("ACTION CAMERAS");
            cout << " - (1) Osmo Action 4\n";

            cout << "\nView details? Enter item number (or 0 to skip): ";
            int d;
            cin >> d;
            if (d == 1)
            {
                printHeader("OSMO ACTION 4 - DETAILS");
                cout << "1/1.3\" sensor | 4K120 | Great low-light | Magnetic quick-release | RockSteady stabilization\n";
            }
        }
        else if (choice2 == 2)
        {
            printHeader("POCKET CAMERAS");
            cout << " - (1) Osmo Pocket 3\n";

            cout << "\nView details? Enter item number (or 0 to skip): ";
            int d;
            cin >> d;
            if (d == 1)
            {
                printHeader("OSMO POCKET 3 - DETAILS");
                cout << "3-axis gimbal | 1\" sensor | 4K60 | Rotating touch screen | Compact vlog setup\n";
            }
        }
    }
    else if (choice1 == 3)
    {
        printHeader("GIMBALS & ACCESSORIES");
        cout << "Pick a type:\n";
        cout << "-------------------------------------\n";
        cout << "  1) RS Gimbals\n";
        cout << "  2) Microphones\n";
        cout << "-------------------------------------\n";
        cout << "Enter choice: ";
        cin >> choice2;

        if (choice2 == 1)
        {
            printHeader("RS GIMBALS");
            cout << " - (1) DJI RS 4\n";
            cout << " - (2) DJI RS 4 Pro\n";
            cout << " - (3) DJI RSC 2\n";

            cout << "\nView details? Enter item number (or 0 to skip): ";
            int d;
            cin >> d;
            if (d == 1)
            {
                printHeader("DJI RS 4 - DETAILS");
                cout << "3-axis gimbal | AutoTune | Carbon arms | For mirrorless cameras | Fine-tuning knob\n";
            }
            else if (d == 2)
            {
                printHeader("DJI RS 4 PRO - DETAILS");
                cout << "Higher payload | LiDAR focusing options | Professional rigs | Strong motors\n";
            }
            else if (d == 3)
            {
                printHeader("DJI RSC 2 - DETAILS");
                cout << "Foldable design | Lightweight | Built-in screen (Pro Combo) | Great for travel setups\n";
            }
        }
        else if (choice2 == 2)
        {
            printHeader("MICROPHONES");
            cout << " - (1) DJI Mic 2\n";

            cout << "\nView details? Enter item number (or 0 to skip): ";
            int d;
            cin >> d;
            if (d == 1)
            {
                printHeader("DJI MIC 2 - DETAILS");
                cout << "Dual transmitters | Clear audio | Long battery life with charging case | 2.4GHz digital\n";
            }
        }
    }
    else
    {
        printHeader("INVALID CHOICE X");
    }

    cout << "\n=====================================\n";
    cout << "   THANK YOU FOR VISITING! :)\n";
    cout << "=====================================\n";

    return 0;
}