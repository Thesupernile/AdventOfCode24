#include <iostream>
#include <vector>
#include <string>

#if 1:
std::vector<std::string> map = {
    "212521982345455432198898732343201001454321076767899872",
    "101430671156766718089087001432102122367410789898721701",
    "234549560049859809670106126549893432198523650127630652",
    "345678432132343218543215437456784543007694540134544543",
    "434989010101034567894326458941089656912784343296531014",
    "123968523218954326287478947032178767843895256787432543",
    "037879654305869210156565432142189626756706101208956632",
    "010968760456778981432101943443076212389617890312347701",
    "323459821678765476583201875654561003476526345423698801",
    "011234734569012345694112766743432876565430256784510932",
    "010345654554212014785073450898101986676321100898929841",
    "143456703623103423456787321287632987685672901289838750",
    "212769812514398512987896544379443456894589874356745669",
    "301898453405487600121095434568543670123601065105210178",
    "498782345654676321436784323877612589010892110234312321",
    "567101908723521030545654012981003438756763323987603430",
    "323877819810437841690343021542312321065654332109544543",
    "014966521923456956781252120455401487654505445678037652",
    "565455430810398105898763214345566590123218764789128781",
    "678321876760567234237454905216697687689439653234569390",
    "549050945651456340145667876107788014578321342106778434",
    "432167834512301254206758989038979123065430211067884521",
    "212058723003456763219843210123460132104321203458990690",
    "103449012124567895430764505674321043895650432143021788",
    "214530101013098986721256034985452344786766501032134659",
    "345621232322121234890340125676965435689897865401235678",
    "238789985421030345234543234767876105476101974321945234",
    "129376576534781676167652149866765256785232389450876165",
    "023403456215696787018967019875454343494341071265210074",
    "016512567304345698101278112562343852014556780374391189",
    "187876458412234598790349603401438961025698895489580543",
    "098962389561103347685456784876547873234767216785671672",
    "123451049870101256576545692910687210189854306894502981",
    "212945432943232345677834501431296332182344345663213870",
    "301876501854569431988925232321345345091103216756344561",
    "676510345763078520123810123410543456780234109865432150",
    "783401256762107019654320294567632109876542106776843001",
    "892313879856234198734521287678932323438943769089987612",
    "341054965447895287645632789456541010567659858123656543",
    "250123832332196014532745610367692101298365647654567698",
    "167814001541087123691821001298789854303234737843238787",
    "078905123456789234780934789656730763214159826943129898",
    "980876432965410165690695678749821278934067015652010789",
    "801986501874321074321783265637832123653458234761001656",
    "212567988965010787210654104521945034562109101891012347",
    "123498677654321298323545003010876453078045610123456798",
    "034014576103432186789276512123289342199236769032347810",
    "145623985412545085652189467898100256787100898741016921",
    "898767234307696198543011056967221105107231239653455430",
    "745678101268987585654322343254339012218774381012768741",
    "234989089456789676789113698107448763329783498019889650",
    "101345674301410566541004567898758954458692567325676341",
    "013216765210323455632123476127667763067501101234765432",
    "322109876323454556789012981034554892155432101289876501"
};
#else

std::vector<std::string> map = {
    "89010123",
    "78121874",
    "87430965",
    "96549874",
    "45678903",
    "32019012",
    "01329801",
    "10456732" 
};
#endif

std::vector<int> pastPositions = {};

