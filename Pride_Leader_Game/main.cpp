#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <functional>
#include "Board.h"
#include "Player.h"
#include "Advisor.h"

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    auto selectAdvisor = []() {
        vector<Advisor> advisors = {
            Advisor("Rafiki", "Invisibility"),
            Advisor("Nala", "Night Vision"),
            Advisor("Sarabi", "Energy Manipulation"),
            Advisor("Zazu", "Weather Control"),
            Advisor("Sarafina", "Super Speed")
        };

        cout << "Available Advisors:" << endl;
        for (size_t i = 0; i < advisors.size(); ++i) {
            cout << i + 1 << ". " << advisors[i].getName() << " - " << advisors[i].getAbility() << endl;
        }
        cout << "Select an advisor by number: ";
        int choice;
        cin >> choice;
        if (choice >= 1 && choice <= (int)advisors.size()) {
            return advisors[choice - 1];
        }
        cout << "Invalid choice. No advisor selected." << endl;
        return Advisor();
    };

    std::function<pair<Board, Player>(Board, Player, int, vector<string>, vector<string>)> moveForward;
    moveForward = [&](Board board, Player player, int playerIndex, vector<string> randomEvents, vector<string> riddles) {
        int spinResult = rand() % 6 + 1;
        cout << "\nYou spun a " << spinResult << "!" << endl;
        bool reachedEnd = board.movePlayer(playerIndex, spinResult);
        Tile currentTile = board.getCurrentTile(playerIndex);
        cout << "You landed on a " << currentTile.name << " tile." << endl;

        if (currentTile.name == "Oasis") {
            cout << "You've found a peaceful oasis! You get an extra turn and gain 200 Stamina, Strength, and Wisdom Points." << endl;
            player.addStamina(200);
            player.addStrength(200);
            player.addWisdom(200);
            // Extra turn
            tie(board, player) = moveForward(board, player, playerIndex, randomEvents, riddles);
        } else if (currentTile.name == "Counseling") {
            cout << "Welcome to the land of enrichment! Your Stamina, Strength, and Wisdom increase by 300." << endl;
            player.addStamina(300);
            player.addStrength(300);
            player.addWisdom(300);
            Advisor advisor = selectAdvisor();
            player.setAdvisor(advisor);
        } else if (currentTile.name == "Graveyard") {
            cout << "Uh-oh, you've stumbled into the Graveyard! Move back 10 tiles and lose 100 Stamina, Strength, and Wisdom Points." << endl;
            board.movePlayer(playerIndex, -10);
            player.addStamina(-100);
            player.addStrength(-100);
            player.addWisdom(-100);
        } else if (currentTile.name == "Hyenas") {
            cout << "The Hyenas are on the prowl! Return to your previous position and lose 300 Stamina Points." << endl;
            board.movePlayer(playerIndex, -spinResult);
            player.addStamina(-300);
        } else if (currentTile.name == "Challenge") {
            cout << "Time for a test of wits! Answer the riddle correctly to earn 500 Wisdom Points." << endl;
            int riddleIndex = rand() % riddles.size();
            stringstream ss(riddles[riddleIndex]);
            string question, answer;
            getline(ss, question, '|');
            getline(ss, answer);

            cout << question << endl;
            cout << "Your answer: ";
            cin.ignore();
            string userAnswer;
            getline(cin, userAnswer);
            if (userAnswer == answer) {
                cout << "Correct! You gain 500 Wisdom Points." << endl;
                player.addWisdom(500);
            } else {
                cout << "Incorrect. The correct answer was: " << answer << endl;
            }
        } else if (currentTile.name == "Regular") {
            if (rand() % 2 == 0) {
                cout << "A random event has occurred!" << endl;
                int eventIndex = rand() % randomEvents.size();
                stringstream ss(randomEvents[eventIndex]);
                string description, pathTypeStr, advisorStr, pridePointsStr;
                getline(ss, description, '|');
                getline(ss, pathTypeStr, '|');
                getline(ss, advisorStr, '|');
                getline(ss, pridePointsStr);

                int pathType = stoi(pathTypeStr);
                int advisorRequired = stoi(advisorStr);
                int pridePoints = stoi(pridePointsStr);

                // Check if the event applies to the player's path
                if (pathType == 2 || pathType == board.getPlayerLane(playerIndex)) {
                    // Check if the player's advisor protects from negative events
                    if (pridePoints < 0 && advisorRequired != 0 && player.getAdvisor().getName() != "None") {
                        cout << "Your advisor protected you from a negative event!" << endl;
                    } else {
                        cout << description << endl;
                        player.addPridePoints(pridePoints);
                    }
                } else {
                    cout << "Nothing happens." << endl;
                }
            } else {
                cout << "Nothing happens." << endl;
            }
        }

        if (reachedEnd) {
            cout << player.getName() << " has reached Pride Rock!" << endl;
        }

        return make_pair(board, player);
    };

    auto displayMainMenu = []() {
        cout << "\nMain Menu: Select an option to continue" << endl;
        cout << "1. Check Player Progress (1)" << endl;
        cout << "2. Review Character (2)" << endl;
        cout << "3. Check Position (3)" << endl;
        cout << "4. Review your Advisor (4)" << endl;
        cout << "5. Move Forward (5)" << endl;
        cout << "Please choose an option using the corresponding number: ";
    };

    auto checkPlayerProgress = [](Player player) {
        cout << "\nPride Points: " << player.getPridePoints() << endl;
        cout << "Stamina: " << player.getStamina() << endl;
        cout << "Strength: " << player.getStrength() << endl;
        cout << "Wisdom: " << player.getWisdom() << endl;
    };

    auto reviewCharacter = [](Player player) {
        cout << "\nCharacter Name: " << player.getName() << endl;
        cout << "Age: " << player.getAge() << endl;
    };

    auto checkPosition = [](Board board, int playerIndex) {
        int position = board.getPlayerPosition(playerIndex);
        cout << "\nCurrent Position on the Board: " << position << endl;
        board.displayBoard();
    };

    auto reviewAdvisor = [](Player player) {
        Advisor advisor = player.getAdvisor();
        cout << "\nCurrent Advisor: " << advisor.getName() << endl;
        cout << "Ability: " << advisor.getAbility() << endl;
    };

    auto selectCharacter = [](vector<Player>& availablePlayers) {
        cout << "Available Lions:" << endl;
        for (size_t i = 0; i < availablePlayers.size(); ++i) {
            cout << i + 1 << ". " << availablePlayers[i].getName() << endl;
        }
        cout << "Select your lion by number: ";
        int choice;
        cin >> choice;

        if (choice >= 1 && choice <= (int)availablePlayers.size()) {
            Player chosenPlayer = availablePlayers[choice - 1];
            availablePlayers.erase(availablePlayers.begin() + (choice - 1));
            return chosenPlayer;
        }

        cout << "Invalid selection. Defaulting to first available lion." << endl;
        Player defaultPlayer = availablePlayers[0];
        availablePlayers.erase(availablePlayers.begin());
        return defaultPlayer;
    };

    auto displayStartingScreen = []() {
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        cout << "           Welcome to Pride Leader!          " << endl;
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        cout << "Game Rules:" << endl;
        cout << "- Select a lion character to begin your journey." << endl;
        cout << "- Choose a path: Cub Training or Straight to the Pride Lands." << endl;
        cout << "- Navigate the board by spinning the spinner." << endl;
        cout << "- Gain Pride Points and improve your Leadership Traits." << endl;
        cout << "- First to reach Pride Rock with the highest Pride Points wins!" << endl;
        cout << endl;
        cout << endl;
        cout << "Press Enter to continue..." << endl;
        cin.ignore();
    };

    vector<Player> availablePlayers;
    ifstream charactersFile("characters.txt");
    if (charactersFile.is_open()) {
        string line;
        while (getline(charactersFile, line)) {
            stringstream ss(line);
            string name;
            int age, strength, stamina, wisdom, pridePoints;
            getline(ss, name, '|');
            ss >> age;
            ss.ignore();
            ss >> strength;
            ss.ignore();
            ss >> stamina;
            ss.ignore();
            ss >> wisdom;
            ss.ignore();
            ss >> pridePoints;
            Player newPlayer(name, age);
            newPlayer.addStrength(strength - 100);
            newPlayer.addStamina(stamina - 100);
            newPlayer.addWisdom(wisdom - 100);
            newPlayer.addPridePoints(pridePoints - 20000);
            availablePlayers.push_back(newPlayer);
        }
        charactersFile.close();
    }

    // Read random events
    vector<string> randomEvents;
    ifstream randomEventsFile("random_events.txt");
    if (randomEventsFile.is_open()) {
        string line;
        getline(randomEventsFile, line);
        while (getline(randomEventsFile, line)) {
            randomEvents.push_back(line);
        }
        randomEventsFile.close();
    }

    // Read riddles
    vector<string> riddles;
    ifstream riddlesFile("riddles.txt");
    if (riddlesFile.is_open()) {
        string line;
        getline(riddlesFile, line);
        while (getline(riddlesFile, line)) {
            riddles.push_back(line);
        }
        riddlesFile.close();
    }

    displayStartingScreen();

    Player player1 = selectCharacter(availablePlayers);

    player1.displayStats();

    Player player2("Player 2", 10);
    player2.addStrength(100);
    player2.addStamina(100);
    player2.addWisdom(100);

    int pathChoice;
    cout << "Choose your path:\n1. Cub Training\n2. Straight to the Pride Lands\nEnter 1 or 2: ";
    cin >> pathChoice;
    if (pathChoice == 1) {
        player1.applyTrainingPath();
        Advisor advisor = selectAdvisor();
        player1.setAdvisor(advisor);
    } else {
        player1.applyPrideLandsPath();
    }

    Board board;
    board.initializeBoard();
    board.setPlayerLane(0, pathChoice - 1);
    board.setPlayerLane(1, (pathChoice % 2));

    bool gameEnd = false;
    int currentPlayer = 0;

    while (!gameEnd) {
        Player activePlayer = (currentPlayer == 0) ? player1 : player2;
        cout << "\nIt's " << activePlayer.getName() << "'s turn." << endl;
        displayMainMenu();
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                checkPlayerProgress(activePlayer);
                break;
            case 2:
                reviewCharacter(activePlayer);
                break;
            case 3:
                checkPosition(board, currentPlayer);
                break;
            case 4:
                reviewAdvisor(activePlayer);
                break;
            case 5:
                tie(board, activePlayer) = moveForward(board, activePlayer, currentPlayer, randomEvents, riddles);
                if (board.getPlayerPosition(currentPlayer) >= 51) {
                    cout << activePlayer.getName() << " has reached Pride Rock!" << endl;
                    gameEnd = true;
                }
                currentPlayer = (currentPlayer + 1) % 2;
                break;
            default:
                cout << "Invalid option. Try again." << endl;
                break;
        }
    }

    player1.addPridePoints((player1.getStamina() / 100) * 1000);
    player1.addPridePoints((player1.getStrength() / 100) * 1000);
    player1.addPridePoints((player1.getWisdom() / 100) * 1000);

    player2.addPridePoints((player2.getStamina() / 100) * 1000);
    player2.addPridePoints((player2.getStrength() / 100) * 1000);
    player2.addPridePoints((player2.getWisdom() / 100) * 1000);

    if (player1.getPridePoints() > player2.getPridePoints()) {
        cout << player1.getName() << " wins with " << player1.getPridePoints() << " Pride Points!" << endl;
    } else if (player2.getPridePoints() > player1.getPridePoints()) {
        cout << player2.getName() << " wins with " << player2.getPridePoints() << " Pride Points!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }

    ofstream outFile("game_stats.txt");
    if (outFile.is_open()) {
        outFile << player1.getName() << "'s Pride Points: " << player1.getPridePoints() << endl;
        outFile << player2.getName() << "'s Pride Points: " << player2.getPridePoints() << endl;
        outFile.close();
    }

    return 0;
}