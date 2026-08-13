#include <iostream>
#include <unordered_map>
#include <string>
#include <cctype>
using namespace std;

class TypeChecker {
private:
    unordered_map<string, string> symbolTable;

public:
    // Declare variable
    void declareVariable(string type, string name) {
        if (symbolTable.find(name) != symbolTable.end()) {
            cout << "Error: Variable '" << name << "' already declared.\n";
            return;
        }

        symbolTable[name] = type;
        cout << "Declared: " << type << " " << name << endl;
    }

    // Check type compatibility
    bool isCompatible(string left, string right) {
        if (left == right)
            return true;

        // Allow int -> float
        if (left == "float" && right == "int")
            return true;

        return false;
    }

    // Detect literal type
    string getLiteralType(string value) {
        if (value == "true" || value == "false")
            return "bool";

        bool hasDot = false;
        for (char c : value) {
            if (c == '.') hasDot = true;
            else if (!isdigit(c)) return "unknown";
        }

        return hasDot ? "float" : "int";
    }

    // Get operand type
    string getType(string value) {
        if (symbolTable.find(value) != symbolTable.end())
            return symbolTable[value];

        return getLiteralType(value);
    }

    // Expression checking
    string checkExpression(string left, string op, string right) {
        string leftType = getType(left);
        string rightType = getType(right);

        if (leftType == "unknown" || rightType == "unknown") {
            cout << "Error: Unknown operand in expression\n";
            return "error";
        }

        if ((leftType == "int" || leftType == "float") &&
            (rightType == "int" || rightType == "float")) {

            if (leftType == "float" || rightType == "float")
                return "float";
            return "int";
        }

        cout << "Type Error: Cannot perform " << op
             << " between " << leftType
             << " and " << rightType << endl;

        return "error";
    }

    // Assignment checking
    void checkAssignment(string variable, string valueType) {
        if (symbolTable.find(variable) == symbolTable.end()) {
            cout << "Error: Undeclared variable '" << variable << "'\n";
            return;
        }

        string varType = symbolTable[variable];

        if (isCompatible(varType, valueType)) {
            cout << "Valid assignment: "
                 << variable << " = " << valueType << endl;
        } else {
            cout << "Type Error: Cannot assign "
                 << valueType << " to "
                 << varType << " variable "
                 << variable << endl;
        }
    }
};

int main() {
    TypeChecker checker;

    cout << "===== Variable Declaration =====\n";
    checker.declareVariable("int", "a");
    checker.declareVariable("float", "b");
    checker.declareVariable("bool", "c");

    cout << "\n===== Direct Assignments =====\n";
    checker.checkAssignment("a", checker.getType("10"));      // int
    checker.checkAssignment("b", checker.getType("5"));       // int -> float allowed
    checker.checkAssignment("c", checker.getType("true"));    // bool
    checker.checkAssignment("a", checker.getType("false"));   // error

    cout << "\n===== Expression Checking =====\n";

    string expr1 = checker.checkExpression("a", "+", "5");
    checker.checkAssignment("a", expr1);

    string expr2 = checker.checkExpression("a", "+", "b");
    checker.checkAssignment("b", expr2);

    string expr3 = checker.checkExpression("c", "+", "5");
    checker.checkAssignment("a", expr3);

    return 0;
} 