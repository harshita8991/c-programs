# PROGRAM 14
```cpp
#include <iostream>
#include <fstream>
#include <cctype>  // For isspace()

void removeWhitespacesAndCopy(const std::string& inputFile, const std::string& outputFile) {
    std::ifstream inFile(inputFile);
    std::ofstream outFile(outputFile);

    if (!inFile) {
        std::cerr << "Error: Cannot open input file.\n";
        return;
    }
    if (!outFile) {
        std::cerr << "Error: Cannot open output file.\n";
        return;
    }

    char ch;
    while (inFile.get(ch)) {
        if (!std::isspace(static_cast<unsigned char>(ch))) {
            outFile.put(ch);
        }
    }

    std::cout << "File copied successfully without whitespaces.\n";

    inFile.close();
    outFile.close();
}

int main() {
    std::string inputFile = "input.txt";
    std::string outputFile = "output.txt";

    removeWhitespacesAndCopy(inputFile, outputFile);

    return 0;
}
```
![image](https://github.com/user-attachments/assets/adf9bb4b-a4f2-48fa-a7aa-cdd9a51199c8)
