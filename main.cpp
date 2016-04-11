/* 
   Crudely print a truth table with 8 rows
   Written by: Tyler Race
   Date: 04/09/16
   Purpose: Evaluate if a given conclusion is true or false
   Sources: None
*/


#include <iostream>

using namespace std;

bool getPremise( bool p, bool q, bool r );
bool getConclusion( bool p, bool r);

int main ()
{
	// Output arguments
	cout << "P Q R "
	     << "(P∨Q)∧(Q→R)XOR(P∧R)<->(R∧Q) "
             << "(P∨R)" << endl;
	
	// BEGIN TRUTH TABLE
	// First Row
		cout << "T T T              ";
		if( getPremise( 1, 1, 1 ))
			cout << "T ";
		else
			cout << "F ";
		cout << "               ";
		if( getConclusion( 1, 1 ))
			cout << "T   ";
		else
			cout << "F   ";
		// Evaluate if premise is true but conlusion is false
		if( getPremise( 1, 1, 1 ) == true && getConclusion( 1, 1 ) == false )
			cout << "Invalid argument";
		else
			cout << "Valid argument";
		cout << endl;
        // Second Row
                cout << "T T F              ";
                if( getPremise( 1, 1, 0 ))
                        cout << "T ";
                else
                        cout << "F ";
                cout << "               ";
                if( getConclusion( 1, 0 ))
                        cout << "T   ";
                else
                        cout << "F   ";
                // Evaluate if premise is true but conlusion is false
                if( getPremise( 1, 1, 0 ) == true && getConclusion( 1, 0 ) == false )
                        cout << "Invalid argument";
                else
                        cout << "Valid argument";
                cout << endl;
        // Third Row
                cout << "T F T              ";
                if( getPremise( 1, 0, 1 ))
                        cout << "T ";
                else
                        cout << "F ";
                cout << "               ";
                if( getConclusion( 1, 1 ))
                        cout << "T   ";
                else
                        cout << "F   ";
                // Evaluate if premise is true but conlusion is false
                if( getPremise( 1, 0, 1 ) == true && getConclusion( 1, 1 ) == false )
                        cout << "Invalid argument";
                else
                        cout << "Valid argument";
                cout << endl;
        // Fourth Row
                cout << "T F F              ";
                if( getPremise( 1, 0, 0 ))
                        cout << "T ";
                else
                        cout << "F ";
                cout << "               ";
                if( getConclusion( 1, 0 ))
                        cout << "T   ";
                else
                        cout << "F   ";
                // Evaluate if premise is true but conlusion is false
                if( getPremise( 1, 0, 0 ) == true && getConclusion( 1, 0 ) == false )
                        cout << "Invalid argument";
                else
                        cout << "Valid argument";
                cout << endl;
        // Fifth Row
                cout << "F T T              ";
                if( getPremise( 0, 1, 1 ))
                        cout << "T ";
                else
                        cout << "F ";
                cout << "               ";
                if( getConclusion( 0, 1 ))
                        cout << "T   ";
                else
                        cout << "F   ";
                // Evaluate if premise is true but conlusion is false
                if( getPremise( 0, 1, 1 ) == true && getConclusion( 0, 1 ) == false )
                        cout << "Invalid argument";
                else
                        cout << "Valid argument";
                cout << endl;
        // Sixth Row
                cout << "F T F              ";
                if( getPremise( 0, 1, 0 ))
                        cout << "T ";
                else
                        cout << "F ";
                cout << "               ";
                if( getConclusion( 0, 0 ))
                        cout << "T   ";
                else
                        cout << "F   ";
                // Evaluate if premise is true but conlusion is false
                if( getPremise( 0, 1, 0 ) == true && getConclusion( 0, 0 ) == false )
                        cout << "Invalid argument";
                else
                        cout << "Valid argument";
                cout << endl;
        // Seventh Row
                cout << "F F T              ";
                if( getPremise( 0, 0, 1 ))
                        cout << "T ";
                else
                        cout << "F ";
                cout << "               ";
                if( getConclusion( 0, 1 ))
                        cout << "T   ";
                else
                        cout << "F   ";
                // Evaluate if premise is true but conlusion is false
                if( getPremise( 0, 0, 1 ) == true && getConclusion( 0, 1 ) == false )
                        cout << "Invalid argument";
                else
                        cout << "Valid argument";
                cout << endl;
        // Eighth Row
                cout << "F F F              ";
                if( getPremise( 0, 0, 0 ))
                        cout << "T ";
                else
                        cout << "F ";
                cout << "               ";
                if( getConclusion( 0, 0 ))
                        cout << "T   ";
                else
                        cout << "F   ";
                // Evaluate if premise is true but conlusion is false
                if( getPremise( 0, 0, 0 ) == true && getConclusion( 0, 0 ) == false )
                        cout << "Invalid argument";
                else
                        cout << "Valid argument";
                cout << endl;

	return 0;	
}

bool getPremise( bool p, bool q, bool r)
{
	bool b;
	if ( q == true && r == false )
		b = false;
	else
		b = true;
	if(((( p || q ) && b ) ^ ( p && r )) == ( r && q )) 
		return true;
	else
		return false;
}

bool getConclusion( bool p, bool r )
{
	return( p || r );
}

