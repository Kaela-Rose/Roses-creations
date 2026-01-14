// Mikaela-Rose Porter

#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

class parser{
    private:
        vector<string> tokens;
        int position;
        
    public:
    parser(vector<string> v){
        tokens = v;
        position = 0;
    }
    string currToken(){
        if(tokens.size() == position){
            return "EOF";
        }
        return tokens[position];
    }
    void consume(string expectedType){
        if(expectedType == currToken()){
            position++;
        }
        else{
            throw runtime_error("bad value!");
        }
    }
    void parseExpr(){
        ofstream out("output.txt",ios::app);                
        out<<"Enter <expr>"<<endl;                          

        parseSub();                                         

        if(currToken() == "add-op"){                        
            consume("add-op");                              
            out<<"Next token is at position "+to_string(position)+" Next lexeme is add-op"<<endl;
            parseExpr();                                   
        }
    }

    void parseSub(){
        ofstream out("output.txt",ios::app);
        out<<"Enter <sub>"<<endl;

        parseMult();

        if(currToken() == "sub-op"){                        
            consume("sub-op");
            out<<"Next token is at position "+to_string(position)+" Next lexeme is sub-op"<<endl;
            parseExpr();                                     
        }
    }

    void parseMult(){
        ofstream out("output.txt",ios::app);
        out<<"Enter <mult>"<<endl;

        parseDiv();

        if(currToken() == "mult-op"){                    
            consume("mult-op");
            out<<"Next token is at position "+to_string(position)+" Next lexeme is mult-op"<<endl;
            parseExpr();
        }
    }
    void parseDiv(){
        ofstream out("output.txt",ios::app);
        out<<"Enter <div>"<<endl;

        parseEq();

        if(currToken() == "div-op"){               
            consume("div-op");
            out<<"Next token is at position "+to_string(position)+" Next lexeme is div-op"<<endl;
            parseExpr();
        }
    }

    void parseEq(){
        ofstream out("output.txt",ios::app);
        out<<"Enter <eq>"<<endl;

        parseFactor();

        if(currToken() == "equal-op"){                
            consume("equal-op");
            out<<"Next token is at position "+to_string(position)+" Next lexeme is equal-op"<<endl;
            parseExpr();
        }
    }

    void parseFactor(){
        ofstream out("output.txt",ios::app);

        if(currToken() == "("){                
            consume("(");
            out<<"Next token is at position "+to_string(position)+" is ("<<endl;

            parseExpr();

            consume(")");
            out<<"Next token is at position "+to_string(position)+" is )"<<endl;
        }
        else if(currToken() == "Number"){                   
            consume("Number");
            out<<"Next token is at position "+to_string(position)+" Next lexeme is number"<<endl;
        }
        else if(currToken() == "Variable"){       
            consume("Variable");
            out<<"Next token is at position "+to_string(position)+" Next lexeme is variable"<<endl;
        }
        else{
            throw runtime_error("bad value!");
        }
    }

    void parse() {
        parseExpr();

        if (currToken() != "EOF") {
            throw runtime_error("Syntax error: extra tokens at end (got '" + currToken() + "')");
        }

        cout << "Successful Syntax Analysis!" << endl;   
    }
};

vector<string> splice(string s) {
    vector<string> out;
    string cur;
    for (char ch : s) {
        if (ch == ' ') {
            out.push_back(cur); 
            cur.clear();
        } else {
            cur.push_back(ch);
        }
    }
    out.push_back(cur);     
    return out;
}
int main(){
    ofstream out("output.txt",ios::app);
    cout<<"Please enter a file with a list of tokens seperated by spaces: ";
    string str;
    cin>>str;
    ifstream in(str);
    string content;
    int counter = 1;
    while(getline(in,content)){
        out<<"Line "+to_string(counter)+": "<<endl;
        vector<string> tokens = splice(content);
        parser p(tokens);
        p.parse();
        out<<endl;
        counter++;
    }
}
