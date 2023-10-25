#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("2.in");

void part1()
{
    cout << "Part1:\n";
    int hPos = 0;
    int depth = 0;
    string command;
    int value;
    while(fin >> command >> value)
    {
        //cout << command << value << endl;
        if(command.compare("forward") == 0)
            hPos += value;
        else if(command.compare("down") == 0)
            depth += value;
        else
            depth -= value;
    }
    cout << hPos * depth << endl;
}

void part2()
{
    fin.close();
    fin.open("2.in");
    cout << "Part2:\n";
    int hPos = 0;
    int depth = 0;
    int aim = 0;
    string command;
    int value;
    while(fin >> command >> value)
    {
        //cout << command << value << endl;
        if(command.compare("forward") == 0)
        {
            hPos += value;
            depth += (aim * value);
        }
        else if(command.compare("down") == 0)
            aim += value;
        else
            aim -= value;
    }
    cout << hPos * depth;
}

int main()
{
    part1();
    part2();
    return 0;
}