int findRoutes(int searchNumber, int searchX, int searchY) {
    int score = 0;
    int numberOfValidSteps = 0;
    bool alreadyVisited = false;

    if ((searchX - 1 >= 0 && map[searchY][searchX - 1] - 48 == searchNumber)) {
        if (searchNumber == 9) {
            alreadyVisited = false;
            // Positions are stored as sequential indexes in the vector. We it
            for (int i = 0; i < pastPositions.size(); i += 2) {
                if (pastPositions[i] == searchY && pastPositions[i+1] == searchX - 1) {
                    alreadyVisited = true;
                }
            }
            if (!alreadyVisited) {
                pastPositions.push_back(searchY);
                pastPositions.push_back(searchX - 1);
                score += 1;
            }
        }
        else {
            score += findRoutes((searchNumber + 1), searchX - 1, searchY);
        }
    }

    if ((searchY - 1 >= 0 && map[searchY - 1][searchX] - 48 == searchNumber)) {
        if (searchNumber == 9) {
            alreadyVisited = false;
            // Positions are stored as sequential indexes in the vector. We it
            for (int i = 0; i < pastPositions.size(); i += 2) {
                if (pastPositions[i] == searchY - 1 && pastPositions[i + 1] == searchX) {
                    alreadyVisited = true;
                }
            }
            if (!alreadyVisited) {
                pastPositions.push_back(searchY - 1);
                pastPositions.push_back(searchX);
                score += 1;
            }
        }
        else {
            score += findRoutes((searchNumber + 1), searchX, searchY - 1);
        }
    }

    if ((searchX + 1 < map[searchY].length() && map[searchY][searchX + 1] - 48 == searchNumber)) {
        if (searchNumber == 9) {
            alreadyVisited = false;
            // Positions are stored as sequential indexes in the vector. We it
            for (int i = 0; i < pastPositions.size(); i += 2) {
                if (pastPositions[i] == searchY && pastPositions[i + 1] == searchX + 1) {
                    alreadyVisited = true;
                }
            }
            if (!alreadyVisited) {
                pastPositions.push_back(searchY);
                pastPositions.push_back(searchX + 1);
                score += 1;
            }
        }
        else {
            score += findRoutes((searchNumber + 1), searchX + 1, searchY);
        }
    }
    if ((searchY + 1 < map.size() && map[searchY + 1][searchX] - 48 == searchNumber)) {
        if (searchNumber == 9) {
            alreadyVisited = false;
            // Positions are stored as sequential indexes in the vector. We it
            for (int i = 0; i < pastPositions.size(); i += 2) {
                if (pastPositions[i] == searchY + 1 && pastPositions[i + 1] == searchX) {
                    alreadyVisited = true;
                }
            }
            if (!alreadyVisited) {
                pastPositions.push_back(searchY + 1);
                pastPositions.push_back(searchX);
                score += 1;
            }
        }
        else {
            score += findRoutes((searchNumber + 1), searchX, searchY + 1);
        }
    }
    
    return score;
}

int findRating(int searchNumber, int searchX, int searchY) {
    int score = 0;
    int numberOfValidSteps = 0;
    bool alreadyVisited = false;

    if ((searchX - 1 >= 0 && map[searchY][searchX - 1] - 48 == searchNumber)) {
        if (searchNumber == 9) {
            score += 1;
        }
        else {
            score += findRating((searchNumber + 1), searchX - 1, searchY);
        }
    }

    if ((searchY - 1 >= 0 && map[searchY - 1][searchX] - 48 == searchNumber)) {
        if (searchNumber == 9) {
            score += 1;
        }
        else {
            score += findRating((searchNumber + 1), searchX, searchY - 1);
        }
    }

    if ((searchX + 1 < map[searchY].length() && map[searchY][searchX + 1] - 48 == searchNumber)) {
        if (searchNumber == 9) {
            score += 1;
        }
        else {
            score += findRating((searchNumber + 1), searchX + 1, searchY);
        }
    }
    if ((searchY + 1 < map.size() && map[searchY + 1][searchX] - 48 == searchNumber)) {
        if (searchNumber == 9) {
            score += 1;
        }
        else {
            score += findRating((searchNumber + 1), searchX, searchY + 1);
        }
    }

    return score;
}


long long Part1() {
    long long numberOfTrails = 0;

    for (int row = 0; row < map.size(); row++) {
        for (int col = 0; col < map[row].length(); col++) {
            if (map[row][col] == '0') {
                // Algorithm Runs for every zero in the array//
                pastPositions = {};
                numberOfTrails += findRoutes(1, col, row);
            }
        }
    }

    return numberOfTrails;
}

long long Part2() {
    long long numberOfTrails = 0;

    for (int row = 0; row < map.size(); row++) {
        for (int col = 0; col < map[row].length(); col++) {
            if (map[row][col] == '0') {
                // Algorithm Runs for every zero in the array//
                pastPositions = {};
                numberOfTrails += findRating(1, col, row);
            }
        }
    }

    return numberOfTrails;
}



int main()
{
    std::cout << "The sum of the scores of the trailheads on the map is: " << Part1() << "\n";
    std::cout << "The sum of the ratings of the trailheads on the map is: " << Part2() << "\n";
}


/* Part 1 thought explaining
    The plan is to run through and find every zero in the map. For each zero in the map, we will search for every one and recursively search
    for each trail. We'll hit the end of the trail and move back to the last number (8) till we find all possible paths from that node at which
    point we move back again to cover the whole map.
*/

/* Part 2 thought explaining
    My algorithm has a specific check to see stop it from doing this. Therefore it shouldn't be too hard to just remove that check and get the right
    answer for the part 2 algorithm.
*/




/*if ((i / 3 - 1) + searchY >= 0 && (i / 3 - 1) + searchY < map.size() && (i / 3 - 1) + searchX >= 0 && (i / 3 - 1) + searchX < map[0].length()) {
    if (map[(i / 3 - 1) + searchY][(i % 3 - 1) + searchX] - 48 == searchNumber) {
        numberOfValidSteps++;
        if (searchNumber == 9) {
            return 1;
        }
        else {
            score += findRoutes(searchNumber + 1, (i % 3 - 1) + searchX, (i / 3 - 1) + searchY);
        }
    }*/