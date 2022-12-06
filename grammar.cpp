#include <iostream>
#include <fstream>
#include <string>

class grammar{
    public:
    string grammars[13][2];

    grammar(){
        grammars[0][0] = "<start>";
        grammars[0][1] = "<exprlines>";

        grammars[1][0] = "<exprlines>";
        grammars[1][1] = "<exprline><exprlines>";
        grammars[2][0] = "<exprlines>";
        grammars[2][1] = "";

        grammars[3][0] = "<exprline>";
        grammars[3][1] = "<expr>.";

        grammars[4][0] = "<expr>";
        grammars[4][1] = "<printexpr>";

        grammars[5][0] = "<printexpr>";
        grammars[5][1] = "print <string>";
        grammars[6][0] = "<printexpr>";
        grammars[6][1] = "print <math>";

        grammars[7][0] = "<string>";
        grammars[7][1] = "id <string>";
        grammars[8][0] = "<string>";
        grammars[8][1] = "id";

        grammars[9][0] = "<math>";
        grammars[9][1] = "integer+integer";
        grammars[10][0] = "<math>";
        grammars[10][1] = "integer-integer";
        grammars[11][0] = "<math>";
        grammars[11][1] = "integer*integer";
        grammars[12][0] = "<math>";
        grammars[12][1] = "integer/integer";
    }
}